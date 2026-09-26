#include <iostream>  
#include <string>     
#include <cmath>      

using namespace std;

float ReadNumber()
{
    float r;
    cout << "Please enter radius of the circle? " << endl;
    cin >> r;
    return r;
}

float CircleAreabyRadius(float r)
{
    const float PI = 3.14;

    float Area = PI * (r*r);

    return Area;
}

void PrintResult(float Area)
{

    cout << "\nCircle Area = " << Area << endl;
}
int main()
{

    PrintResult(CircleAreabyRadius(ReadNumber()));

    return 0;
}
