// You have to print the character, ch, in the first line. Then print s in next line. In the last line print the sentence, sen.

// First, take a character, ch as input.
// Then take the string, s as input.
// Lastly, take the sentence sen as input.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c",&ch);
    printf("%c\n",ch);
    
    char s[100];
    scanf("%s", &s);
    printf("%s\n", s);
    
    char sen[100];
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%s\n",sen);
        
    return 0;
}
