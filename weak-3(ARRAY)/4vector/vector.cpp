//------------------------------------------------------->create vector  and  push element
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v) {
    int size = v.size();

    for(int i= 0; i<size; i++){
        cout << v[i] <<endl;
        cout << v.at(i) << " ";
    }
}

int main()
{
    //in vector, dont tell size of vector
    //just keep inserting, i will manage the allocation

    vector<int> v; //array hi hai
    
    //insert
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print(v);
    return 0;
}


//------------------------------------------------------->vector fundamental
// #include <iostream>
// #include <vector>
// using namespace std;

// void print(vector<int> v) {
//     int size = v.size();

//     for(int i= 0; i<size; i++){
//         cout << v[i] <<endl;
//     }
// }

// int main()
// {
//     vector<int> v; //array hi hai
//     while(1){
//         int d;
//         cin>>d;
//         v.push_back(d);
//         cout<<"capacity "<<v.capacity()<<" size "<<v.size()<<endl; 
//     }

//     print(v);
//     return 0;
// }


//------------------------------------------------------->pop element or deletr
// #include <iostream>
// #include <vector>
// using namespace std;

// void print(vector<int> v) {
//     int size = v.size();
//     cout<<"printing vector" <<endl;
//     for(int i= 0; i<size; i++){
//         cout << v[i] <<endl;
//     }
// }

// int main()
// {
//     //in vector, dont tell size of vector
//     //just keep inserting, i will manage the allocation

//     vector<int> v; //array hi hai
    
//     //insert
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     print(v);


//     cout<<endl;

//     // I want to clear the vector
//     v.pop_back();  //last element deleted
//     print(v);
    
//     v.pop_back();
//     print(v);
//     return 0;
// }


//------------------------------------------------------->insert an element & after the fixed sized array insert
// #include <iostream>
// #include <vector>
// using namespace std;

// void print(vector<int> v) {
//     int size = v.size();
//     cout<<endl <<"printing vector" ;
//     for(int i= 0; i<size; i++){
//         cout << v[i] <<" ";
//     }
// }

// int main()
// {
//     vector<int> v; //array hi hai
    
//     //insert
//     int n;
//     cout<<"enter the array size ";
//     cin>>n;

//     for(int i = 0; i<n; i++){
//         int d;
//         cout<<endl<<"enter the array value ";
//         cin>>d;
//         v.push_back(d);
//     }
//     print(v);


//     for(int i = 0; i<10; i++){    //after the fixed sized array insert
//         v.push_back(80);
//     }
//     print(v);

//     return 0;
// }


//------------------------------------------------------->clear all elemnt of an array
// #include <iostream>
// #include <vector>
// using namespace std;

// void print(vector<int> v) {
//     int size = v.size();
//     cout<<endl <<"printing vector" ;
//     for(int i= 0; i<size; i++){
//         cout << v[i] <<" ";
//     }
// }

// int main()
// {
//     vector<int> v; //array hi hai
    
//     //insert
//     int n;
//     cout<<"enter the array size ";
//     cin>>n;

//     for(int i = 0; i<n; i++){
//         int d;
//         cout<<endl<<"enter the array value ";
//         cin>>d;
//         v.push_back(d);
//     }
//     print(v);


//     // I want to clear the vector
//     v.clear();
//     v.push_back(50);
//     print(v);

//     return 0;
// }


//------------------------------------------------------->initialization of vector
// #include <iostream>
// #include <vector>
// using namespace std;

// void print(vector<int> v) {
//     int size = v.size();
//     cout<<endl <<"printing vector" ;
//     for(int i= 0; i<size; i++){
//         cout << v[i] <<" ";
//     }
// }

// int main()
// {
//     vector<int>arr; // default with no data, 0 size

//     vector<int>arr2(5, -1); // init with n size with specific data
//     arr2.push_back(50);
//     print(arr2);
  
//     vector<int>arr3 = {1,2,3,4,5};
//     arr3.pop_back();
//     print(arr3);
  
//     vector<int>arr4{1,2,3,4,5};
//     print(arr4);

//     return 0;
// }


//------------------------------------------------------->copy of vector
// #include <iostream>
// #include <vector>
// using namespace std;

// void print(vector<int> v) {
//     int size = v.size();
//     cout<<endl <<"printing vector" ;
//     for(int i= 0; i<size; i++){
//         cout << v[i] <<" ";
//     }
// }

// int main()
// {
//     // how to copy vector
//     vector<int> arr5 = {1,2,3,4,5};
//     vector<int>arr6(arr5);
//     print(arr6);

//     return 0;
// }


//------------------------------------------------------->print front and end elemnt of an array
// #include <iostream>
// #include <vector>
// using namespace std;

// void print(vector<int> v) {
//     int size = v.size();
//     cout<<endl <<"printing vector" ;
//     for(int i= 0; i<size; i++){
//         cout << v[i] <<" ";
//     }
// }

// int main()
// {
//     vector<char> v;
//     v.push_back('a');
  
//     v.push_back('b');
//   	v.push_back('c');
  
//     v.push_back('d');
  
//     cout << "Front element: " << v[0] << endl;
//     cout << "Front element: " << v.front() << endl;
//     cout << "End Element: " << v[v.size() - 1] << endl;
//     cout << "End Element: " << v.back() << endl;
  
//     return 0;
// }


//------------------------------------------------------->printing a vector by for each loop
// #include <iostream>
// #include <vector>
// using namespace std;

// void print(vector<int> v) {
//     cout << "Printing vector " << endl;
//     int size = v.size();
//     for (int i = 0; i < size; i++) {
//       cout << v[i] << " ";
//       // cout << v.at(i) << " ";
//     }
//     cout << endl;
// }

// void print2(vector<int> v) {
//     cout << "Printing vector method 2" << endl;
//     for(auto it:v){
// 	  cout<<it<<" ";
//     }
//     cout << endl;
// }

// int main()
// {
//     vector<int>v;
// 	v.push_back(10);
// 	v.push_back(20);
// 	v.push_back(30);
// 	v.push_back(40);
// 	print(v);
// 	print2(v);
  
//     return 0;
// }