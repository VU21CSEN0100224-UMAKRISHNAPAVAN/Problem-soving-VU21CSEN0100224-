#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    
    printf("to find the  numbers\n");
    for(a=1;a<=20;a++)
    {
        if(a%2==0)
        printf("even%d\n",a);
        else
        
        printf("odd%d\n",a);
    }

    return 0;
}
