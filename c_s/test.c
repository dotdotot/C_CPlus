#include <stdio.h>

int main(){
    int take=0;
    scanf("%d",&take);  

    if(take % 4 == 0) //4�ǹ��
    {
         //100����� �ƴϸ鼭 �Ǵ� 400����ΰ�
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
 

