/*
** getnextline.h for gnl in /home/mourau_a/C/ProgElem/CPE_2015_getnextline
**
** Made by andrea mouraud
** Login   <mourau_a@epitech.net>
**
** Started on  Fri Jan 15 11:46:56 2016 andrea mouraud
** Last update Thu Mar  3 16:00:54 2016 andrea mouraud
*/


#ifndef		READ_SIZE
# define	READ_SIZE (42)
#endif		/* !READ_SIZE */

#ifndef		GET_NEXT_LINE_H_
# define	GET_NEXT_LINE_H_

# define	LINE_MAX  (4096)

typedef struct	s_gnl
{
  int		i;
  int		j;
  int		k;
  int		r;
  int		a;
  char		buf[READ_SIZE];
  char		*line;
}		t_gnl;

char		*get_next_line(const int fd);

#endif		/* !GET_NEXT_LINE_H_ */
