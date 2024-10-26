// bool return type hota hai custom comparator kai fun ka
// custom comparator kai func mai hmaisa refrence mai laina hai like &

// ------------------------------------------------------->basics of custom comparator
// #include <algorithm>
// #include <iostream>
// #include <vector>
// using namespace std;

// void print(vector<int> &v) {
//     for (int i = 0; i < v.size(); ++i) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// bool mycomp(int &a, int &b) {
//     // return a < b; // increasing order sorting
//     return a > b; // decreasing order sorting
// }

// int main() {
//     vector<int> v = {44, 55, 22, 11, 33};
//     sort(v.begin(), v.end()); // increasing order sorting
//     sort(v.begin(), v.end(), mycomp);  //passing func as a 3 argument
//     print(v);

//     return 0;
// }



//------------------------------------------------------->question
// #include <algorithm>
// #include <iostream>
// #include <vector>
// using namespace std;

// void printVectorOfVectors(vector<vector<int>>& vec) {
//     int rows = vec.size();
//     int cols = vec[0].size();

//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             cout << vec[i][j] << " ";
//         }
//         cout << std::endl;
//     }
// }

// bool mycompfor1stIndex(vector<int> &a, vector<int> &b) {
// //   return a[1] > b[1]; // dsc order
//     return a[1] < b[1]; // asc order
// }

// int main() {
//     vector<vector<int>> v = {
//         {1, 44},
//         {0, 55},
//         {0, 22},
//         {0, 11},
//         {2, 33}
//     };
//     sort(v.begin(), v.end(), mycompfor1stIndex);
//     printVectorOfVectors(v);

//     return 0;
// }