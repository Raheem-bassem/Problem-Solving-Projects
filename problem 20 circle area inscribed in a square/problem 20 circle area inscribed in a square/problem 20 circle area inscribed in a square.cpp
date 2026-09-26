#include <iostream>  
#include <string>     
#include <cmath>      

using namespace std;

float ReadNumber()
{
    float A;
    cout << "Please enter the A of the circle? " << endl;
    cin >> A;
    return A;
}

float CircleAreabyInscribedinaSquare(float A)
{
    const float PI = 3.14;

    float Area = (PI * (A*A))/4;

    return Area;
}

void PrintResult(float Area)
{

    cout << "\nCircle Area = " << Area << endl;
}
int main()
{

    PrintResult(CircleAreabyInscribedinaSquare(ReadNumber()));

    return 0;
}
