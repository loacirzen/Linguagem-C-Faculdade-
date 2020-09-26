#include<conio.h>
#include<stdio.h>
#include<string.h>

int main(){
    char str[200], str1, i;
    int  cont=0;
    
    printf("Digite um palavra: ");
    scanf("%s",&str);
    fflush(stdin);
    printf("Digite um caracter: ");
    scanf("%c",&str1);
    
    for(i=0; i<strlen(str); i++){
             if(str[i]==str1){
                                   cont++ ;
                                    }
             }
            
             printf("%d", cont);
             getch();
    }
