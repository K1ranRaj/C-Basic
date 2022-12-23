// Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int m,n;
    float p,q;
    scanf("%d %d",&m,&n);
    scanf("%f %f",&p,&q);
    
    int a = m+n;
    int b = m-n;
    printf("%d %d\n",a,b);
    
    float c = p+q;
    float d = p-q;
    printf("%.1f %.1f",c,d);
    
    return 0;
}
