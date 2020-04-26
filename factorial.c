#include "factorial.h"
#include <stdlib.h>

char* factorial(const int aNumber) {
    int temp[200]; 
    temp[0] = 1; 
    int size = 1; 
    for (int i = 2; i <= aNumber; i++) {
        int carry = 0;  
        for (int j = 0; j < size; j++) { 
            int prod = temp[j] * i + carry; 
            temp[j] = prod % 10;   
            carry  = prod / 10;     
        } 

        while (carry) { 
            temp[size] = carry % 10; 
            carry = carry / 10; 
            size++; 
        } 
    }
    char* arr = (char*)malloc(size*sizeof(char));
    for (int i = 0; i < size; i++) {
        arr[i] = temp[size-i-1] +'0';
    }
    return arr;
}