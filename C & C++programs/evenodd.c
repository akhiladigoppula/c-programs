#include<stdio.h>
int main(){
int num;
printf("Enter the number\n");
scanf("%d",&num);
if(num%2==0)
    {
    printf("The given Number is Even\n",num);

   }
else{
    printf("The number is Odd\n",num);
}
}
