#include <stdio.h>
#include <stdlib.h>

int main(){
    // also you can only subtract pointers, as adding or multiplying may point to some inaccessble or non-existent memory address
    int a=1,b=33,c=223;
    int *p1=&a,*p2=&b,*p3=&c;

    // subtracting pointers give the (difference in address)/(sizeof(pointer_type))
    // gives -1 and -2 respectively for below operations as in stack the first decalred(first inside the stack(down) is having a greater address then later)
    printf("%d %d\n",p2-p1,p3-p1);

    // printing addresses of the pointers itself, they are generally one after other as they are in stack and the first declared one has a larger address
    printf("%p %p %p\n",p1,p2,p3);

    // similar thing happen with dynamically allocated pointers as well
    int *a=malloc(1*sizeof(int));
    int *b=malloc(1*sizeof(int));
    int *c=malloc(1*sizeof(int));
    printf("%p %p %p",a,b,c);
    return 0;
}