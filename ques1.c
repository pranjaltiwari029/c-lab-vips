// #include<stdio.h>
// int main(){
//     printf("hello world \n");
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int a=10,b=18,c=13;
//     int greatest ;

//     greatest=(a>b)? (a>c)? a : c : (b>c)? b:c :

//     printf("greatest of %d,%d and %d is %d",a,b,c,greatest);

// return 0;
// }

#include<stdio.h>
int main(){
     int num;
     printf("enter the number to evaluate:\n");
     scanf("%d",&num);

     if(num%2==0){
         if(num>0)
         printf(" %d it is +ve even number",num);

         if(num<0)
         printf("%d it is -ve even number",num);
         
     }
     if (num%2!=0){
         printf("%d it is odd",num);
     }




    return 0;
}





