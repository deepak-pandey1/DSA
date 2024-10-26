//------------------------------------------------------->Print 2D arry(row wise)
// #include <iostream>
// using namespace std;


// void printArray(int arr[][4], int row, int col) {
//     for(int i=0; i<row; i++ ) {
//       for(int j=0; j<col; j++) {
  
//         cout << arr[i][j] << " ";
//       }
//       cout << endl;
//     }
// }


// int main()
// {
//     // // iniitialse
//     // int crr[][4] = {   //atleast column daina is mandodtry bcz of formula of accessing from 1D to 2D. Formula is C*I*J
//     //   {1,2,3,4},
//     //   {5,6,7,8},
//     //   {9,10,1,11}
//     // };

//     int arr[3][4] = {
//       {1,2,3,4},
//       {5,6,7,8},
//       {9,10,1,11}
//     };

//     int row = 3;
//     int col = 4;
//     printArray(arr, row, col);
//     return 0;
// }


//------------------------------------------------------->Print 2D arry(col wise)
// #include <iostream>
// using namespace std;

// void colWisePrint(int arr[][4], int row, int col ){   //for column wise print
//     for(int i=0; i<col; i++) {
//       for(int j=0; j<row; j++) {
//         cout << arr[j][i] << " ";
//       }
//       cout << endl;
//     }
// }

// int main()
// {
//     int arr[3][4] = {
//       {1,2,3,4},
//       {5,6,7,8},
//       {9,10,1,11}
//     };

//     int row = 3;
//     int col = 4;
//     colWisePrint(arr,  row,  col);
//     return 0;
// }


//------------------------------------------------------->array as input
// #include <iostream>
// using namespace std;

// void printArray(int arr[3][3] , int row, int col) {
//     for(int i=0; i<row; i++ ) {
//       for(int j=0; j<col; j++) {
//         cout << arr[i][j] << " ";
//       }
//       cout << endl;
//     }
// }

// int main()
// {
//     int arr[3][3];
//     int row = 3;
//     int col = 3;

//     for(int i=0; i<row; i++) {
//      for(int j=0; j<col; j++) {
//        cout << "Enter the input for row index: " << i << " column index: " << j << endl;
//        cin >> arr[i][j] ;
//      }
//     }

//     printArray(arr, row, col);

//     return 0;
// }


//------------------------------------------------------->linear search in 2D array
// #include <iostream>
// using namespace std;

// bool findTarget(int arr[][4], int row, int col, int target ) {
//     for(int i=0; i<row; i++) {
//       for(int j=0; j<col; j++) {
//         if(arr[i][j] == target) {
//           return true;    //if found, return true
//         }
//       }
//     }
//     //iss line pr tabhi aa skte ho,
//     //jab saare k saare elements check
//     //ho chuke honge and target nahi mila hoga
//     //return krdo false;
//     return false;
// }

// int main()
// {
//   int arr[4][4] = {
//     {1,2,3,4},
//     {5,6,70,8},
//     {9,10,1,11},
//     {12,24,46,89}
//   };
//   int row = 4;
//   int col = 4;
//   int target = 110;

//   cout << "Found or Not: " << findTarget(arr, row, col, target) << endl;
//   return 0;
// }


//------------------------------------------------------->find min and max
// #include <iostream>
// #include <limits.h>
// using namespace std;

// int findMax(int arr[][4], int row, int col) {
//     int maxAns = INT_MIN;
  
//     for(int i=0; i<row; i++) {
//       for(int j=0; j<col; j++) {
        
//         if(arr[i][j] > maxAns ) {
//           maxAns = arr[i][j];
//         }
        
//       }
//     }
//     return maxAns;
// }

// int findMin(int arr[][4], int row, int col ){
//     int minAns = INT_MAX;
//     for(int i=0; i<row; i++) {
//       for(int j=0; j<col; j++) {
  
//         if(arr[i][j] < minAns) {
//           minAns = arr[i][j];
//         }
        
//       }
//     }
//   return minAns;
// }

// int main()
// {
//   int arr[4][4] = {
//     {1,2,3,4},
//     {5,6,70,8},
//     {9,10,1,11},
//     {12,24,46,89}
//   };
//   int row = 4;
//   int col = 4;

//   cout << "Printing the max No. : " << findMax(arr, row, col ) << endl;
//   cout << "Printing the max No. : " << findMin(arr, row, col ) << endl;
//   return 0;
// }


//------------------------------------------------------->find row wise sum of an 2d array
// #include <iostream>
// #include <limits.h>
// using namespace std;

// void rowWiseSum(int arr[][4], int row, int col ){
//   for(int i=0; i<row; i++) {
//     int sum = 0;
//     for(int j=0;j<col;j++) {
//       sum = sum + arr[i][j];
//     }
//     cout << sum << endl;
//   }
// }

// int main()
// {

//   int arr[4][4] = {
//     {1,2,3,4},
//     {5,6,70,8},
//     {9,10,1,11},
//     {12,24,46,89}
//   };
//   int row = 4;
//   int col = 4;

//   rowWiseSum(arr, row,  col);
//   return 0;
// }


//------------------------------------------------------->Transpose of matrix
// #include <iostream>
// #include <limits.h>
// using namespace std;

// void printArray(int arr[][4], int row, int col) {
//   for(int i=0; i<row; i++ ) {
//     for(int j=0; j<col; j++) {
//       cout << arr[i][j] << " ";
//     }
//     cout << endl;
//   }
// }

// void transpose(int arr[][4], int row, int col ) {   //solve by upper trianle we can also solve by lower trianle
//   for(int i=0; i<row; i++) {
//     for(int j=i; j<col; j++) {
//       swap(arr[i][j], arr[j][i]);
//     }
//   }
// }

// int main()
// {
//   int arr[4][4] = {
//      {1,2,3,4},
//      {5,6,70,8},
//      {9,10,1,11},
//      {12,24,46,89}
//   };
  
//   int row = 4;
//   int col = 4;
  
//   cout<< endl << "Printing before transpose" << endl;
//   printArray(arr, row, col);

//   cout<< endl  << "Doing transpose" << endl;
//   transpose(arr, row,  col);

//   cout<< endl  << "Printing after transpose" << endl;
//   printArray(arr, row, col);
//   return 0;
// }


//------------------------------------------------------->2d vector
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//   //2d array
//     vector< vector<int> > arr(5, vector<int>(10,-1));
//     //arr(5, vector<int>(10,-1)); => 5 means row size and vector<int>(10,-1) means intialization or coumn define,
//     //means each row contain 10 coulmn and contain value -1

//     for(int i = 0; i<arr.size(); i++){
//       for(int j = 0; j<arr[i].size(); j++){
//         cout<< arr[i][j] <<" ";
//       }
//       cout<<endl;
//     }
//     return 0;    
// }


//------------------------------------------------------->zagged array
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     //Jagged Array  - HW
  
//     vector< vector<int> > brr;
  
  
//     vector<int> vec1(10,0);
//     vector<int> vec2(5,1);
//     vector<int> vec3(7,0);
//     vector<int> vec4(8,1);
//     vector<int> vec5(20,0);
  
//     brr.push_back(vec1);
//     brr.push_back(vec2);
//     brr.push_back(vec3);
//     brr.push_back(vec4);
//     brr.push_back(vec5);
  
//     for(int i=0; i<brr.size(); i++) {
//       for(int j=0; j<brr[i].size(); j++) {
//         cout << brr[i][j] << " ";
//       }
//       cout << endl;
//     }
//     return 0;    
// }