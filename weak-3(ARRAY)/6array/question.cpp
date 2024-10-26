//------------------------------------------------------->shift negitive number to left side
// #include <iostream>
// using namespace std;
// void shiftNegetiveOneSide(int arr[], int size){
//         int j = 0;
//     for(int index = 0; index < size; index++){
//         if(arr[index] < 0){
//             swap(arr[index],arr[j]);
//             j++;
//         }
//     }
// }
// int main()
// {
//     int arr[] = {23,-7,12,-10,-11,40,60};
//     int size = 7;

//     shiftNegetiveOneSide(arr, size);
//     cout<<"array ";
//     for(int i = 0; i<7; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// Time Complexity: O(n)⌛




//------------------------------------------------------->75. Sort Colors
//------------------------------------------------------->189. Rotate Array
//------------------------------------------------------->268. Missing Number
//------------------------------------------------------->2643. Row With Maximum Ones
//------------------------------------------------------->48. Rotate Image





//------------------------------------------------------->move all negitive number to the left side of an array
// #include <iostream>
// using namespace std;
// void shiftNegLft(int arr[], int size){
//     //dutch national flag algo
//     int l = 0;
//     int h = size-1;
//     while(l<h) {
//         if(arr[l]<0){
//             l++;
//         }
//         else if(arr[h]>0){
//             h--;
//         }
//         else{
//             swap(arr[l], arr[h]);
//         }
//     }
// }
// int main()
// {
//     int arr[] = {2,-6,-5,0,-4,2,6};
//     int size = 7;

//     shiftNegLft(arr, size);
//     cout<<"array ";
//     for(int i = 0; i<7; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


//------------------------------------------------------->wave print A matrix
// #include <iostream>
// #include <vector>
// using namespace std;

// void wavePrintMatrix(vector<vector<int>>v){
//     int row = v.size();
//     int column = v[0].size();

//     for(int startCol = 0; startCol<column; startCol++){
//         //even no of col -> top to bottom
//         if((startCol & 1) == 0){
//             for(int i = 0; i<row; i++){
//                 cout<<v[i][startCol]<<" ";
//             }
//         }
//         else{
//             //odd no of col -> bottom to top
//             for(int i = row-1; i>=0; i--){
//                 cout<<v[i][startCol]<<" ";
//             }
//         }
//     }
// }
// int main()
// {
//     vector<vector<int>>v {
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };
//     wavePrintMatrix(v);
//     return 0;
// }