#include<stdio.h>
#include<math.h>


double function(double x)
{
    double equation=(6*x*x)+(11*x)-35;
return equation;
}


void main()
{
   double x1,x2,x3,f1,f2,f3,err;
   jump:
   printf("enter the initial approximate roots");
scanf("%lf%lf",&x1,&x2);
printf("enter acceptable error");
scanf("%lf",&err);

f1=function(x1);
f2=function(x2);

if(f1*f2>0.0)
{
    printf("Enter Incorrect approximation\n");
     goto jump;
}


do{
    x3=(x1+x2)/2;
f3=function(x3);

 printf("\n x1=%lf  x2=%lf  x3=%lf  f3=%lf");  //not understand
if(f1*f3<0)
{
  x2=x3;
f2=f3;
}

else
{
   x1=x3;
  f1=f3;}
}
while(fabs(f3)>err);
printf("\nroot:%lf",x3);
}