#include <stdio.h> // Write a program to find profit or loss percentage given cost price and selling price.


int main() {
  float  selling_price, cost_price , profit , loss, percentage  ;
  printf("Enter cost price :");
  scanf("%f",& cost_price );
  printf("Enter selling price :\n");
  scanf("%f",& selling_price);
  if (selling_price > cost_price){
    profit = selling_price - cost_price ;
    percentage = (profit / cost_price )*100 ; 

    
    printf("Profit = %.2f\n", profit);
    printf("Profit percentage = %.2f\n", percentage );
  }

     else if (cost_price > selling_price){
      loss = cost_price - selling_price ; 
      percentage = (loss / cost_price )*100 ; 
      printf("Loss = %.2f\n", loss );
      printf ("Loss percentage = %.2f\n", percentage );
     }
     else {
      printf("No profit no loss\n");
     }
  




  return 0 ; 
}
  