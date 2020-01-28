/*

Lex: Lexical analyzer generator
Flex: Fast lexical analyzer generator

Lex is a computer program that generates lexical analyzers.
There are three parts in lex:

1)Declaration (file inclusion and variable initialization is in this)
2)Patterns
3)Main Function

%%: It is used as a seperator for pattern and main function

lfl: link to flex


yylex() is defined by flex or lex which holds the lexim defined by the user

*/


/*

        Questions:

        1)Write a program in lex to calculate total no. of vowels and consonants in a particular string.
        2)Write a program in lex to check whether a string is a valid auxiliary verb or not.
        3)Write a program in lex to check whether a string is a keyword or identifier.
        4)Write a program in lex to calculate no. of words and characters in a string.
        5)Write a program in lex to count no. of lines and blank spaces in a file.
        6)Write a program in lex to claculate the average of numbers in a given string.

*/


/*

        1)Write a program in lex to calculate total no. of vowels and consonants in a particular string.
        
*/

/*

%{
    #include<stdio.h> 
    //#include<string.h>
    int vow_count=0,const_count =0; 
%} 
  
%% 
[aeiouAEIOU] {vow_count++;} 
[a-zA-Z] {const_count++;} 
%% 

void main() 
{ 
    printf("Enter the string of vowels and consonents:");
    char str[100];
    fgets(str,sizeof(str),stdin);
    yy_scan_string(str); 
    yylex(); 
    printf("Number of vowels are:  %d\n", vow_count); 
    printf("Number of consonants are:  %d\n", const_count); 
}

*/

/*

        3)Write a program in lex to check whether a string is a keyword or identifier.

*/

/*

%{
    #include<stdio.h> 
    #include<stdlib.h>
    #include<string.h>
%} 


%%

auto|double|int|struct|break|else|long|switch|case|enum|register|typedef|char|extern|return|union|continue|for|signed|void|do|if|static|while|default|goto|sizeof|volatile|const|float|short|unsigned {printf("Valid Keyword\n");}

([a-zA-Z_][0-9])+|[a-zA-Z_]* {printf("Identifier\n");}   

^[0-9]+ {printf("Not a Identifier\n");exit(0);}

.|\n; 
%%

void main() 
{ 
    printf("Enter a string:");
    char str[100];
    fgets(str,sizeof(str),stdin);
    yy_scan_string(str); 
    yylex();
} 

*/

/*

        2)Write a program in lex to check whether a string is a valid auxiliary verb or not.

*/

/*

%{
    #include<stdio.h> 
    #include<stdlib.h>
    #include<string.h>
%} 


%%

can|could|should|shall|will|would|might|may|must|need|did|do|is|were|have|ought|not {printf("auxiliary verb\n");}

([a-zA-Z_][0-9])+|[a-zA-Z_]* {printf("not an auxilixary verb\n");exit(0);}

.|\n; 
%%

void main() 
{ 
    printf("Enter a string:");
    char str[100];
    fgets(str,sizeof(str),stdin);
    yy_scan_string(str); 
    yylex();
} 

*/

/*

        4)Write a program in lex to calculate no. of words and characters in a string.
        5)Write a program in lex to count no. of lines and blank spaces in a file.
        
*/

/*

%{ 
        #include<stdio.h> 
        //#include<stdlib.h>
        //#include<string.h>
        int lc=0, sc=0, tc=0, ch=0; 
%} 


%% 

\n lc++; 
[ ] sc++;  
\t tc++; 
. ch++;  

%%

 
void main() 
{ 
        char s[100];
        printf("Enter the string:");
        fgets(s,sizeof(s),stdin);
        yy_scan_string(s);
        yylex(); 
        printf("\nNo. of lines=%d", lc);   
        printf("\nNo. of spaces=%d", sc); 
        printf("\nNo. of words=%d", sc+1); 
        printf("\nNo. of tabs=%d", tc); 
        printf("\nNo. of other characters=%d\n", ch); 
}

*/

/*

            6)Write a program in lex to claculate the average of numbers in a given string.

*/

%{ 
        #include<stdio.h> 
        #include<stdlib.h>
        #include<string.h>
        int avg,a,sum=0,c=0; 
        char s[100];
%} 

%%

[a-zA-Z] {printf("String does not contain any number\n");exit(0);} 
[0-9] {a=s[0];
        sum+=a;c++;}

%%

void main() 
{ 
        
        printf("Enter the string:");
        fgets(s,sizeof(s),stdin);
        yy_scan_string(s);
        yylex(); 
        avg=sum/c;
        printf("Average of numbers in %s is %d\n",s,avg);
}
