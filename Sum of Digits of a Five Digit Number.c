// Given a five digit integer, print the sum of its digits.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int n1=n;
    int sum = 0;
    int d;
    while(n1!=0)
    {
        d=n1%10;
        sum = sum + d;
        n1=n1/10;
    }
    printf("%d",sum);
    
    return 0;
}
