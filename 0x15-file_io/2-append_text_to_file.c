#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
        int o, w, l = 0;

        if (filename == NULL)
                return (-1);
        if (textcontent != NULL)
        {
                for (; text_content[l];)
                        len++;
        }
        o = open(filename, O_WRONLY | O_APPEND);
        w = write(fd, text_content, len);
        if (o == -1 || w == -1)
                return (-1);
        close(o);
        return (1);
}
