#include <stdio.h>

/*
  可以使用Cramer规则解下面的2  2线性方程组，假定ad-bc不为0:
  ax + by = 2
  cx + dy = f 
  x=   (ed-bf)/(ad-bc)（式1）
   
  y= (af-ec)/(ad-bc)（式2）
  编写程序，求解一下方程组并显示x和y的值
  6.7x + 50.2y = 46.5
  2.1x + 0.43y = 5.9
*/

int main() {
  double Dx[2][2] = {
  { 46.5, 50.2 },
  { 5.9, 0.43 },
  };

  double Dy[2][2] = {
  { 6.7, 46.5 },
  { 2.1, 5.9 },
  };

  double D[2][2] = {
  { 6.7, 50.2 },
  { 2.1, 0.43 },
  };
  
  double x = ((Dx[0][0]*Dx[1][1]) - (Dx[1][0]*Dx[0][1]))/((D[0][0]*D[1][1]) - (D[1][0]*D[0][1]));

  double y = ((Dy[0][0]*Dy[1][1]) - (Dy[1][0]*Dy[0][1]))/((D[0][0]*D[1][1]) - (D[1][0]*D[0][1]));
  
  printf("X = %f Y = %f\n", x, y);

  // Double check
  // printf("6.7x + 50.2y = %f\n", 6.7*x + 50.2*y);
  // printf("2.1x + 0.43y = %f\n", 2.1*x + 0.43*y);
  
  return 0;
}