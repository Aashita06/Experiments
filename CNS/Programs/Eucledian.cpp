#include <bits/stdc++.h>
using namespace std;

int findGcd(int r1, int r2)
{
    if (r2 == 0)
    {
        return r1;
    }

    int q = r1 / r2;
    int r = r1 % r2;

    cout<<"q "<<"r1 "<<"r2 "<<"r "<<endl; 
    cout << q << " " << r1 << " " << r2 << " " << r << " "<< endl;

    return findGcd(r2, r);
}

int main()
{

    int num1, num2;
    cout << "Enter 2 numbers to find GCD" << endl;
    cin >> num1 >> num2;

    int gcd = findGcd(num1, num2);
    cout << "GCD is " << gcd << endl;
    

    return 0;
}










