#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    //2-D array
    int Sales_Persons;
    int items;
    
    int sum =0;
        printf("Enter the number of Sales Persons: ");
    scanf("%d",&Sales_Persons);
    printf("Enter the number of items: ");
    scanf("%d",&items);
    int x[Sales_Persons][items];
    for (int i=1; i<=Sales_Persons; i++) {
        for(int j=1;j<=items;j++){
            
            printf("Sale ammount for salesperson %d item no %d : ",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    for (int i=1; i<=Sales_Persons; i++) {
        printf("********************************\n");
         printf("Sales data for salesPerson %d: \n",i);
        for(int j=1;j<=items;j++){
            
           
            printf("item %d: %d\n",j,x[i][j]);
                sum += x[i][j];
            
            
        }
        printf("Sum: %d\n",sum);
        printf("\n");
    }
    return 0;
}
