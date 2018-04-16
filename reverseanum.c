#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int nodigits(int n)
{
    int count=0,i;
while(n)
{
    n=n/10;
    count++;
}
    return count;
}

int main() 
{
long int fact=1,result=0;
    int num,i,power,dig,rem;
    scanf("%d",&num);
    dig=nodigits(num)-1;
    while(num)
    {
        rem=num%10;
        result=result+rem*pow(10,dig);
        num=num/10;
        dig--;
    }
printf("%ld",result);
}
