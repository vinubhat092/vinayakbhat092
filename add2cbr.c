
#include<stdio.h>
void input(int *a,int *b)
{
    printf("enter two numbures", a,b);
    scanf("%d%d",a,b);
}
void add(int a,int b,int *s)
{
    *s=a+b;
}
void output(int *s)
{
    printf("output is %d\n",*s);
}
void main()
{
    int a,b;
    input(&a,&b);
    int s;
    add(a,b,&s);
    output(&s);
 }


