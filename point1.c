#include<stdio.h>

void main() 
{
    int i=85;
    
    
    int *p;
    
    p=&i;
    
    printf("%p is the location \n The value pointed to is %d ",p,*p);

  
}
