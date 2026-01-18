#include <stdio.h>

int main() {
 int a,b;
 scanf("%d,%d",&a,&b);
 printf("before swapping:a=%d,b=%d\n",a,b);
 // swapping condition without using third variabale
 a=a+b;
 b=a-b;
 a=a-b;
 printf("after swapping:a=%d,b=%d\n",a,b);

    return 0;
}
