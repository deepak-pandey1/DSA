//------------------------------------------------------->no pyramid
#include <iostream>
using namespace std;

#define PI 3.1459465                  //its not varaiable or not take space actual it transfer value during execution

float CIRCLEaREA(float r){
    return PI * r *r;
}

float CIRCLEparameter(float r){
    return 2 * PI * r;
}

int main()
{
    cout << CIRCLEaREA(33.3)<<endl;
    return 0;
}