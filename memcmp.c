#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    int arr1[]={1,2,3};
    int arr2[]={1,2,3};

    // memcmp(a,b,size) is used to compare the values starting from 2 pointers until some given memory size (like 2*sizeof(int) or 8 bytes)
    int res=memcmp(arr1,arr2,3*sizeof(int));
    if(res==0){
        printf("Both the arrays are the same\n");
    }else{
        printf("They are different\n");
    }
    printf("memcmp ends here\n\n");




    int arr3[]={3,55,2};
    // memcpy(a,b,size) is used to copy values of b to a for some given size from the starting 
    printf("Before memcpy: %d %d %d\n", arr3[0],arr3[1],arr3[2]);
    memcpy(arr3,arr2,3*sizeof(int));
    printf("After memcpy: %d %d %d\n", arr3[0],arr3[1],arr3[2]);
    printf("memcpy ends here\n\n");



    // memset(a,value,size) takes a pointer to starting address, a value to set and size, 
    // and sets the value of each byte(not the 4 bytes for int) to that value,
    // which is why we get wierd numbers if we use value not equal to 0, 
    // as 0 in each byte 0 0 0 0 is 0 as whole, 
    // but say, 1 in each byte is 00000001 00000001 00000001 00000001 which is 00000001000000010000000100000001 as whole,
    // so we get wierd numbers
    memset(arr3,1,sizeof(arr3));
    printf("%d %d %d\n", arr3[0],arr3[1],arr3[2]);
    printf("memset ends here\n\n");
    
    return 0;
}