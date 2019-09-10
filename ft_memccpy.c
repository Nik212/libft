#include <string.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char *ptr_dst;
    char *ptr_src;
    int i;

    i = 0;
    ptr_dst = dest;
    ptr_src = src;
    while (*ptr_src != c && i != n)
    {
      *ptr_dst++ = *ptr_src++;
      i++;
    }
    *ptr_dst++ = *ptr_src++;
    return ptr_dst;
}


int main()
{
    char src[8] = "12345:65";
    char dest[10];
    ft_memccpy(dest, src, ':', 8); 
}