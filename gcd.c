#include<stdio.h>
#include<stdlib.h>

int gcd(int, int);

int main(void)
{
    int a = 0, b = 0;
    
    scanf("%d %d", &a, &b);
    
    printf("Greatest commom divisor is: %d", gcd(a, b));
    
    return 0;
}

/*
Euclid's algorithm. Given a pair (a,b), gcd(a,b) is equal to gcd(a-b,b) if a>b
or equal to gcd(a,b-a) if b>a. If a==b, gcd(a,b) == a == b.
*/

int gcd(int a, int b)
{
    while(a > 0 && b > 0)
        if(a > b)
            a -= b;
        else
            if(b > a)
                b -= a;
            else
                return a; // could return b as well, since a==b;
    
    return ((a > b) ? a : b); 
    /* 
    if we got here, either a or b is equal to 0. The gcd is that number which is not equal to 0.
    So the condition could be ((a==0) ? b : a) as well.
    */
}
