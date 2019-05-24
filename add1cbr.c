#include<stdio.h>
void input(int *a)
{
    printf("enter a number",a);
    scanf("%d",&a);
}
void add(int a,int *s)
{
    *s=a+1
}
void output(int s)
{
    printf("out put is%d\n",s);
}
int main()
{
    int a;
    input(&a);
    add(a,&s);
    int s;
    output(s);
    return 0;
}
