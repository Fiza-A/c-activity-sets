/*03.  Write a program find whether a number is a composite number

> A Composite number has more than 2 factors.

***Function Declarations***
```c
int input_number();
int is_composite(int n);
void output(int n, int result);
```*/
#include<stdio.h>
#include<stdlib.h>
int input_number(){
    int n;
    printf("Enter number: \n");
    scanf("%d",&n);
    return n;
}
int is_composite(int n){
    if(n<=1){
        return 0;
    }
    if(n==2 || n==3){
        return -1;
    }
    int i;
    for(i = 2; i<=n/2; i++){
        if(n%i==0){
            return 1;
        }
    }
}
void output(int n, int result){
    if(result==1){
        printf("The number %d is composite.\n",n);
    }
    else if(result==0){
        printf("The number %d is neither prime nor composite.\n",n);
    }
    else{
        printf("The number %d is not composite.\n",n);
    }
}
int main(){
    int n, result;
    n=input_number();
    result=is_composite(n);
    output(n,result);
    return 0;
}