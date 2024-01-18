//Function that multiplies 2 numbers

#include <stdio.h>

int multiply(int num1, int num2){
    
    int result = num1 * num2;
    return result;
}
 
 int main(){
    
    int result = multiply(5, 6);
    printf("Result is %d", result);
    
    return 0;
}  
