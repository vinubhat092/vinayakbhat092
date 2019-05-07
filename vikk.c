#include<stdio.h>
void input(int *x)
{
    scanf("%d",x);
    return;
}
void sum(int *a,int *b,int *s)
{
    *s=*a+*b;
    return;
}
void output(int s)
{
    printf("sum is %d",s);
    return;
}
int main()
{
    int a,b,s;
    printf("read value a\n");
    int(&a);
    printf("read value b\n");
    int(&b);
    sum(&a,&b,&s)
    output(s);
    return 0;
}
    
    
