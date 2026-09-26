#include <iostream>  
#include <string>     
#include <cmath>      

using namespace std;

void ReadNumbers(float& A , float& B)
{
    cout << "Please enter the A of the circle? " << endl;
    cin >> A;

    cout << "Please enter the A of the circle? " << endl;
    cin >> A;
}

float Triangle(float A,float B)
{
    const float PI = 3.14;

    float Area = (PI)*(pow(B,2)/4)*((2*A-B)/(2*A+B));

    return Area;
}

void PrintResult(float Area)
{

    cout << "\nTriangle area = " << Area << endl;
}
int main()
{
    float A, B;
    ReadNumbers(A, B);
    PrintResult(Triangle(A,B));

    return 0;
}
