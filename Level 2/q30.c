// Q30. Find the roots of the quadratic equation: bx2+cx+5=0[Suggestion: You can also take equation 
// from user through scanf()

#include<stdio.h>
#include<math.h>
int main() {
    int a , b , c;
    double root1,root2,real_part,img_part;
    printf("Enter a , b & c : ");
    scanf("%d%d%d",&a,&b,&c);
    printf("your equation Is : (%dX^2) +(%dX) + (%d)\n",a,b,c);
    double d1 = (b*b - 4*a*c);
    double d = sqrt(b*b - 4*a*c);
    
    if (d > 0) {
        root1 = (-b + d)/(2*a);
        root2 = (-b - d)/(2*a);
        printf("root1 = %.2lf & root2 = %.2lf\n",root1,root2);
    }
    else if(d == 0) {
        root1 = -b/(2*a);
        printf("root1 = root2 = %.2lf \n",root1);
    }
    else {
        real_part = -b/(2*a);
        img_part = sqrt(-d1)/(2*a);
        printf("Root1 = %.2lf + i%.2lf & Root2 = %.2lf - i%.2lf ",real_part , img_part, real_part, img_part);
    }

    return 0;
}