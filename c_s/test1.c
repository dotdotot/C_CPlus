#include <stdio.h>

// print_name ����
void print_name(char* name);

int main(){
    // name input
    char name[12] = "���ؼ�";
    printf("�̸� : ");
    scanf("%s", &name);

    print_name(name);

    return 0;
}

// print_name ����
void print_name(char* name){
    for(int i =0; i<10; i++){
        printf("%s\n",name);
    }
}