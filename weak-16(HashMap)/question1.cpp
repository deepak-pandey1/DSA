//------------------------------------------------------->Count Frequency of Characters in a String
#include <iostream>
#include<unordered_map>
using namespace std;

void countCharacters(unordered_map<char,int> &mapping, string str) {
    for(int i=0; i<str.length(); i++) {
      char ch = str[i];
      mapping[ch]++;  //mujha ch key mili hai to uska value 1 increase krdo(mujai bs chr ki frequency inc krni hai)
    }
}

int main() {
    string str = "lovebbabbar";
    unordered_map<char,int> mapping;
    countCharacters(mapping,str);

    for(auto i: mapping) {
      cout << i.first << " -> " <<i.second << endl;
    }

    return 0;
}