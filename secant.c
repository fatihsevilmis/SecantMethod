// Secant Method

#include <stdio.h>
#include <conio.h>
#include <math.h>

double f(double x)
{
	return pow(x,3) - 4*x - 9; 
}

double secant(double a, double b)
{
	
	double Tolerance     = 1e-12;
	int    MaxIteration  = 1000;
	int    Counter       = 0;
	
	double c, f0, f1;
		
	while(fabs(b) > Tolerance && Counter < MaxIteration)
	{
		f0 = f(a);
		f1 = f(b);
		
		if(!(fabs(f1 - f0)<Tolerance))
    	{
    		c = b - (f1*(a-b))/(f0 - f1);
			a = b;
			b = c;
			Counter++;
			continue;	
		}	  	 
			
		if(0 == Counter)
		{
			printf("Convergence was not achieved sufficiently.\n");
			return 0;
		}
			
		printf("Number of Iterations: %d\n",Counter);
		return c;
	}
}
	
int main()
{
	double a = 0.0;
	double b = 1.0;
	double root = secant(a, b);

    if (root) 
	{
        printf("Root of the equation: %f\n", root);
    } 
	else 
	{
        printf("No Root Found in the Specified Range.");
    }
    
	getch();
}