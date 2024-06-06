#include <stdio.h>

int main()
{
    int a,b;
    int p = a+b;
    int s = a-b;
    int m = a*b;
    int d = a/b;
    int operation;

    printf("Enter first digit \n");
    scanf("%D",&a);

    printf("Enter second value \n");
    scanf("%D",&b);

    printf("Enter te operation \n");
    scanf("%D",& operation);
    
    switch (operation)
    {
    case 'p' :
        printf("Your result is %d",p);
        break;

    case 's' :
        printf("Your result is %d",s);
        break;
   
    case 'm' :
        printf("Your reslut is %D",m);
        break;

    case 'd' :
        printf("Your result is %d",d);
        break;

    default:
        printf("sorry, this si invalid");
        break;
    }
    
    printf("Enter first digit \n");
    scanf("%D",&a);

    printf("Enter second value \n");
    scanf("%D",&b);
    
    return 0;

}