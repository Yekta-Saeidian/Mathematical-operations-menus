#include <stdio.h>
void main()
{
    int menu , number1 , number2 , answer ;
    printf("1-Add numbers\n2-Subtract the numbers\n3-Multiply the numbers\n4-Divide the numbers\n5-Exit\n");
    scanf("%d", &menu);

    while(menu<=5)
    {
        if(menu==5)
        break;

        printf("enter the numbers: \n");
        scanf("%d %d", &number1 , &number2);

        if(menu==1)
        answer=number1 + number2;

        if(menu==2)
        answer=number1 - number2;

        if(menu==3)
        answer=number1 * number2;

        if(menu==4)
        answer=number1 / number2;      

        printf("the answer is: %d\n", answer);

        scanf("%d\n", &menu);
    }  
}