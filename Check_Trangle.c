//6. Write a program to input three integers and display whether they can represent the sides of 
//a right-angled triangle using nested if statements. 
//(Hint: Use Pythagoras theorem) 
//#include<stdio.h>
//int main()
//{
//	int side1,side2,side3;
//	printf("Enter the Three Side of Value: ");
//	scanf("%d %d %d",&side1,&side2,&side3);
//	
//	if(side1>0 && side2>0 &&side3>0)
//	{
//		if(side1*side1 == side2*side2+side3*side3)
//		{
//		printf("Yes, it's a right-angled triangle (a is hypotenuse).\n");
//		}
//		else if(side2*side2 == side1*side1+side3*side3)
//		{
//			  printf("Yes, it's a right-angled triangle (b is hypotenuse).\n");
//		}
//		else if(side3*side3 == side1*side1+side2*side2)
//		{
//			printf("Yes, it's a right-angled triangle (c is hypotenuse).\n");
//		}else{
//			printf("No, the sides do not form a right-angled triangle.\n");
//		}
//	}else{
//		 printf("Sides must be positive integers.\n");
//	}
//	return 0;
//}
#include <stdio.h>

int main() {
    int a, b, c;

    // Input three sides
    printf("Enter three integers (sides of triangle): ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if all sides are positive
    if (a > 0) {
        if (b > 0) {
            if (c > 0) {
                // Apply Pythagorean theorem in all orders
                if (a*a == b*b + c*c) {
                    printf("Yes, it's a right-angled triangle.\n");
                } else {
                    if (b*b == a*a + c*c) {
                        printf("Yes, it's a right-angled triangle.\n");
                    } else {
                        if (c*c == a*a + b*b) {
                            printf("Yes, it's a right-angled triangle.\n");
                        } else {
                            printf("No, it's not a right-angled triangle.\n");
                        }
                    }
                }
            } else {
                printf("Side c must be positive.\n");
            }
        } else {
            printf("Side b must be positive.\n");
        }
    } else {
        printf("Side a must be positive.\n");
    }

    return 0;
}