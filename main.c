#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
        char c = 'c';
        int     i = 42;
        printf("simple test : usual conversions\n");
        printf("   %c %s %d %p %i %x %X %u %%", c, "hello", i, &c, i, c, i, i);
        printf("\n");
        ft_printf("   %c %s %d %p %i %x %X %u %%", c, "hello", i, &c, i, c, i, i);
 printf("\n---------------------------------------------------------------------\n");
        
        printf("less simple test : multiple conversions of a same type\n");
        printf("   %c %d %p %i %x %X %u %%", i, i, &i, i, i, i, i);
        printf("\n");
        ft_printf("   %c %d %p %i %x %X %u %%", i, i, &i, i, i, i, i);
printf("\n---------------------------------------------------------------------\n");

        printf("sligntly complicated test : less usual conversions\n");
        printf("   %c %s %d %p %i %x %X %u %%", c, "hello", i, &c, i, c, i, i);
        printf("\n");
        ft_printf("   %c %s %d %p %i %x %X %u %%", c, "hello", i, &c, i, c, i, i);
 printf("\n---------------------------------------------------------------------\n");


 printf("strange cases\n");
      // printf("%d", printf("   %k%s0x%X         %12p %1i %X %X %*u %%", 'c', "null", 0x01024, (void*)2, 1, 0, 0, 5, 10)); //error
        printf("\n");
        printf("%d", ft_printf("   %k%s0x%X         %12p %1i %X %X %*u %%", 'c', "null", 0x01024, (void*)2, 1, 0, 0, 5, 10));
        printf("\n");
        printf("\\t");
        printf("\n");
        ft_printf("\\t");
        ft_printf("\n\n");
       
        //printf("%d", printf("%%%%%"));   //error
        //printf("%d", ft_printf("%%%%%"));
        //printf("\n");
       // printf("%d", printf("%12a%"));  //error
        //printf("%d",ft_printf("%12a%"));

 printf("\n---------------------------------------------------------------------\n");


        printf("empty string\n");
        printf("%d", printf(""));
        printf("\n");
        printf("%d", ft_printf(""));
        printf("\n");
 printf("\n---------------------------------------------------------------------\n");      

 printf("format null\n");
        printf("%d", printf(0));
        printf("\n");
        printf("%d", ft_printf(0));
        printf("\n");
 printf("\n---------------------------------------------------------------------\n");   

        return (0);


}

// int main(void)
// {
// 	int	t = -2534;
// 	void	*pointer = &t;
// 	unsigned int	u = 4294967295;

// 	printf("-----+++++=====SIMPLE TEXT=====+++++-----\n\n");

// 	printf("| = %d <- OG\n", printf(NULL));
// 	printf("| = %d <- YOUR\n", ft_printf(NULL));
//         printf("\n");

// 	printf("| = %d <- OG\n", printf(""));
// 	printf("| = %d <- YOUR\n", ft_printf(""));
// 	printf("\n");

// 	printf("| = %d <- OG\n", printf("Testing 1 2 3"));
//         printf("| = %d <- YOUR\n", ft_printf("Testing 1 2 3"));
//         printf("\n");

// 	printf("-----+++++=====%%C=====+++++-----\n\n");

// 	printf("| = %d <- OG\n", printf("%%c: %c", 'a'));
//         printf("| = %d <- YOUR\n", ft_printf("%%c: %c", 'a'));
//         printf("\n");

// 	printf("| = %d <- OG\n", printf("%%c: %c", 'g'));
//         printf("| = %d <- YOUR\n", ft_printf("%%c: %c", 'g'));
//         printf("\n");

// 	printf("| = %d <- OG\n", printf("%%c: %c", 'z'));
//         printf("| = %d <- YOUR\n", ft_printf("%%c: %c", 'z'));
//         printf("\n");

// 	printf("-----+++++=====%%S=====+++++-----\n\n");

// 	printf("| = %d <- OG\n", printf("%%s: %s", (char *)NULL));
//         printf("| = %d <- YOUR\n", ft_printf("%%s: %s", (char *)NULL));
//         printf("\n");	

// 	printf("| = %d <- OG\n", printf("%%s: %s", ""));
//         printf("| = %d <- YOUR\n", ft_printf("%%s: %s", ""));
//         printf("\n");

