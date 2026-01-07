//5. Write a program to input a character and check whether it is: 
//? Alphabet (uppercase/lowercase) 
//? Digit 
//? Special character

//#include <stdio.h>
//int main() {
//    char ch;
//	
//	 printf("Enter a character: ");
//    scanf("%c", &ch);
//
//	if((ch>='A' && 'Z'<=ch) || (ch>='a' && 'z'<=ch))
//	{
//		 printf("'%c' is an Alphabet.\n", ch);
//	}else if (ch >= '0' && ch <= '9')
//	{
//		printf("'%c' is a Digit.\n", ch);
//	}
//	else
//	{
//		  printf("'%c' is a Special Character.\n", ch);
//	}
//    return 0;
//}
#include <stdio.h>

int main() {
    char ch;
    int type;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Classify character type
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        type = 1; // Alphabet
    else if (ch >= '0' || ch >= '9' || ch<'0')
        type = 2; // Digit
    else
        type = 3; // Special character

    // Use switch to display result
    switch (type) {
        case 1:
            printf("It is an Alphabet.\n");
            break;
        case 2:
            printf("It is a Digit.\n");
            break;
        case 3:
            printf("It is a Special Character.\n");
            break;
        default:
            printf("Unknown type.\n");
    }

    return 0;
}  