#include <stdio.h>
void main() {
    int n,sum=0,rem=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("the sum is %d",sum);
    }   
