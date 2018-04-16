#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
long int fact=1;
    int num,i;
    scanf("%d",&num);
    for(i=num;i>=2;i--)
    {
        fact=fact*i;
    }
printf("%ld",fact);
    
    
    
    
}