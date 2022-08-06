#include<stdio.h>
int main()
{
int per = 100;
if(per>=70 && per<=100){
    printf("congrats you got distinction");
}
else if(per>=60 && per<=69){
    printf("congrats you passed first class");
}
else if(per>=50 && per<=59){
    printf("you  are passed in second class");

}
    else if(per>=35 && per<= 49){
        printf("you are just passed");
    }
    else if(per>=0 && per<=34){
        printf("you are failed");
    }
    else
    {
        printf("Enter the proper value");
    }
}
