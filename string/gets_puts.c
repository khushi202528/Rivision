//str[i]=i[str];
// printintg without loop
 #include<stdio.h>
 #include<string.h>
 int main(){
    // char str[]="college wallah is best";
    // //printf("%s",str);
    // puts(str);    //only for string

    char str[40];
    
    //scanf("%s",str);   //only the first world will consirred
    gets(str); //entire sentence can be input 
    printf("your input = %s",str);

 }