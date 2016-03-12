/*
** getnextline.c for gnl in /home/mourau_a/C/ProgElem/CPE_2015_getnextline
**
** Made by andrea mouraud
** Login   <mourau_a@epitech.net>
**
** Started on  Mon Jan 11 14:06:07 2016 andrea mouraud
** Last update Thu Mar  3 15:50:32 2016 andrea mouraud
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"

char		*get_next_line(const int fd)
{
  static t_gnl	gnl;

  if ((gnl.i == 0 && (gnl.r = read(fd, gnl.buf, READ_SIZE)) < 1)
      || gnl.j == 0 && (gnl.line = malloc(LINE_MAX)) == NULL)
    return (NULL);
  while (gnl.i != gnl.r)
    {
      if (gnl.buf[gnl.i] == 0 || gnl.buf[gnl.i] == '\n')
	{
	  gnl.i++;
	  gnl.line[gnl.j] = 0;
	  gnl.j = 0;
	  return (gnl.line);
	}
      gnl.line[gnl.j++] = gnl.buf[gnl.i++];
    }
  gnl.i = 0;
  get_next_line(fd);
}
