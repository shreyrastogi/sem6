/* 
   1 Write a program to check whether numbers exits in a string and print them.
   2 Write o program to check whether a string is a valid identifier or not.
   3 Write a program to check whether the token is an identifier or an operator. 
   4 Write a program to print relational operators in a string.
   5 Write a program to remove single line or multiple line comment from a file.
   6 Write a program to check whether the string belongs to the following regular expression i.e a(a+b)*b + b(a+b)*a.
  
 */

/*

1 Write a program to check whether numbers exits in a string and print them.

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int i, l = 0;
    for (i = 0; str[i] != '\0'; i++)
        ;
    l = i;
    for (i = 0; i < l; i++)
    {
        int a = str[i];
        if (a >= 48 & a <= 57)
            printf("%c ", str[i]);
    }
    printf("\n");
}

/*

2 Write o program to check whether a string is a valid identifier or not.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int i, l = 0;
    for (i = 0; str[i] != '\0'; i++)
        ;
    l = i;
    //printf("%d\n",l);
    if (str[0] == '_' || ((int)str[0] >= 65 && (int)str[0] <= 90 || (int)str[0] >= 97 && (int)str[0] <= 122))
    {
        for (i = 0; i < l; i++)
        {
            if (!((str[i] == '_') || (str[i] > 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')))
            {
                printf("invalid identifier\n");
                exit(0);
                // exit(0); stdlib.h contains it so to avoid it i used break
            }
        }
    }
    else
    {
        printf("invalid identifier\n");
        exit(0);
    }
    if (strcmp(str, "int") == 0 || strcmp(str, "long") == 0 || strcmp(str, "float") == 0 || strcmp(str, "double") == 0 || strcmp(str, "int") == 0 || strcmp(str, "int") == 0 || strcmp(str, "auto") == 0 || strcmp(str, "break") == 0 || strcmp(str, "continue") == 0 || strcmp(str, "void") == 0 || strcmp(str, "if") == 0 || strcmp(str, "return") == 0 || strcmp(str, "case") == 0 || strcmp(str, "char") == 0 || strcmp(str, "goto") == 0 || strcmp(str, "extern") == 0 || strcmp(str, "enum") == 0 || strcmp(str, "else") == 0 || strcmp(str, "register") == 0 || strcmp(str, "size") == 0 || strcmp(str, "sizeof") == 0 || strcmp(str, "static") == 0 || strcmp(str, "struct") == 0 || strcmp(str, "switch") == 0 || strcmp(str, "typedef") == 0 || strcmp(str, "union") == 0 || strcmp(str, "unsigned") == 0 || strcmp(str, "signed") == 0 || strcmp(str, "volatile") == 0 || strcmp(str, "while") == 0 || strcmp(str, "short") == 0 || strcmp(str, "do") == 0)
    {
        printf("invalid identifier\n");
        exit(0);
    }
    if (i == l)
        printf("valid identifier\n");
}

*/

/*

3 Write a program to check whether the token is an identifier or an operator. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int i, l = 0;
    for (i = 0; str[i] != '\0'; i++)
        ;
    l = i;
    //printf("%d\n",l);
    if (str[0] == '_' || ((int)str[0] >= 65 && (int)str[0] <= 90 || (int)str[0] >= 97 && (int)str[0] <= 122))
    {
        for (i = 0; i < l; i++)
        {
            if (!((str[i] == '_') || (str[i] > 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')))
            {
                goto o;
                // exit(0); stdlib.h contains it so to avoid it i used break
            }
        }
    }
    else
    {
        goto o;
    }
    if (strcmp(str, "int") == 0 || strcmp(str, "long") == 0 || strcmp(str, "float") == 0 || strcmp(str, "double") == 0 || strcmp(str, "int") == 0 || strcmp(str, "int") == 0 || strcmp(str, "auto") == 0 || strcmp(str, "break") == 0 || strcmp(str, "continue") == 0 || strcmp(str, "void") == 0 || strcmp(str, "if") == 0 || strcmp(str, "return") == 0 || strcmp(str, "case") == 0 || strcmp(str, "char") == 0 || strcmp(str, "goto") == 0 || strcmp(str, "extern") == 0 || strcmp(str, "enum") == 0 || strcmp(str, "else") == 0 || strcmp(str, "register") == 0 || strcmp(str, "size") == 0 || strcmp(str, "sizeof") == 0 || strcmp(str, "static") == 0 || strcmp(str, "struct") == 0 || strcmp(str, "switch") == 0 || strcmp(str, "typedef") == 0 || strcmp(str, "union") == 0 || strcmp(str, "unsigned") == 0 || strcmp(str, "signed") == 0 || strcmp(str, "volatile") == 0 || strcmp(str, "while") == 0 || strcmp(str, "short") == 0 || strcmp(str, "do") == 0)
        goto o;
    if (i == l)
    {
        printf("valid identifier\n");
        exit(0);
    }
// label o
o:
    if (str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/' || str[0] == '+' || str[0] == '<' || str[0] == '>' || str[0] == '=' || str[0] == '!' || str[0] == '^' || str[0] == '&' || str[0] == '?' || str[0] == '%' || str[0] == '|' || str[0] == '~')
    {
        printf("valid operator\n");
        exit(0);
    }
}

*/

/*

4 Write a program to print relational operators in a string.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int i, l = 0;
    for (i = 0; str[i] != '\0'; i++)
        ;
    l = i;
    char o[2];
    o[0] = str[1];
    o[1] = str[2];
    if (strcmp(o, "==") == 0 || strcmp(o, "<=") == 0 || strcmp(o, ">=") == 0 || strcmp(o, "!=") == 0 || str[1] == '<' || str[1] == '>')
        printf("valid relational operator\n");
    else
        printf("invalid relational operator\n");
}

*/


/*

6 Write a program to check whether the string belongs to the following regular expression i.e a(a+b)*b + b(a+b)*a



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int i, l = 0;
    for (i = 0; str[i] != '\0'; i++)
        ;
    l = i;
    if (str[0] == 'a' && str[l - 1] == 'b')
    {
        for (i = 1; i < l - 1; i++)
            if (str[i] == 'a' || str[i] == 'b')
                continue;
            else
                break;
    }
    else
    {
        printf("string does not belongs to the following regular expression i.e a(a+b)*b + b(a+b)*a\n");
        exit(0);
    }
    if (i == l)
    {
        printf("string belongs to the following regular expression i.e a(a+b)*b + b(a+b)*a\n");
        exit(0);
    }
    else
    {
        printf("string does not belongs to the following regular expression i.e a(a+b)*b + b(a+b)*a\n");
        exit(0);
    }
    if (str[0] == 'b' && str[l - 1] == 'a')
    {
        for (i = 1; i < l - 1; i++)
            if (str[i] == 'a' || str[i] == 'b')
                continue;
            else
                break;
    }
    else
    {
        printf("string does not belongs to the following regular expression i.e a(a+b)*b + b(a+b)*a\n");
        exit(0);
    }
    if (i == l)
    {
        printf("string belongs to the following regular expression i.e a(a+b)*b + b(a+b)*a\n");
        exit(0);
    }
    else
    {
        printf("string does not belongs to the following regular expression i.e a(a+b)*b + b(a+b)*a\n");
        exit(0);
    }
}

*/