#include <stdio.h>

int main() {
    int a,b;
    scanf("%d,%d",&a,&b);
    printf("before swapping:a=%d,b=%d\n", a,b);
    // swapping comndition
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swapping: a = %d, b = %d\n", a,b);
           return 0;
}