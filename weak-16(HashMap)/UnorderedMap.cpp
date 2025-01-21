#include <iostream>
#include<unordered_map>
using namespace std;

int main() {
    //------------------------------------------------------->creation
    unordered_map<string,int> mapping;


    //------------------------------------------------------->insertion Way
    //insertion by pair(map pair he store krta hai so phlai pair he bna lo)
    pair<string, int> p = make_pair("love", 25);
    pair<string,int> q("dipansh",24);
    pair<string,int> r;
    q.first = "arun";
    q.second = 21;
    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);
    //insert by square bracket
    mapping["babbar"] = 51;

    //------------------------------------------------------->size
    cout << "Size of map: " << mapping.size() << endl;


    //------------------------------------------------------->ACCESS 
    cout << mapping.at("love") << endl;
    cout << mapping["love"] << endl;  //if key is not present then it will insert the key with value 0

    //------------------------------------------------------->searching
    cout << mapping.count("lover") << endl;
    cout << "Size of map: " << mapping.size() << endl; 

    if(mapping.find("babbar") != mapping.end() ) {
      cout << "Found" << endl;
    }
    else {
      cout << "Not Found" << endl;
    }

    //------------------------------------------------------->if key is not present then it will insert the key with value 0
    cout << "Size of map: " << mapping.size() << endl; 
    cout << mapping["kumar"] << endl;
    cout << "Size of map: " << mapping.size() << endl;
    return 0;
}