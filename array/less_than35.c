// Ques: Given an array of marks of students, if the mark of any student is less than 35 print its roll number.
// [Roll number here refers to the index of the array.]

#include <stdio.h>
int main(){
    int marks[] = {45,96,25,45,23,17,59,80,65,12};
    for(int i =0 ; i < 10;i++){
        if(marks[i]<35){
            printf( "%d",i);
            printf("\n");
        }
    }

}