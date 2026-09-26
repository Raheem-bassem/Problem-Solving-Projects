#include <iostream>  
#include <string>     
#include <cmath>      

using namespace std;

void ReadNumbers(float& A, float& H)
{

    cout << "Please enter traingle side A ? " << endl;
    cin >> A;

    cout << "Please enter triangle side h ?" << endl;
    cin >> H;
}

float TriangleAreaBySideAndH(float A, float H)
{

    float Area = ( A  / 2) * H;

    return Area;
}

void PrintResult(float Area)
{

    cout << "\nTriangle Area = " << Area << endl;
}
int main()
{
    float A, H;
    ReadNumbers(A, H);

    PrintResult(TriangleAreaBySideAndH(A, H));

    return 0;
}
