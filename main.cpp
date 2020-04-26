#include <stdio.h>
#include <stdlib.h>
char* factorial(int number){
	int res[200]; 
  
    // Initialize result 
    res[0] = 1; 
    int res_size = 1; 
  
    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n 
    for (int x=2; x<=number; x++) {
    int carry = 0;  // Initialize carry 
  
    // One by one multiply n with individual digits of res[] 
    for (int i=0; i<res_size; i++) 
    { 
        int prod = res[i] * x + carry; 
  
        // Store last digit of 'prod' in res[]   
        res[i] = prod % 10;   
  
        // Put rest in carry 
        carry  = prod/10;     
    } 
  
    // Put carry in res and increase result size 
    while (carry) 
    { 
        res[res_size] = carry%10; 
        carry = carry/10; 
        res_size++; 
    } 
    }
    char* arr = (char*)malloc(res_size*sizeof(char));
    for (int k = 0; k < res_size; k++) {
        arr[k] = res[res_size-k-1] +'0';
    }
    return arr;
}

int main(){
    /*		Declaring variables				*/
    int num = 50;
    /*		Asking and scanning input			*/
    /*		Passing number to the function			*/
    printf("%s", factorial(num));
    return 0;
}