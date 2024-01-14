#include <stdio.h>
//This code is a portion of a simple program that tracks inventory
int main (){
    
    char item [100];
    double quan;
    
    printf("Enter item name: ");
    fgets(item, sizeof(item), stdin);
    
    printf("Enter quantity: ");
    scanf("%lf", &quan);
    
    printf("Item %swith quantity %.2lf has been saved", item, quan);
 
    return 0;
}
