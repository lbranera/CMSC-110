#include <stdio.h>

int main(){
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age < 18){
        printf("Minor.");
    }else{
        if(age <= 59){
            printf("Adult.");
        }else{
            printf("Senior.");
        }
    }

    return 0;
}
