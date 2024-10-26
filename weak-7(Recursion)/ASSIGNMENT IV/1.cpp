//------------------------------------------------------->last occurance of a char(from left to right)
// #include <iostream>
// using namespace std;

// void lastOccLTR(string &s, char x, int i, int &ans){
//     // base case
//     if(i >= s.size()){
//         return;
//     }

//     // 1 case solution
//     if(s[i] == x){
//         ans = i;
//     }

//     // recursion call
//     lastOccLTR(s, x, i+1, ans);
// }
// int main()
// {
//     string s;
//     cin>>s;

//     char x;
//     cin>>x;

//     int ans = -1;
//     lastOccLTR(s, x, 0, ans);
//     cout << ans;
//     return 0;
// }


//------------------------------------------------------->last occurance of a char(from right to left)
// #include <iostream>
// using namespace std;

// void lastOccRTL(string &s, char x, int i, int &ans){
//     // base case
//     if(i <= 0){
//         return;
//     }

//     // 1 case solution
//     if(s[i] == x){
//         ans = i;
//         return;
//     }

//     // recursion call
//     lastOccRTL(s, x, i-1, ans);
// }
// int main()
// {
//     string s;
//     cin>>s;

//     char x;
//     cin>>x;

//     int ans = -1;
//     lastOccRTL(s, x, s.size()-1, ans);
//     cout << ans;
//     return 0;
// }