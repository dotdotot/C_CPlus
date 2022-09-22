#include <stdio.h>

// print_name 선언
void print_name(char* name);

int main(){
    // name input
    char name[12] = "김준석";
    printf("이름 : ");
    scanf("%s", &name);

    print_name(name);

    return 0;
}

// print_name 정의
void print_name(char* name){
    for(int i =0; i<10; i++){
        printf("%s\n",name);
    }
}