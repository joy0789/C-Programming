#include <stdio.h>

/*Fibonacci Series*/
int main()
{
    int a=0, b=1,c,i;

    for(i=1;i<=10;i++){
        printf("%d ", a);
        c = a+b;
        a=b;
        b=c;
    }
    return 0;
}
