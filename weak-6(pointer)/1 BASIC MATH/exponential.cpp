//------------------------------------------------------->exponential
#include <iostream>
using namespace std;
int fastExponentiations(int a, int b){
    int ans = 1;
    while(b >0){
        if(b & 1){
            ans = ans* a;
        }
        a = a*a;
        b>>=1; //b = b/2
    }
    return ans;
} //o(logb)
int slowExponentiations(int a, int b){
    int ans = 1;
    for(int i = 0; i<b; i++){
        ans *= a;
    }
    return ans;
} //0(b)
int main()
{
    cout << slowExponentiations(5, 4)<<endl;
    cout << fastExponentiations(5, 4)<<endl;
    return 0;
}