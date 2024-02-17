/*05.  Write a program to find GCD _(HCF)_ of two numbers.*/
#include<stdio.h>
int input(){
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    return a;
}
int find_gcd(int a, int b){
    if (b==0){
        return a;
    }
    else{
        return find_gcd(b, a%b);
        }
}
void output(int a, int b, int gcd){
    printf("\nThe GCD of %d and %d is: %d\n", a, b, gcd);
}
int main(){
    int a, b, gcd;
    a=input();
    b=input();
    gcd=find_gcd(a, b);
    output(a, b, gcd);
    return 0;
}