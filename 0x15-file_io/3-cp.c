#include"main.h"
/**
  * cp - copies content of one file to another
  * @file_from: original file
  * @file_to: copied to file
  * Return: nothing
  */
void cp(char *file_from, char *file_to)
{
	int fd, fd2;
	int closeflag;
	int rflag = 1;
	int wflag = 1;
	char *buffer;

	buffer = malloc(sizeof(char) * BUFFSIZE);
	if (buffer == NULL)
		exit(101);
	fd = open(file_from, O_RDONLY);
	if (fd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd2 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while (rflag)
	{
		rflag = read(fd, buffer, BUFFSIZE);
		if (rflag < 0)
		{
			dprintf(2, "Error: Can't read from file %s\n", file_from);
			exit(99);
		}
		if (rflag == 0)
			break;
		wflag = write(fd2, buffer, rflag);
		if (wflag < 0)
		{
			dprintf(2, "Error: Can't write to file %s\n", file_to);
			exit(99);
		}
	}
	closeflag = close(fd2);
	if (closeflag < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	closeflag = close(fd);
	if (closeflag < 0)
	{
		 dprintf(2, "Error: Can't close fd %d\n", fd);
		 exit(100);
	}
	free(buffer);
}
/**
  * main - execution of cp
  * @argc: number of arguments
  * @argv: arguments
  * Return: 0
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}
