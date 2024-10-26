//------------------------------------------------------->refrence variable
#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    //k is a Refrence Variable refering to n
    int &k = n;  //nick name given to 'n'

    //c is a Refrence Variable refering to n
    int &c = n;  //nick name given to 'n'

    cout << "n: "<<n<<endl;
    cout << "k: "<<n<<endl;
    cout << "c: "<<n<<endl;

    k++;
    cout << "n: "<<n<<endl;
    cout << "k: "<<n<<endl;
    cout << "c: "<<n<<endl;
    return 0;
}