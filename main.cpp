#include <iostream>
using namespace std;

int main(){
    float V;
    float I;
    float H;
    cout << "number" <<endl;
    cout << "Enter number ";
    cin >> V;
    cout << "Enter number ";
    cin >> I;
    cout << "Enter number ";
    cin >> H;
    float A = V + I + H;
    float B = V * I * H;
    cout << " Here is " << A << endl;
    cout << " Here is " << B << endl;
    return 0;
}