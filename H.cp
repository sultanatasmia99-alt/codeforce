#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double X, Y;
    cin >> X >> Y;
 
    double result = X / Y;
 
    cout << "floor " << X << " / " << Y << " = " << floor(result) << endl;
    cout << "ceil "  << X << " / " << Y << " = " << ceil(result) << endl;
    cout << "round " << X << " / " << Y << " = " << round(result) << endl;
 
   
}
