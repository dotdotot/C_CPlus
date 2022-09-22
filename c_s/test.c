#include <stdio.h>

int main(){
    int take=0;
    scanf("%d",&take);  

    if(take % 4 == 0) //4의배수
    {
         //100배수가 아니면서 또는 400배수인것
        if(take%100!=0||take%400==0)
        {
            printf("1");
        }else{
            printf("0");
        }
    } 
    else{
        printf("0");
    }
    return 0;
 }
 

