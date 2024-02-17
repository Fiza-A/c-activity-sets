/*04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.

***Function Declarations***
```c
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
```*/
#include<stdio.h>
#include<stdlib.h>
int input_array_size(){
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n]){
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int is_composite(int n, int a[]) {
    if (a[n] <= 1){
        return 0;
    }  
    for (int i = 2; i <= a[n]/ 2; i++) {
        if (a[n]% i == 0) {
            return 1; 
        }
    }
}
int sum_composite_numbers(int n, int a[]){
    int res;
    int sum=0;
    for(int i=0;i<n;i++){
        if(res==1){
            sum+=a[i];
        }
    }
    return sum;
}
void output(int sum){
    printf("The sum of all composite numbers from the entered numbers is %d",sum);
}
int main(){
    int n, sum;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    int res;
    res=is_composite(n,a);
    sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;
}