#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>

/* Function to print error message and exit with status code 98*/
void print_error(const char* message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

/* Function to print the information contained in the ELF header*/
void print_elf_header(const Elf64_Ehdr* header) {
    int i; 
    
    /* Print Magic*/
    printf("Magic:   ");
    for (i = 0; i < EI_NIDENT; ++i) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

 /* Print Class*/
    printf("Class:                             ");
    switch (header->e_ident[EI_CLASS]) {
        case ELFCLASSNONE: printf("None\n"); break;
        case ELFCLASS32: printf("ELF32\n"); break;
        case ELFCLASS64: printf("ELF64\n"); break;
        default: printf("<unknown>\n"); break;
    }

 /* Print Data*/
    printf("Data:                              ");
    switch (header->e_ident[EI_DATA]) {
        case ELFDATANONE: printf("None\n"); break;
        case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
        case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
        default: printf("<unknown>\n"); break;
    }

/* Print Version*/
    printf("Version:                           %d\n", header->e_ident[EI_VERSION]);

/* Print OS/ABI*/
    printf("OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI]) {
        case ELFOSABI_NONE: printf("UNIX System V ABI\n"); break;
        case ELFOSABI_HPUX: printf("HP-UX ABI\n"); break;
        case ELFOSABI_NETBSD: printf("NetBSD ABI\n"); break;
        case ELFOSABI_LINUX: printf("Linux ABI\n"); break;
        case ELFOSABI_SOLARIS: printf("Solaris ABI\n"); break;
        case ELFOSABI_AIX: printf("AIX ABI\n"); break;
        case ELFOSABI_IRIX: printf("IRIX ABI\n"); break;
        case ELFOSABI_FREEBSD: printf("FreeBSD ABI\n"); break;
        case ELFOSABI_TRU64: printf("TRU64 UNIX ABI\n"); break;
        case ELFOSABI_MODESTO: printf("Novell Modesto ABI\n"); break;
        case ELFOSABI_OPENBSD: printf("OpenBSD ABI\n"); break;
        case ELFOSABI_ARM: printf("ARM architecture ABI\n"); break;
        case ELFOSABI_STANDALONE: printf("Standalone (embedded) ABI\n"); break;
        default: printf("<unknown>\n"); break;
    }

 /* Print ABI Version*/
    printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
 /* Print type*/
    printf("Type:                              ");
    switch (header->e_type) {
        case ET_NONE: printf("None (Unknown type)\n"); break;
        case ET_REL: printf("REL (Relocatable file)\n"); break;
        case ET_EXEC: printf("EXEC (Executable file)\n"); break;
        case ET_DYN: printf("DYN (Shared object file)\n"); break;
        case ET_CORE: printf("CORE (Core file)\n"); break;
        default: printf("<unknown>\n"); break;
    }

 /*  Print Entry point address */
    printf("Entry point address:               0x%lx\n", header->e_entry);
}

 /* Check if the correct number of arguments is provided */
int main(int argc, char* argv[]) {
    const char* filename;
    int fd;
    Elf64_Ehdr header;

    if (argc != 2) {
        print_error("Invalid number of arguments");
    }

    filename = argv[1];
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Unable to open file");
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        print_error("Unable to read ELF header");
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        print_error("Not an ELF file");
    }
 /*  Print the ELF header information */
    print_elf_header(&header);

    close(fd);
    return 0;
}