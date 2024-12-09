#include <stdio.h>
#include<stdlib.h>
void main() {
   int i,n,esum=0,osum=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(i%2==0)
        {
        esum=esum+i;
    }
    else
    {
        osum=osum+i;
    }
    }
    {
        printf("The difference is %d",abs(esum-osum));
    }
}
