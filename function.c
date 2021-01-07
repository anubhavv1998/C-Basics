#include<stdio.h>
int sum(int num)
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    num=a+b;
    return num;
}
int main()
{  
    int c;
    printf("Sum is %d",sum(c));
    return 0;
}
