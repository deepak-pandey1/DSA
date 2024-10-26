//------------------------------------------------------->find unique element
// #include <iostream>
// using namespace std;

// int getUnique(int arr[], int n){
//     int ans = 0;
//     for(int i = 0; i<n; i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }

// int main()
// {
//     int arr[] = {2,10,11,10,2,13,15,13,15};
//     int n = 9;

//     int finalans = getUnique(arr, n);
//     cout << "final answer "<<finalans;
//     return 0;
// }


//------------------------------------------------------->print all pairs
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {10,20,30};
//     int n = 3;

//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             cout<<arr[i] <<", "<<arr[j] <<endl;
//         }
//     }
//     return 0;
// }


//------------------------------------------------------->print all triplets 
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {10,20,30};
//     int n = 3;
  
//     for(int i=0; i<n; i++ ) {
//      for(int j=0; j<n; j++) {
//        for(int k=0; k<n; k++) {
//          cout << arr[i] <<" " << arr[j] << " " << arr[k] << endl;
//        }
//      }
//     }
// }


//------------------------------------------------------->sort 0's & 1's [sorting[by counting approach] ]
// #include <iostream>
// using namespace std;

// void sortZeroOne(int arr[], int n) {
//   int zeroCount = 0;
//   int oneCount = 0;
//   //stepA: Count 0 and 1
//   for(int i=0; i<n; i++) {
//     if(arr[i] == 0) 
//       zeroCount++;
//     if(arr[i] ==1) 
//       oneCount++; 
//   }

//   // Step B: place all zeroes first
//   int i;
//   for(i =0; i<zeroCount; i++) {
//    arr[i] = 0;
//   }
//   //Step B: place all ones first 
//   for(int j = i; j<n ;j++) {
//    arr[j] = 1;
//   }

//   // //EASY WAY
//   // int index = 0;

//   // while(zeroCount--) {
//   //   arr[index] = 0;
//   //   index++;
//   // }

//   // while(oneCount--) {
//   //   arr[index] = 1;
//   //   index++;
//   // }
  
// }

// int main()
// {
//     int arr[] = {0,1,0,1,0,1,1,1,1,0,0,0,0,0};
//     int n = 14;
  
//     sortZeroOne(arr, n);
  
//     //printing the array
//     for(int i=0; i<n; i++) {
//      cout << arr[i] << " ";
//     }
// }


//------------------------------------------------------->shift array elemnt by 1[right side]
// #include <iostream>
// using namespace std;

// //right ki disha me shift
// void shiftArray(int arr[], int n) {
//   //Step 1
//   int temp = arr[n-1];

//   //step2
//   //shift -> arr[i] = arr[i-1]
//   for(int i= n-1; i>=1; i--) {
//     arr[i] = arr[i-1];
//   }

//   //step3 copy temp into 0th indecx
//   arr[0] = temp;
// }

// int main()
// {
//     int arr[] = {10,20,30,40,50,60};
//     int n= 6;
  
//     shiftArray(arr, n);
  
//     //printy
//     for(int i=0; i<n; i++) {
//       cout << arr[i] << " ";
//     }
//       return 0;
// }