/*5. Write a C program to compare three numbers using **pass by value**

***Function Declarations***

```c
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
```*/
#include<stdio.h>
int input(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    return a;
}
int compare(int a, int b, int c){
    int large=a;
    if(b>a){
        large=b;
    }
    if(c>a){
        large=c;
    }
    return large;
}
void output(int a, int b, int c, int large){
    printf("largest number is %d\n",large);
}
int main(){
    int a, b, c;
    a=input();
    b=input();
    c=input();
    int large;
    large=compare(a, b, c);
    output(a,b,c,large);
    return 0;
}
