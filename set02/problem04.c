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
int is_composite(int n, int a[n]){
    for(int i=0;i<n;i++){
        if(a[i]<=1){
            return 0;
        }
        if(a[i]==2 || a[i]==3){
            return -1;
        }
        for(int j = 2; j<=a[i]/2; j++){
            if(a[i]%j==0){
                return 1;
            }
        }
    }
}
int sum_composite_numbers(int n, int a[n]){
    int sum=0;
    int res;
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
    sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;
}