#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int n;
    
    printf("Enter the number of indices: ");
    scanf("%d",&n);
    int x[n];
    int sum =0;
    double average =0;
    for (int i=0; i<=n; i++) {
        x[i] = rand() % 100;
        sum += x[i];
        average = (double)sum/n;
    }
    for (int i=0; i<=n; i++) {
        printf("%d\n",x[i]);
        
    }
    printf("Sum is: %d\n",sum);
    printf("Average is: %f\n",average);
    
    return 0;
    
}
