# SecantMethod

This program computes the root of a nonlinear function using the Secant method.

"The Secant method is a numerical technique used to find the root of a function. Unlike the bisection method, 
this method employs two initial values (x₀ and x₁) instead of an interval start, 
and then attempts to find the root by connecting these two points on the graphical representation of the function.

The process is as follows:

1. Initially, two guessed values x₀ and x₁ are selected.

2. In each iteration, the point where the line intersects the x-axis, denoted as x₂, is calculated:

x2 = x1 − (f(x1) * (x1 − x0)) / (x1−x0)
​
3. This process continues until a certain condition is met (e.g., reaching a specific tolerance or maximum iteration count).

One advantage of the Secant method is that, unlike the bisection method, it converges more quickly by utilizing the slope of the line at each iteration. 
However, it has some disadvantages, such as the sensitivity to the choice of initial values and, in some cases, the lack of convergence guarantee."

(!! This code does not work with C89 standards.)
