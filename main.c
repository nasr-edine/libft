#include "includes/libft.h"
#include <stdlib.h>
#include <string.h>

int main()
{

//     			int		size = 128 * 1024 * 1024;
// 			char	*dst = (char *)malloc(sizeof(char) * size);
// 			char	*data = (char *)malloc(sizeof(char) * size);
//             			memset(data, 'A', size);

//  memmove(dst, data, size);
//             // puts(dst);
// 			ft_memmove(dst, data, size);

//   char str[] = "abcdefghij";
//   char strb[] = "abcdefghij";
// //   printf("%s\n", str+20);
// //   printf("%s\n", str+15);
// int n =2;
//   memmove (str,str+5,n);
//   puts (str);

//   ft_memmove (strb,strb+5,n);
//   puts (strb);

//    char csrc[100] = "Geeksfor"; 
//    ft_memmove(csrc+5, csrc, strlen(csrc)+1); 
//    printf("%s", csrc); 

//    char str[] = "memmove can be very useful......";
//   memmove (str+20,str+15,11);
//   puts (str);
//      char stra[] = "memmove can be very useful......";
//   ft_memmove (stra+20,stra+15,11);
//   puts (stra);
//                 printf("test");

// 			char	*src = "thanks to @apellicc for this test !\r\n";
// 			char	dst1[0xF0];
// 			int		size = strlen(src);

// 			// char	*r1 = memmove(dst1, src, size);
// 			// char	*r2 = ft_memmove(dst1, src, size);			
//                 printf("test");

//             char	*r1;
// 			char	*r2;


// puts(r1);
// puts(r2);
//             			r1 = memmove("", "" - 1, 0);
//                                     puts(r1);

// 			r2 = ft_memmove("", "" - 1, 0);
// // puts(r2);
// 			char	dst1[0xF0];
// 			char	dst2[0xF0];
// 			char	*data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
// 			int		size = 0xF0 - 0xF;

// 			memset(dst1, 'A', sizeof(dst1));
// 			memset(dst2, 'A', sizeof(dst2));

// 			memcpy(dst1, data, strlen(data));
// 			memcpy(dst2, data, strlen(data));
// 			memmove(dst1, dst1 + 3, size);
// 			ft_memmove(dst2, dst2 + 3, size);
//             puts(dst1);
//             puts("\n");
//             puts (dst2);

			// char	src[0xF0]= "abcdefghijklmnopqrstuvwxyz";
			// char	*dst = src+10;			
            
            // char	src2[0xE0]= "abcdefghijklmnopqrstuvwxyz";
			// char	*dst2 = src+10;			


            // memmove(dst2, src2, 3);
            // ft_memmove(dst, src, 3);
            // puts (src);
            // puts (dst);

            // puts (src2);
            // puts (dst2);


//   char a[] = "abc";
//   char b[] = "def";
  
//     char c[] = "abc";
//   char d[] = "def";
//   memmove (d,c,3);
//   puts (c);
//   puts (d);

//   ft_memmove (b,a,3);
//   puts (a);
//   puts (b);
char* msg = "This is the string: not copied";

    // char buffer[80];

    // memset( buffer, '\0', 80 );
    // memccpy( buffer, msg, ':', 80 );

    // printf( "%s\n", buffer );


    // char buffer2[80];

    // memset( buffer2, '\0', 80 );
    // memccpy( buffer2, msg, ':', 80 );

    // printf( "%s\n", buffer2 );

	// 		char	src[] = "test basic du memccpy !";
	// 		char	buff1[22];
	// 		char	buff2[22];

	// 		memset(buff1, 0, sizeof(buff1));

	// 		char	*r1 = memccpy(buff1, src, 'd', 22);
	// 		char	*r2 = ft_memccpy(buff2, src, 'd', 22);
    
    // printf( "%s\n", r1-5 );
    // printf( "%s\n", r2-5 );

    //     printf( "%s\n", buff1 );
    // printf( "%s\n", buff2 );

    //     printf( "%d\n", r1[0] );
    // printf( "%d\n", r2[0] );

    // printf( "%d\n", '\0' );


			char	buff1[] = "abcdefghijklmnopqrstuvwxyz";
			char	buff2[] = "abcdefghijklmnopqrstuvwxyz";
			char	*src =    "string with\200inside !";

			char	*r1 = memccpy(buff1, src, '\200', 21);
			char	*r2 = ft_memccpy(buff2, src, '\200', 21);


        printf( "%s\n", buff1 );
    printf( "%s\n", buff2 );
    printf( "%s\n", r1);
    printf( "%s\n", r2);
    return 0;
}

// memmove can be |very useful......
// memmove can be very very u......
// memmove can be |very useful......

// very useful......
// useful......

	// SANDBOX_RAISE(
	// 		int		size = 128 * 1024 * 1024;
	// 		char	*dst = (char *)malloc(sizeof(char) * size);
	// 		char	*data = (char *)malloc(sizeof(char) * size);

	// 		memset(data, 'A', size);

	// 		if (!dst)
	// 			exit(TEST_INVISIBLE);
	// 		ft_memmove(dst, data, size);
	// 		exit(TEST_SUCCESS);
	// 		);