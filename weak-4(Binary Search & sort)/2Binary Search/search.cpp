//------------------------------------------------------->find pivot index or Element
// #include <iostream>
// #include<vector>
// using namespace std;

// int findPivotIndex(vector<int>& arr) {
//         int n = arr.size();
//         int s = 0;
//         int e = n-1;
//         int mid = s + (e-s)/2;

//         while(s <= e) {
//             if(s == e)  return s;  //corner case single element

//             if(arr[mid] > arr[mid+1])   // for bw a and b
//                 return mid;

//             else if(arr[mid] < arr[mid-1])  // for bw a and b
//                 return mid-1;

//             else if(arr[s] > arr[mid] )   // mean lie on B so go left
//                 e = mid - 1;
//             else                          // mean lie on A so go right
//                 s = mid + 1;
            
//             mid = s + (e-s)/2;
//         }
//         return -1;

//     }


// int main() {
//   vector<int> v;


//   v.push_back(2);
//   v.push_back(4);
//   v.push_back(6);
//   v.push_back(8);
// //   v.push_back(10);

//   int pivotIndex = findPivotIndex(v);
//   cout << "Pivot Index is: " << pivotIndex << endl;
//   return 0;
// }