#include <iostream>  
#include <string>     
#include <cmath>      

using namespace std;

float ReadNumber()
{
    float D;
    cout << "Please enter the diameter of the circle? " << endl;
    cin >> D;
    return D;
}

float CircleAreabyDiameter(float D)
{
    const float PI = 3.14;

    float Area = (PI * (D * D)) / 4;

    return Area;
}

void PrintResult(float Area)
{

    cout << "\nCircle Area = " << Area << endl;
}
int main()
{

    PrintResult(CircleAreabyDiameter(ReadNumber()));

    return 0;
}
