#include<stdio.h>
#include<math.h>

typedef double (*funct) (double);

double Epsilon(void)
{
  double epsilon = 1.0;
  while ((1.0 + (epsilon / 2.0)) > 1.0) {
    epsilon /= 2.0;
  }
  return epsilon;
}



double dht(funct func, double a, double b, double epsa) {
  double x;
  while(fabs(a-b) > epsa) {
    x = (a+b) / 2.0;
    if (func(a)*func(x) > 0.0) {
      a = x;
    }
    else {
      b = x;
    }
  }
  return x;
}

double iter(funct func, double a, double b, double epsa) {
  double x = (a+b) / 2.0;
  while(fabs(x-func(x)) > epsa) {
    x = func(x);
  }
  return x;
}

double newton(funct func, funct der, double a, double b, double epsa) {
  double previous = (a+b) / 2.0;
  double next = 0.0;
  while(fabs(previous-next) > epsa) {
    next = previous;
    previous -= func(previous)/der(previous);
  }
  return previous;
}


double func1(double x) {
  return (2.0*x*sin(x)) - cos(x);
}

double func2(double x) {
  return exp(x)+sqrt(1.0+exp(2.0*x)) - 2.0;
}

double func1_iter(double x) {
  return (cos(x)/sin(x)) / 2.0;
}

double func2_iter(double x) {
  return exp(x)+(exp(2.0*x))/sqrt(1.0+exp(2.0*x));
}

double func1_der(double x) {
  return (2.0*sin(x)) + (cos(x)*2.0*x) + sin(x);
}

double func2_der(double x) {
  return exp(x)+(exp(2.0*x))/sqrt(1.0+exp(2.0*x));
}


int main() {
  double eps = 10000000*Epsilon();
  printf("function 1: \n");
  printf("function_of_dichotomy| function_of_iterations| function_of_Newton \n");
  double res1_1 = dht(func1,0.4,1.0,eps);
  double res1_2 = iter(func1_iter,0.4,1.0,eps);
  double res1_3 = newton(func1,func1_der,0.4,1.0,eps);
  printf("%.10lf         | %.10lf                | %.10lf      \n",res1_1,res1_2,res1_3);
  printf("\n");
  printf("function 2: \n");
  printf("function_of_dichotomy| function_of_iterations| function_of_Newton \n");
  double res2_1 = dht(func2,-1.0,0.0,eps);
  double res2_2 = iter(func2_iter,-1.0,0.0,eps);
  double res2_3 = newton(func2,func2_der,-1.0,0.0,eps);
  printf("%.10lf         | %.10lf                | %.10lf      \n",res2_1,res2_2,res2_3);
  return 0;
}
