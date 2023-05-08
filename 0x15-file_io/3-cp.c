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

	fd = open(file_from, O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY, 0664);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", file_to);
		exit(99);
	}
	closeflag = close(fd);
	if (closeflag < 0)
	{
		 dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
	}
	closeflag = close(fd2);
	if (closeflag < 0)
	{
		 dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
	}
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
		dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n");
		exit(97);
	}

}
