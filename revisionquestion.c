/*#include<stdio.h>
 int main()
 {
  printf("hello world");
     return 0;
 
 }*/

 // 2nd ques.
 #include<stdio.h>
 int main()
 {
    int var1;
    int var2;
    int result_int;
    float result_float;
    printf("please enter two integer values for division operation");
    scanf("%d %d",&var1,&var2 );

    // var1=30;
    // var2=10;

    result_int=var1/var2;
    result_float=var1/var2;

    printf("integer division and result in integer is:%d",result_int);
    printf("float division and result in floatis%f",result_float);
    return 0;

 }