#include <stdio.h>
int main(){
   // very basic
    // char ch[4] ={'a','e','f','f'};
 
    // printf("%c",ch[2]);
 
 
    // rpinting of char 
 
    // null char = \0 =ascci value 0


    // int ch[]={"k","h","u","s","h","i","\0"}    =   int ch[]= "hello";
    int ch[]={"k","h","u","s","h","i","\0"};
    int i = 0;
    while(ch[i]!='\0'){
        printf("%c",ch[i]);
        i++;
    }
    return 0 ;
}