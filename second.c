#include<stdio.h>
int main(){
int f = 80;
int c = 0;
c = (5.0 / 9.0) * (f - 32);// implicit type conversion
// c = (int) ((5.0 / 9.0) * (f - 32));// explicit type conversion
printf("%d\n",c);
}
