// Your code here...
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a||b)
        {
            printf("True");
        }
    elseif(a<0 && b<0)
        {
            printf("False");
        }
    else
        {
        printf("False");
        }
}