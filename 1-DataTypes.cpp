#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int x;
    double y;
    char *z[6000];
    scanf("%d",&x);
    scanf("%lf",&y);
    scanf("%*[\n] %[^\n]", z);

    printf("%d",(x+i));
    printf("\n%0.1lf",(d+y));
    printf("\n%s%s",s,z);
  
    return 0;
