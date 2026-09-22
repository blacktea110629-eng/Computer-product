#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c,x1,x2,D;
    cin >> a >> b >> c;
    D=b*b-4*a*c;
    x1=(-b+sqrt(D))/(2*a);
    x2=(-b-sqrt(D))/(2*a);

    if (D>=0)
    {
    cout << "x1= " << x1 <<endl;
    cout << "x2= " << x2 <<endl;
    }
    else
    {
    cout << "No real solution" << endl;
    }
    return 0;
}
