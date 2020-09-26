#include<conio.h>
#include<stdio.h>
#include<string.h>

int main(){
    char str[200], str1, str2, i;
    int  cont=0;
    
    printf("Digite um palavra: ");
    scanf("%s",&str);
    fflush(stdin);
    printf("Digite um caracter: ");
    scanf("%c",&str1);
    fflush(stdin);
    printf("Digite um caracter: ");
    scanf("%c",&str2);
    
    for(i=0; i<strlen(str); i++){
             if(str[i]==str1){
                                str[i]=str2;
                                cont++ ;
                                }else if(str[i]==str2){
                                                    str[i]=str1;
                                        }       
             }
             
             printf("%s",str);
            
             getch();
             fflush(stdin);
    }
