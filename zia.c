#include<stdio.h>
int main()
{
  float marks;
  printf("enter marks (0-100): ");
  scanf("%f", &marks);
  if (marks < 0 || marks > 100){
    printf("invalid marks.\n");
  }
  else if (marks < 40){
    printf("result : fail\n");
    printf("grade : F\n");
  }
  else if (marks >= 90){
    printf("result : pass\n");
    printf("grade : A+\n");
  }
  else if (marks >=80){
    printf("resut : pass\n");
    printf("result :A\n");
  }
  else if (marks >= 70){
    printf("result : pass\n");
    printf("grade :B+\n");
  }
  else if (marks >= 60){
    printf("result : pass\n");
    printf("grade : B\n");
  }
  else if (marks >= 50){
    printf("result : pass\n");
    printf("grade : C\n");
  }
  else {
    printf("result : pass\n");
    printf("grade : D\n");
  }
}
