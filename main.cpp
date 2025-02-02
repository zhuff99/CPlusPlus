#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    double a, b, c, y, x;
    
    cout<<" Enter the numbers is this order: " "  A^2, Bx, C  ";
    cin>> a;
    cin>> b;
    cin>> c;
    
    x = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    y = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    
    cout<< " Answer 1 = " << x << endl ;
    cout<< " Answer 2 = " << y << endl ;
    
    
    return 0;
    
    
    
    
}
