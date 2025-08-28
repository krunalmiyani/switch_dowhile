#include <stdio.h>
int main()
 {
     int i;
     printf("Enter choice\n ");
     scanf("%d",&i);

     switch(i)
     {
     case 1:
        {
        int a,b;
        printf("Enter two numbers");
        scanf("%d%d",&a,&b);
        printf("sum of the two numbers is %d",a+b);
        break;
        }
     case 2:
        {
        int a,b;
        printf("Enter two numbers");
        scanf("%d%d",&a,&b);
        printf("multiplication of the two numbers is %d",a*b);
        break;
        }
     case 3:
        {
        int a;
        printf("Enter a number");
        scanf("%d",&a);
        if(a%2==0)
            printf("the number is even");
        else
            printf("the number is odd");
        break;
        }
    case 4:
        {
        int a;
        printf("Enter a number");
        scanf("%d",&a);
        if(a%5==0)
            printf("the number is divisible by 5");
        else
            printf("the number is not divisible by 5");
        break;
        }
    case 5:
        {
        int a,b,i;
        printf("Enter a number");
        scanf("%d",&a);
        i=1;
        do
        {
            i++;
            b=a%i;
            if(b==0)
                printf("%d is not a prime",a);
            break;
        }while(i<a-1);
        if (b!=0)
            printf("%d is a prime",a);
            break;
        }
    case 6:
        {
        printf("case is default");
        }

    }
     }


