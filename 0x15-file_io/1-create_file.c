#include"main.h"
/**
  * create_file - function that creates a file
  * @filename: the name of the file to create
  * @text_content: a NULL terminated string to write to the file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	int flag;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i] != '\0')
		{
			flag = write(fd, &text_content[i], 1);
			if (!flag)
				return (-1);
			i++;
		}
	}
	close(fd);
	return (1);
}
