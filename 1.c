#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
  char str[100],temp[100];
    int i ,j,k=0,n;
    scanf("%s",str);
    n=strlen(str);
    for(i=n-1;i>=0;i--)
    {
        temp[i]=str[k];
        k++;
    }
    
    printf("%s",temp);  
    
}