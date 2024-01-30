/*3. Write a C program to add two numbers using **pass by value**

***Function declarations***

```c
int input();
int add(int a, int b);
void output(int a, int b, int sum);
```*/
#include<stdio.h>
int input(){
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    return n;
}
int add(int a, int b){
    return a+b;
}
void output(int a, int b, int c){
    printf("Sum of %d and %d is %d\n", a, b, c);
}
int main(){
    int a, b, c;
    a=input();
    b=input();
    c=add(a,b);
    output(a,b,c);
    return 0;
}