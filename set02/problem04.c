/*04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.

***Function Declarations***
```c
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
```*/
#include<stdio.h>
int input_array_size(){
    int n;
    printf("Enter size of array:\b");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n]){
    printf("Enter number:\v");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
int is_composite(int n){
    if(n <= 1){
        return 0;
    }
    for(int i=2; i<=n/2; i++){
        if(n%i == 0){
            return 1; 
        }
    }
    return 0;
}

int sum_composite_numbers(int n, int a[]){
    int sum = 0;
    for(int i=0; i<n; i++){
        if(is_composite(a[i])){
            sum += a[i]; 
        }
    }
    return sum;
}

void output(int sum){
    printf("Sum of the composite numbers is %d\n",sum);
}
int main(){
    int n, sum;
    n=input_array_size();
    int a[n];
    input_array(n, a);
    sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;
}