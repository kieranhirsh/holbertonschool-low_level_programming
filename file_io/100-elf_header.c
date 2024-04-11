#include <elf.h>
#include <fcntl.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * check_elf - checks if a file is an ELF file
 * @e_ident: an array
 *
 */
void check_elf(unsigned char *e_ident)
{
	if (e_ident[EI_MAG0] != 127)
	{
		printf("0 = %i\n", e_ident[EI_MAG0]);
		printf("Not an ELF file\n");
		exit(98);
	}

	if (e_ident[EI_MAG1] != 'E')
	{
		printf("1 = %i\n", e_ident[EI_MAG1]);
		printf("Not an ELF file\n");
		exit(98);
	}

	if (e_ident[EI_MAG2] != 'L')
	{
		printf("2 = %i\n", e_ident[EI_MAG2]);
		printf("Not an ELF file\n");
		exit(98);
	}

	if (e_ident[EI_MAG3] != 'F')
	{
		printf("3 = %i\n", e_ident[EI_MAG3]);
		printf("Not an ELF file\n");
		exit(98);
	}

	printf("ELF Header:\n");
}

/**
 * print_magic - prints the magic numbers
 * @e_ident: the magic numbers
 *
 */
void print_magic(unsigned char *e_ident)
{
	int ii;

	printf("  Magic:  ");
	for (ii = 0 ; ii < EI_NIDENT ; ii++)
		printf(" %02x", e_ident[ii]);
	printf("\n");
}

/**
 * print_class - prints the class
 * @e_ident: the class
 *
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
	case (ELFCLASSNONE):
		printf("none\n");
		break;
	case (ELFCLASS32):
		printf("ELF32\n");
		break;
	case (ELFCLASS64):
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - prints the data
 * @e_ident: the data
 *
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
	case (ELFDATANONE):
		printf("none\n");
		break;
	case (ELFDATA2LSB):
		printf("2's complement, little endian\n");
		break;
	case (ELFDATA2MSB):
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

/**
 * print_version - prints the version
 * @e_ident: the version
 *
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %i ", e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
	case (EV_NONE):
		printf("\n");
		break;
	case (EV_CURRENT):
		printf("(current)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_VERSION]);
	}
}

/**
 * print_osabi - prints the OS/ABI
 * @e_ident: the OS/ABI
 *
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abiversion - prints the ABI version
 * @e_ident: the ABI version
 *
 */
void print_abiversion(unsigned char *e_ident)
{
	printf("  ABI Version:                       %i\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the type
 * @e_type: the type
 *
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type = __builtin_bswap32(e_type);

	printf("  Type:                              ");
	switch (e_type)
	{
	case (ET_NONE):
		printf("NONE (No file type)\n");
		break;
	case (ET_REL):
		printf("REL (Relocatable file)\n");
		break;
	case (ET_EXEC):
		printf("EXEC (Executable file)\n");
		break;
	case (ET_DYN):
		printf("DYN (Shared object file)\n");
		break;
	case (ET_CORE):
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - prints the entry
 * @e_entry: the entry
 * @e_ident: the class
 *
 */
void print_entry(long unsigned int e_entry, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_entry = __builtin_bswap32(e_entry);

	printf("  Entry point address:               0x");
	switch (e_ident[EI_CLASS])
	{
	case (ELFCLASSNONE):
		printf("none\n");
		break;
	case (ELFCLASS32):
		printf("%x\n", (unsigned int)e_entry);
		break;
	case (ELFCLASS64):
		printf("%lx\n", e_entry);
		break;
	default:
		printf("<unknown: %lx>\n", e_entry);
	}
}

/**
 * main - check the code
 * @argc: the number of command line arguments passed to the program (unused)
 * @argv: the command line arguments passed to the program
 *
 * Return: 0, if success
 *         98, if failure
 *
 */
int main(int argc, char **argv)
{
	Elf64_Ehdr *header;
	int fd;

	if (argc != 2)
	{
		printf("usage: %s filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		printf("couldn't malloc\n");
		return (98);
	}

	if (read(fd, header, sizeof(Elf64_Ehdr)) == -1)
	{
		printf("couldn't read %s\n", argv[1]);
		return (98);
	}

	check_elf(header->e_ident);
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abiversion(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close(fd);

	return (0);
}

