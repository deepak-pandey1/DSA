//------------------------------------------------------->reverse a string RE
#include <iostream>
using namespace std;
void reverse(string &s, int start, int end){
    // base case
    if(start >= end){
        return;
    }

    // ek case
    swap(s[start], s[end]);

    // 1 baki re sambhal laiga
    reverse(s, start+1, end-1);
}
int main()
{
    string s;
    cin>>s;
    reverse(s, 0, s.size()-1);

    cout << s;
    return 0;
}