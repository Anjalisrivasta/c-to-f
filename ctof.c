#include<stdio.h>
int main(){
    int c,f,result;
    printf("Enter temperature in Celsius\n");
    scanf("%d",&c);
    result=(c*9/5)+32;
    printf("conversion of %d celsius to Fahrenheit is %d\n",c,result);
    return 0;
}
