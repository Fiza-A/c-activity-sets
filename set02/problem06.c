/*06. Write a program to reverse a string.

***Function Declarations***
```c
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
```*/
#include<stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main(){
    char a, rev_str;
    input_string(&a);
    str_reverse(a,&rev_str);
    output(a, rev_str);
    return 0;
}
void input_string(char *a){
    printf("Enter a string:\n");
    scanf("%s", a);
}
