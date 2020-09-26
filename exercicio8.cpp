#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<vector>

int main(){
    
    int vet [4][4];
        for (int lin = 0; lin < 4; lin++) {
            for (int col = 0; col < 4; col++) {
                if (lin < col) {
                    printf(" 1");
                }
                if (lin == col) {
                    printf(" 0");
                } else if(lin > col){
                    printf(" 2");
                }
            }
            printf("\n");
        }
        printf("\n");
    
    getch();
    }
