#include <stdio.h>
int main() {
  float sidea ,sideb ,sidec ;
printf("Enter side a  :");
scanf("%f",&sidea);
printf("Enter side b \n :");
scanf("%f",&sideb);
printf("Enter side c \n:");
scanf("%f",&sidec);
if (sidea + sideb <= sidec || sideb + sidec <= sidea || sidec + sidea <= sideb) {
        printf("Not a triangle\n");
    }
    else if (sidea == sideb && sideb == sidec) {
        printf("Equilateral triangle\n");
    }
    else if (sidea == sideb || sideb == sidec || sidec == sidea) {
        printf("Isosceles triangle\n");
    }
    else {
        printf("Scalene triangle\n");
    }



  return 0 ; 
}
  