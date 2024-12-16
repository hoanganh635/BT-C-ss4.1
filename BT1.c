#include <stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a>0){
        printf("%d la so duong", a);
    }else if(a<0){
        printf("%d la la so am", a);
    }else{
        printf("%d la so 0", a);
    }
    return 0;

}