#include "libft.h" 

// Test pour is_alpha, is_alphnum ...
/*
   int	main() 
   {
   printf("%d\n", ft_isalpha('A'));
   printf("%d\n", ft_isalpha(' '));
   printf("%d\n", ft_isalpha('2'));
   return 0;
   }
 */

// Test pour atoi
/*
   int	main()
   {
   printf("%d\n", ft_atoi("11230903"));
   printf("%d\n", ft_atoi("-11230903"));
   printf("%d\n", ft_atoi("1123c903"));
   printf("%d\n", atoi("11230903"));
   printf("%d\n", atoi("-11230903"));
   printf("%d\n", atoi("1123c903"));

   }
 */

// Test pour strchr, strrchr
/*
   int     main(void)                                                                                      
   {
	char *s = "bonjour";
   printf("%s\n",ft_strrchr(s, 'o')); 
   printf("%s\n",ft_strrchr(s, 's')); 
   printf("%s\n",ft_strrchr(s, 't' + 256)); 
   printf("%s\n",strrchr(s, 'o')); 
   printf("%s\n",strrchr(s, 's')); 
   printf("%s\n",strrchr(s, 't' + 256)); 
   }           
*/

// Test pour strncmp, strnstr, 
/*
   int     main(void)
   {
   printf("%d\n",ft_strncmp("","",6));
   printf("%d\n",ft_strncmp("atoms\0\0\0\0","atoms\0abc",8));
   printf("%d\n",ft_strncmp("Coucou","",6));
   printf("%d\n",strncmp("","",6));
   printf("%d\n",strncmp("atoms\0\0\0\0","atoms\0abc",8));
   printf("%d\n",strncmp("Coucou","",6));
   return 0;
   }
*/


// Test pour memset, 
/*
   int     main(void)
   {
   unsigned char b[] = "vlademir"; 
   ft_memset(b, 'a', 4);   
   printf("%s", b); 
   }
 */

// Test pour ft_bzero, 
/*
   int     main(void) 
   {
   char *str = "La bite a Dudule";

   printf("%s\n", str);
   ft_bzero(str, 3);
   printf("%i %i %i\n",str[0], str[1], str[2]);
// printf("%s\n", ft_bzero("La bite a dudule", 6));
}
 */

// Test pour ft_memcpy,calloc and co
/*
   int     main(int ac, char **av)
   {
   void *m1;
   void *m2; 

   (void)ac; 
   (void)av; 
   m1 = calloc(6,1);
   ft_memset (m1, 65, 5);
   printf("1 : %s\n", (char *)m1);

   m2 = calloc(6, 1);
   ft_memset(m2, 66, 5);
   printf("2 : %s\n",(char *)m2);
   ft_memcpy(m2, m1, 5);

   printf("3 : %s\n",(char *)m1);
   printf("4 : %s\n",(char *)m2);
   }    
*/

// Test pour strlcpy, 
/*
#include <stdio.h>

int     main(void)
{
char src[] = "Hello, World!";
char dest[] = "Hello "; 
printf("%zu | %s\n" , ft_strlcpy(dest, src, 10), dest);
return 0;
}
 */

// Test pour strlcat, 
/*
   int main() {
   char destination[40] = "Coucou les bouffons";
   const char *source = "Salut les gentils ";

   size_t concatenated = ft_strlcat(destination, source, sizeof(destination));

   printf("Concatenated: %zu\n", concatenated);
   printf("Destination: %s\n", destination);

   return 0;
   }
 */

// Test pour memchr, 

/*
   int main () {
   const char str[] = "Coucou les copains";
   const char ch = 97;
   char *ret;

   ret =ft_memchr(str, 't' + 256, strlen(str));
   printf("String after |%c| is - |%s|\n", ch, ret);
   ret = memchr(str, 't' + 256, strlen(str)); 
   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
   }
*/

//Test pour memcmp,
/*
   int	main()
   {
   printf("1 : %d\n",ft_memcmp("Coucou les asticots","Coucou les bambins", 14));
   printf("2 : %d\n",ft_memcmp("Coucou les asticots","Coucou les asticots", 14));
   printf("3 : %d\n",ft_memcmp("","Coucou les bambins", 14));
   printf("4 : %d\n",ft_memcmp("Coucou les asticots","esssssssssssssssss", 4));
   printf("5 : %d\n",ft_memcmp("Coucou les asticots","esssssssssssssssss", 0));
   printf("1 : %d\n",memcmp("Coucou les asticots","Coucou les bambins", 14));
   printf("2 : %d\n",memcmp("Coucou les asticots","Coucou les asticots", 14));
   printf("3 : %d\n",memcmp("","Coucou les bambins", 14));
   printf("4 : %d\n",memcmp("Coucou les asticots","esssssssssssssssss", 4));
   printf("5 : %d\n",memcmp("Coucou les asticots","esssssssssssssssss", 0));
   }
 */
