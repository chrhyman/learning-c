#include <stdio.h>
int main(){int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;printf("Enter the numbers from 1 to 16 in any order:\n");scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\nRow sums: %d %d %d %d\nColumn sums: %d %d %d %d\nDiagonal sums: %d %d\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,a+b+c+d,e+f+g+h,i+j+k+l,m+n+o+p,a+e+i+m,b+f+j+n,c+g+k+o,d+h+l+p,a+f+k+p,d+g+j+m);}