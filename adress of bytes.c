#include<stdio.h>
void main()
{
    int a = 10, b = 3;
    int *p1, *p2;
    p1= &a;
    p2= &b;
    printf("adress of a is:%d\n",p1);
    printf("adress of b is:%d\n",p2);
    printf("%d+%d--->%d\n",a,b,*p1+*p2);
    printf("%d-%d--->\n",a,b,*p1-*p2);
    printf("%d*%d--->%d\n",a,b,*p1**p2);
    printf("%d/%d--->%d\n",a,b,(*p1)/(*p2));
    printf("(%d)%(%d)--->%d\n",a,b,*p1%*p2);
}
