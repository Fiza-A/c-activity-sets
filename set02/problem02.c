/*02.  Write a program to find if a triangle is scalene.

> A triangle is scalene if all the three sides of the triangle are not equal to one another

***Function Declarations***
```c
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
```*/
#include<stdio.h>
int input_side(){
    int x;
    printf("Enter the length of a side:\n");
    scanf("%d",&x);
    return x;
}
int check_scalene(int a, int b, int c){
    if(a!=b && b!=c && c!=a){
        return 1;
    }
    else{
        return 0;
    }
}
void output(int a, int b, int c, int isscalene){
    if(isscalene){
        printf("The triangle with the sides %d , %d and %d is scalene\n", a, b, c);
    }
    else{
        printf("The triangle with the sides %d , %d and %d is not scalene\n", a, b, c);
    }
}
int main(){
    int a, b, c, result;
    a=input_side();
    b=input_side();
    c=input_side();
    result=check_scalene(a, b, c);
    output(a, b, c, result);
}