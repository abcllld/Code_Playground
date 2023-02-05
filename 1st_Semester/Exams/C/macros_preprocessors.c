// #include <stdio.h>
// int main()
// {
// 	int i = 5;
// 	if (--i){
// 		printf("%d ", i);
// 		// main(10);a
// 	}
// }


// #include <stdio.h>
// int main(void)
// {
// 	static int i = 5;
// 	if (--i){
// 		printf("%d ", i);
// 		main();
// 	}
// }



// #include <stdio.h>
// #define MULTIPLY(a, b) a* b
// int main()
// {
//     printf("%d", MULTIPLY(2 + 3, 3 + 5));
//     return 0;
// }


// #include <stdio.h>
// #define adding(a, b) a##b
// int main() 
// { 
//     printf("%d ", adding(129, 345));
//  }


// #include <stdio.h>
// #define get(a) #a
// int main()
// {
// 	// GeeksQuiz is changed to "GeeksQuiz"
// 	printf("%s", get(GeeksQuiz));
// }


// #include <stdio.h>
// #define PRINT(i, limit)	\
// 	while (i < limit) {		\
// 		printf("GeeksQuiz\n");	   \
// 		i++;						\
// 	}
// int main()
// {
// 	int i = 1;
// 	PRINT(i, 3);
// 	return 0;
// }



// #include <stdio.h>

// #define square(x) x* x
// int main()
// {
// 	// Expanded as 36/6*6
// 	int x = 36 / square(6);
// 	printf("%d", x);
// 	return 0;
// }



// #include <stdio.h>

// #define square(x) (x* x)
// int main()
// {
// 	// Expanded as 36/6*6
// 	int x = 36 / square(6);
// 	printf("%d", x);
// 	return 0;
// }


// #include <stdio.h>

// int main()
// {
// 	printf("Current File :%s\n", __FILE__);
// 	printf("Current Date :%s\n", __DATE__);
// 	printf("Current Time :%s\n", __TIME__);
// 	printf("Line Number :%d\n", __LINE__);
// 	return 0;
// }


// #include <stdio.h>
// #define LIMIT 100
// int main()
// {
// 	printf("%d", LIMIT);
// // removing defined macro LIMIT
// #undef LIMIT
// 	// Next line causes error as LIMIT is not defined
// 	printf("%d", LIMIT);
// 	return 0;
// }

// #include <stdio.h>
// #define PRINT(i, limit) do 
//                         { 
//                             if (i++ < limit) 
//                             { 
//                                 printf("GeeksQuizn"); 
//                                 continue; 
//                             } 
//                         }while(1)
 
// int main()
// {
//     PRINT(0, 3);
//     return 0;
// }

// #include <stdio.h>
// #define a 10
// int main()
// {
//   printf("%d ",a);
 
//   #define a 50
 
//   printf("%d ",a);
//   return 0;
// }

