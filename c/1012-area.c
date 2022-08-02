#include <stdio.h>

#define PI 3.14159

int main(){

  double a, b, c;

  scanf("%lf %lf %lf", &a, &b, &c);

  double triangulo = (a*c)/2;
  double circulo = PI*(c*c);
  double trapezio = ((a+b)*c)/2;
  double quadrado = b*b;
  double retangulo = a*b;

  printf("TRIANGULO: %.3lf\n", triangulo);
  printf("CIRCULO: %.3lf\n", circulo);
  printf("TRAPEZIO: %.3lf\n", trapezio);
  printf("QUADRADO: %.3lf\n", quadrado);
  printf("RETANGULO: %.3lf\n", retangulo);

  return 0;
}
