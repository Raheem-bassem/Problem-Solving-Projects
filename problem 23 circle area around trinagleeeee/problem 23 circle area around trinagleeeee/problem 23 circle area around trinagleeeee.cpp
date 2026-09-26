#include <iostream>  
#include <string>     
#include <cmath>      

using namespace std;

void ReadNumbers(float& A, float& B,float& C)
{
    cout << "Please enter the A of the circle? " << endl;
    cin >> A;

    cout << "Please enter the Bof the circle? " << endl;
    cin >> B;

    cout << "Please enter the C of the circle? " << endl;
    cin >> C;
}

float Triangle(float A, float B,float C)
{
    const float PI = 3.141592653589793238;
    float P = (A + B + C) / 2;
    float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
    float Area = PI * pow(T, 2);
    return Area;
}

void PrintResult(float Area)
{

    cout << "\nTriangle area = " << Area << endl;
}
int main()
{
    float A, B,C;
    ReadNumbers(A, B,C);
    PrintResult(Triangle(A, B, C));

    return 0;
}
