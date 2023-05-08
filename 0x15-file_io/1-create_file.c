#include "main.h"
#include <fcntl.h>
/**
 * create_file - creats file
 * @filename: text file
 * @text_content: pointer
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fi, wi, le;
if (filename == NULL)
return (-1);
if (text_content != NULL)
for (le = 0; text_content[le]; le++)
fi = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wi = write(fi, text_content, le);
if (fi == -1 || wi == -1)
return (-1);
close(fi);
return (1);
}
