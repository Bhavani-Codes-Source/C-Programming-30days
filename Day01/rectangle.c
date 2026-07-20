#include<stdio.h>
int main(){
  float lenght,width,area,perimeter;
printf("Enter the length of the rectangle:");
scanf("%f",&length);
printf("Enter the width of the rectangle:");
sacnf("%f",&width);
area=length*width;
  perimeter=2*(length+width);
printf("\n___Results___\n");
printf("Area:%.2f\n",area);
intf("Perimeter:%2f\n",perimeter);
return 0;
}
