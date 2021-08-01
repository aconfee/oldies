/***********************************
ADAM ESTELA THUMBPRINT 2.0
6/23/2011
***********************************/
#include <stdio.h>

#define MADNESS 1

int main(void)
{
  char*strs[]={"xZaRR&;, "\"**i", "efyourlife", "32,23$$^", "234$#@!%1342", "%^&*(", "!@#$%^&*()", "0123123", 0};
  char**pps = strs;
  int i = 0;
  int xzAR = 30;

  while(*pps)
  {
    printf("%c", *(*++pps+i) + (i<<3^i<<4-MADNESS) + (xzAR+++1));
    ++i;i++;
    pps++;
    xzAR=(xzAR==31&&i==2) ?xzAR=55: (xzAR=xzAR);
  }
  return 0;
}