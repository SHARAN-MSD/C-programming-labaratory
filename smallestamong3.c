#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b)
    {
        if(a<c)
        {
            printf("A is smallest");
        }
    } 
    if(b<a)
    {
        if(b<c)
        {
           printf("B is smallest"); 
        }
    }
    if(c<a)
    {
        if(c<b)
        {
           printf("C is smallest"); 
        }
    }
    if(a==b)
    {
        if(b==c)
        {
            printf("all 3 numbers are equal");
        }
    }

    return 0;
}



