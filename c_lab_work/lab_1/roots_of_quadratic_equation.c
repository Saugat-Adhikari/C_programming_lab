#include<stdio.h>
#include<math.h>
int main(){
//WAP to find the roots of a quadratic equation of the form ax^2+bx+c=0.
float root,root1, root2, a=1,b=2,c=5, x,y,imaginary;
x = pow(b,2)-4*a*c;// x = b^2-4ac
y = -b/(2*a);// y = -b/2a
if (x > 0)
{
    root1 = (-b+sqrt(x))/(2*a);
    root2 = (-b-sqrt(x))/(2*a);
    printf("\n the root1 is %.2f\n the root2 is %.2f\n",root1,root2);
}else if (x==0)
{
    root = y;
    printf("\n the root is %.2f\n",root);
}else
{
    imaginary = sqrt(-x)/(2*a);
    printf("\nthe root1 is %.2f + %.2fi \nthe root2 is %.2f %.2fi.\n", y, imaginary, y, - imaginary);
}
return 0;
}