#include <stdio.h>

float y=2.0;
float *p;
p=&y;
*p=3; //(y=3)

float **pp;
pp=&p;
**pp=4; //acessou o conteudo do conteudo de pp, y=4
