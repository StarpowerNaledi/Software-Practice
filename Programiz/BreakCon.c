//Program to practise use of break and continue statement

#include <stdio.h>

int main(){
    
    while(1){
        
        int number;
        printf("\nEnter number: ");
        scanf("%d", &number);
        
        if((number % 2) != 0 && number < 0){
            printf("The number: %d", number);
        }
        
        else if(number > 0){
            printf("Positive Value");
            break;
        }
        
        else{
            printf("Negative Even");
        }
        
    }
    
    return 0;
}