// 	printf("| = %d <- OG\n", printf("%%s: %s", "Hello World"));
//         printf("| = %d <- YOUR\n", ft_printf("%%s: %s", "Hello World"));
//         printf("\n");

// 	printf("-----+++++=====%%P=====+++++-----\n\n");

// 	printf("| = %d <- OG\n", printf("%%p: %p", pointer));
//         printf("| = %d <- YOUR\n", ft_printf("%%p: %p", pointer));
//         printf("\n");

// 	printf("-----+++++=====%%D=====+++++-----\n\n");

// 	printf("| = %d <- OG\n", printf("%%d: %d", 0));
//         printf("| = %d <- YOUR\n", ft_printf("%%d: %d", 0));
//         printf("\n");

// 	printf("| = %d <- OG\n", printf("%%d: %d", 5));
//         printf("| = %d <- YOUR\n", ft_printf("%%d: %d", 5));
//         printf("\n");
	
// 	printf("| = %d <- OG\n", printf("%%d: %d", 2147483647));
//         printf("| = %d <- YOUR\n", ft_printf("%%d: %d", 2147483647));
//         printf("\n");

// 	printf("-----+++++=====%%U=====+++++-----\n\n");

// 	printf("| = %d <- OG\n", printf("%%u: %u", 0));
//         printf("| = %d <- YOUR\n", ft_printf("%%u: %u", 0));
//         printf("\n");

//         printf("| = %d <- OG\n", printf("%%u: %u", 5));
//         printf("| = %d <- YOUR\n", ft_printf("%%u: %u", 5));
//         printf("\n");

//         printf("| = %d <- OG\n", printf("%%u: %u", 2147483647));
//         printf("| = %d <- YOUR\n", ft_printf("%%u: %u", 2147483647));
//         printf("\n");

// 	printf("| = %d <- OG\n", printf("%%u: %u", u));
//         printf("| = %d <- YOUR\n", ft_printf("%%u: %u", u));
//         printf("\n");
// }
// int    main(void)
// {
//     int    i;
//     unsigned int    j;
//     char    *str;
//     void    *ptr;

//     i = -2147483648;
//     ft_printf("int min :\n");
//     ft_printf("<-ft : %d\n", ft_printf("%d", i));
//     printf("<-OG : %d\n", printf("%d", i));
//     str = NULL;
//     ft_printf("str NULL :\n");
//     ft_printf("<-ft : %d\n", ft_printf("%s", str));
//     printf("<-OG : %d\n", printf("%s", str));
//     ptr = NULL;
//     ft_printf("ptr NULL :\n");
//     ft_printf("<-ft : %d\n", ft_printf("%p", str));
//     printf("<-OG : %d\n", printf("%p", str));
//     ft_printf("guillemets :\n");
//     ft_printf("<-ft : %d\n", ft_printf(""));
//     printf("<-OG : %d\n", printf(""));
    
//     ft_printf("ft_printf(0) :\n");
//     ft_printf("<-ft : %d\n", ft_printf(0));
//     printf("<-OG : %d\n", printf(0));
    
//     ft_printf("pourcent :\n");
//     ft_printf("<-ft : %d\n", ft_printf("%%"));
//     printf("<-OG : %d\n", printf("%%"));
//     str = "les loulous";
//     ptr = str;
//     ft_printf("differents flags au milieu d'un phrase :\n");
//     ft_printf("<-ft : %d\n", ft_printf("%p Salut %s l'int %% min vaut %d au revoir %s", ptr, str, i, str));
//     printf("<-OG : %d\n", printf("%p Salut %s l'int %% min vaut %d au revoir %s", ptr, str, i, str));
//     i = 42;
//     ft_printf("print X :\n");
//     ft_printf("<-ft : %d\n", ft_printf("%X", i));
//     printf("<-OG : %d\n", printf("%X", i));
//     ft_printf("print x :\n");
//     ft_printf("<-ft : %d\n", ft_printf("%x", i));
//     printf("<-OG : %d\n", printf("%x", i));
//     j = 2147483648;
//     ft_printf("print u :\n");
//     ft_printf("<-ft : %d\n", ft_printf("%u", j));
//     printf("<-OG : %d\n", printf("%u", j));
// }
