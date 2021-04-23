#include <stdio.h>

int main(){
    // WHILE LOOP style
    int i = 1;
    while( i<=10){
        printf("%d ", i);
        i = i + 1; // or i++ or i+=1
    }

    /* DO-WHILE LOOP style

    int i = 1
    do{
        printf("%d ", i);
        i = i + 1; // or i++ or i+=1
    }while( i<=10);
    */

    /* FOR LOOP style
    int i;
    for(i=1; i<=10; i++){
        printf("%d ", i);
    }
    */

    return 0;
}
