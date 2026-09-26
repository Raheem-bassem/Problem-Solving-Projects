#include <iostream>  
#include <string>     
#include <cmath>      

using namespace std;

float ReadNumber()
{
    float L;
    cout << "Please enter the A of the circle? " << endl;
    cin >> L;
    return L;
}

float CircleAreabyInscribedinaSquare(float L)
{
    const float PI = 3.14;

    float Area = (L * L) / (4 * PI);

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
