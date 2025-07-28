#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>
#include <stdarg.h>

void	twothree_sort(int *nb, int ac);
void	ft_ra(int *nb, int ac);
void	ft_rb(int *nb, int ac);
void	ft_rr(int *nb, int ac);
void	ft_rra(int *nb, int ac);
void	ft_rrb(int *nb, int ac);
void	ft_rrr(int *nb, int *nb2, int ac);
void	ft_sa(int *nb, int ac);
void	ft_sb(int *nb, int ac);
void	ft_ss(int *nb, int *nb2, int ac);
int		ft_printf(const char *x, ...);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_puthexamaj(const unsigned int n);
int		ft_puthexamin(const unsigned int n);
int		ft_putunbr(const unsigned int n);
int		ft_putpointer(void *pointer);
size_t	ft_strlen(const char *theString);
void	four_sort(int *nb, int *nb2, int *asize, int *bsize);
void	ft_pb(int *a, int *b, int *size_a, int *size_b);
void	ft_pa(int *a, int *b, int *size_a, int *size_b);
char	**ft_split(const char *s, char c);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_conversion(char **argv, int *ac);
int		ft_atoi(const char *str);
int		ra_themin(int *nb, int ac);
int		max_bits(int *nb, int ac);
int		*normaliz_tab(int *nb, int ac);
void	radix(int *nb, int *nb2, int *size_a, int *size_b);
int		ft_isdigit(int c);
void	ft_error(char *message);
void	check_max_min(int argv, char **argv2, int *a, int *b);
void	ft_free(int *a, int *b);
int		check_order(int *nb, int sa);
int		acone(char **argvchar);
void	push_function(int size_a, int size_b, int *a, int *b);

#endif