// //Q5. Write a program to check whether a given number is a palindrome or not.
// //#include <stdio.h>
// //
// //int main() {
// //    int num, i, rem, palindrome = 0, original;
// //
// //    printf("Enter The Number: ");
// //    scanf("%d", &num);
// //
// //    original = num; // Save original number
// //
// //    // Reverse the number using for loop
// //    for(i = 1; num != 0; i++) {
// //        rem = num % 10;
// //        palindrome = palindrome * 10 + rem;
// //        num = num / 10;
// //    }
// //
// //    // Check if original and reversed are equal
// //    if(original == palindrome)
// //        printf("%d is a palindrome.\n", original);
// //    else
// //        printf("%d is not a palindrome.\n", original);
// //
// //    return 0;
// //}
// #include<stdio.h>
// int main()
// {
// 	int i,num,rem,palindrome=0,original;
// 	printf("Enter the Number: ");
// 	scanf("%d",&num);
	
// 	original=num;
// 	for(i=1; num!=0; i++)
// 	{
// 		rem=num % 10;
// 		palindrome=palindrome*10+rem;
// 		num=num /10;
// 	}	
// 	if(palindrome==original)
// 	{
// 		printf("Yes,It is palindrome ");
// 	}else
// 	{
// 		printf("No ,It is palindrome ");
// 	}
// 	return 0;
// }
// //Q6. Write a program to check whether a number is an Armstrong number or not.
// #include <stdio.h>
// int main()
// {
//     int num, rem, Armstrong = 0, original;

//     printf("Enter the Number: ");
//     scanf("%d", &num);

//     original = num;

//     while(num != 0)
//     {
//         rem = num % 10;
//         Armstrong = Armstrong + rem * rem * rem;
//         num = num / 10;
//     }

//     if(Armstrong == original)
//     {
//         printf("Yes, It is an Armstrong number.\n");
//     }
//     else
//     {
//         printf("No, It is not an Armstrong number.\n");
//     }

//     return 0;
// }
//Q7. Write a program to print Fibonacci series up to N terms. 
// #include <stdio.h>
// int main()
// {
//     int i, n, a = 0, b = 1, c;

//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series: ");
//     for(i = 1; i <= n; i++)
//     {
//         printf("%d ", a);
//         c = a + b;
//         a = b;
//         b = c;
//     }

//     printf("\n");
//     return 0;
// }