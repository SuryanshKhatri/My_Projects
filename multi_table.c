// creator-: Suryansh khatri
// version-: 1.0.0
#include<stdio.h>

int main(){
    int num;
    // Take the number as an input from the user
    printf("ENter the value of which multiplication table is to be printed\n");
    scanf("%d", &num);
    printf("------------------------\n");
    for(int i=0; i<10;i++){
        printf("%d X %d = %d\n",num,(i+1),(i+1)*num);
    }
    return 0;

}