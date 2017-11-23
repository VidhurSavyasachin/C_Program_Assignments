#include <stdio.h>
#include <math.h>


//Pointers=denotes the address of the variable.
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 100; int y = 150;
    printf("x and y are %d and %d \n",x,y);
    swap(&x, &y);
    printf("x and y are %d and %d",x,y);
    return 0;
}
