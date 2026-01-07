//Q3. Write a program to calculate the factorial of a given number using a loop
//#include <stdio.h>
//int main() {
//    int n, i;
//    unsigned long long factorial = 1;  // Use long long for large results
//
//    // Ask user for input
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//
//    // Check for valid input
//    if (n < 0) {
//        printf("Factorial is not defined for negative numbers.\n");
//    } else {
//        for (i = 1; i <= n; i++) {
//            factorial *= i;  // Multiply factorial by i
//        }
//        printf("Factorial of %d = %llu\n", n, factorial);
//    }
//
//    return 0;
//}
#include<stdio.h>
int main()
{
	int n,i,factorial=1;
	printf("Enter the Number: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		factorial=factorial*i;
	}
	printf("Factorial of %d is = %d",n,factorial);
 	return 0;
}