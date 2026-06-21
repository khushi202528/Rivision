// create a structure type 'boook' eht name,price
//  and number of pages as its attribiute

#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[20];
        float price;
        int number;
    } hee, khu, li;

    hee.price = 56.2;
    hee.number = 45;
    //study about strcpy
    strcpy(hee.name,"hiiieeeeeee");
    printf("%s\n",hee.name);
    printf("%d\n",hee.number );
    printf("%f\n",hee.price);

}