#include <stdio.h>
int main()
{
    int x,y,ch;
    double result;
    printf("Enter two numbers...\n");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("1.Add\n2.Substract\n3.Multiply\n4.Devide\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:{
            result=x+y;
            break;
        }
        case 2:{
            result=x-y;
            break;
        }
        case 3:{
            result=x*y;
            break;
        }
        case 4:{
            result=x/y;
            break;
        }
        default:
        printf("Invalid choice!\n");
    }
    printf("Result: %f",result);
    return 0;
}