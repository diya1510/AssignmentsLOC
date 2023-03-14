#include<stdio.h>

int main(){
    int a,b;
    int opr;
    
    printf("Enter the two numbers a and b:");
    scanf("%d %d",&a,&b);
    printf("choose the operation\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter your choice");
    scanf("%d",&opr);
    switch(opr)
    {
        case 1  :printf("The addition of %d and %d gives %d",a,b,a+b);
            break;
        case 2 :printf("The subtraction of %d and %d is %d",a,b,a-b);
            break;
        case 3 : printf("The multiplication of %d and %d is %d",a,b, a*b);
            break;
        case 4 : printf("The division of %d and %d is %d",a,b,a/b);
            break;
        default : printf("Please choose a valid operation");
            break;
            
    }
    return 0;


}