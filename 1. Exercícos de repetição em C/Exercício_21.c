#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;

    for(i = 1; i <= 10; i++){
        for(int j = 1; j <= 20; j++){
            printf("* ");
            if(j == 20)
                printf("\n");
        }
    }
}
