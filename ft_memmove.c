#include <string.h>

void  *ft_memmove(void *dest, const void *src, size_t n)
{
  void *d0 = dest;
  char *d = (char *) dest;
  char *s = (char *) src;
  if (s < d)
    for (s += n, d += n; 0 != n; --n)
      *--d = *--s;
  else if (s != d)
    for (; 0 != n; --n)
      *d++ = *s++;
  return d0;
}

int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";
   ft_memmove(dest, src, 3);
   return(0);
}