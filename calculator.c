#include<stdio.h>
int main(){
    float a;
    float b;
    char c;
    char enter;
    printf("enter value of a - ");
    scanf("%f",&a);
    printf("enter value of b - ");
    scanf("%f",&b);
    scanf("%c",&enter);
    printf("enter operator from(+,-,*,/) - ");
    scanf("%c",&c);
    if(c == '+'){
        printf("%f",a+b);
    }
    else if(c == '-'){
        printf("%f",a-b);
    }
    else if(c == '*'){
        printf("%f",a*b);

    }
    else {

        printf("%f",a/b);
    }
    return 0;

    
}