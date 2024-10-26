//------------------------------------------------------->check sorted or not
// #include <iostream>
// using namespace std;
// bool checkSorted(int arr[], int size, int index) {
//     // base case
//     if(size == index){
//         return true; //means all value check so are elemnt are trues
//     }
//     // procedur
//     if(arr[index] > arr[index-1]){
//         //aage check krna padega ab
//         // ab recursion sambhal lega
//         bool aageKaAns = checkSorted(arr, size, index+1);
//     }
//     else{
//         // sorted nhi hai
//         return false;
//     }

// }
// int main()
// {
//     int arr[] = {10,20,30,40,50};
//     int size = 5;
//     int index = 1;
//     checkSorted(arr, size, index);
//     if(checkSorted){
//         cout<<"sorted";
//     }
//     else{
//         cout<<"not sorted";
//     }
//     return 0;
// }


//------------------------------------------------------->Binary search
// #include <iostream>
// using namespace std;
// int isValue(int arr[], int s, int e, int target) {
//     // base case
//     if(s > e){
//         return -1; //element not found
//     }
//     // procedur wala hm solve krai
//     int mid = s +(e-s)/2;
//     if(arr[mid] == target){
//         return mid;
//     }
//     if(arr[mid] < target){     //bake recursion sambhal laiga
//         s = mid+1;
//         return isValue(arr, s, e, target);

//     }
//     else{
//         e = mid-1;
//         return isValue(arr, s, e, target);

//     }
// }
// int main()
// {
//     int arr[] = {10,20,30,40,50,60,70,80};
//     int size = 8;
//     int s = 0;
//     int e = size-1;
//     int target = 80;
//     int ans = isValue(arr, s, e, target);
//     if(ans != -1){
//         cout<<"found";
//     }
//     else{
//         cout<<"not found";
//     }
//     return 0;
// }


//------------------------------------------------------->find subSequence by include & exclude pattern
// #include <iostream>
// using namespace std;
// void isSubsequenxe(string input, string output, int index) {
//     // base case
//     if(index >= input.length()){
//         cout<<"->"<<output<<endl;    //ans jo hai output string mai build ho chuka hai
//         return;
//     }
//     // 
//     char ch  = input[index];
//     // /exclude
//     isSubsequenxe(input, output, index+1);
//     // include
//     // output string mai ch character ko include krdo
//     output.push_back(ch);
//     isSubsequenxe(input, output, index+1);
// }
// int main()
// {
//     string input = "abc";
//     string output = "";
//     int index = 0;
//     isSubsequenxe(input, output, index);
//     return 0;
// }


//------------------------------------------------------->find subSequence by include & exclude pattern(if we change ordering)
// #include <iostream>
// using namespace std;
// void isSubsequenxe(string input, string output, int index) {
//     // base case
//     if(index >= input.length()){
//         cout<<"->"<<output<<endl;    //ans jo hai output string mai build ho chuka hai
//         return;
//     }
//     // 
//     char ch  = input[index];
//     // include
//     output.push_back(ch);
//     isSubsequenxe(input, output, index+1);
//     // /exclude
//     output.pop_back();      //phlai hmnai include kr lea so now we exclude
//     isSubsequenxe(input, output, index+1);
// }
// int main()
// {
//     string input = "abc";
//     string output = "";
//     int index = 0;
//     isSubsequenxe(input, output, index);
//     return 0;
// }