// #include <stdio.h>
// int main()
// {
// 	signed a;
// 	signed b;

// 	// size of a and b is equal to the size of int
// 	printf("The size of a is ",sizeof(a));
// 	printf("The size of b is ",sizeof(b));
// 	return (0);
// }



// C/C++ program to demonstrate return value
// of printf()

// #include <stdio.h>
// int main()
// {
// 	long int n = 123456789;

// 	printf("While printing ");
// 	printf(", the value returned by printf() is : %d",printf("%ld", n));

// 	return 0;
// }


/* A simple scanset example */
// #include <stdio.h>

// int main(void)
// {
// 	char str[128];

// 	printf("Enter a string: ");
// 	scanf("%[A-Z]s", str);

// 	printf("You entered: %s\n", str);

// 	return 0;
// }



// #include<stdio.h>

// int main()
// {
// int c;
// printf("geeks for %ngeeks ", &c);
// printf("%d", c);
// getchar();
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	int i, n=2;
// 	char str[50];

// 	//open file sample.txt in write mode
// 	FILE *fptr = fopen("sample.txt", "w");
// 	if (fptr == NULL)
// 	{
// 		printf("Could not open file");
// 		return 0;
// 	}

// 	for (i=0; i<n; i++)
// 	{
// 		puts("Enter a name");
// 		gets(str);
// 		fprintf(fptr,"%d.%s\n", i, str);
// 	}
// 	fclose(fptr);

// 	return 0;

// }



// C program to demonstrate
// the behavior of %i and %d
// with printf statement
// #include <stdio.h>

// int main()
// {
// 	int num = 9;
	
// 	// print value using %d
// 	printf("Value of num using %%d is = %d\n", num);
	
// 	// print value using %i
// 	printf("Value of num using %%i is = %i\n", num);

// 	return 0;
// }


// C program to demonstrate the difference
// between %i and %d specifier
// #include <stdio.h>

// int main()
// {
// 	int a, b, c;

// 	printf("Enter value of a in decimal format:");
// 	scanf("%d", &a);

// 	printf("Enter value of b in octal format: ");
// 	scanf("%i", &b);

// 	printf("Enter value of c in hexadecimal format: ");
// 	scanf("%i", &c);

// 	printf("a = %i, b = %i, c = %i", a, b, c);

// 	return 0;
// }



































































































































































