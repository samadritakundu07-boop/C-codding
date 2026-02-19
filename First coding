#include <stdio.h>

void powerset(int arr[], int n) {

    int total = 1;
    for(int i=0; i<n; i++) total *= 2;  
    
    for(int i=0; i<total; i++) {
        printf("{");
        int num = i;
        
     
        for(int j=0; j<n; j++) {
            if(num % 2 == 1) {  
                printf("%d ", arr[j]);
            }
            num = num / 2; 
        }
        printf("}\n");
    }
}

int main() {
    int a[] = {10,12,15};
    int b[] = {2,3,1,8};
    
    printf("Power set of array a:\n");
    powerset(a, 3);
    printf("\nPower set of array b:\n");
    powerset(b, 4);
    return 0;
}

