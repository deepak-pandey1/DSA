//------------------------------------------------------->Char Array(creation, input & output)
// #include <iostream>
// using namespace std;
// int main()
// {
//     //creation
//     char ch[10];
  
//     //input 
//     cin >> ch;
//     // cin.getline(ch, 100);
  
//     ///print
//     cout<< "Printing the value of ch: " << ch << endl;
  
//     // ================>for verify null char contain automatically when data from i/p is end
//     //printing using loop
//     for(int i=0; i<10; i++) {
//      cout <<"At Index: " << i << " " << ch[i] << endl;
//     }

//     char temp = ch[6];   //to check null character('\0') ASCI value is 0
//     int value = (int)temp;
//     cout << "printing integer value: " << value << endl;
//     return 0;
// }


//------------------------------------------------------->input with space
// #include <iostream>
// using namespace std;
// int main()
// {
//     //creation
//     char ch[100];
  
//     //input 
//     cin.getline(ch, 100); //character name and maximum size
  
//     ///print
//     cout<< "Printing the value of ch: " << ch << endl;
  
//     //printing using loop
//     for(int i=0; i<10; i++) {
//      cout <<"At Index: " << i << " " << ch[i] << endl;
//     }
//     return 0;
// }


//------------------------------------------------------->length of string
// #include <iostream>
// #include <string.h>
// using namespace std;

// int findLength(char ch[], int size) {    //this is hw for doing in while loop

  
//   int index = 0;
//   while(ch[index] != '\0') {
//     index++;
//   }
//   return index;

    
//   // int length = 0;

//   // for(int i=0; i<size; i++) {
//   //  if(ch[i] == '\0') {
//   //    //ruk jao
//   //    break;
//   //  }
//   //  else {
//   //    length++;
//   //  }
//   // }

//   // return length;
// }

// int main()
// {
//     //creation
//     char ch[20];
  
//     //input 
//     cin >> ch;
//     // cin.getline(ch, 20); //count space

//     int len = findLength(ch, 100);
  
//     cout << "length og string is: "<< len << endl;
//     cout << "printing length: " << strlen(ch) << endl;    //inbult fun
//     return 0;
// }


//------------------------------------------------------->reverse a string
// #include <iostream>
// #include <string.h>
// using namespace std;

// int findLength(char ch[], int size) {
//   int index = 0;
//   while(ch[index] != '\0') {
//     index++;
//   }
//   return index;
// }

// void reverseString(char ch[] , int n) {
//   int i=0; 
//   int j = n-1;

//   while(i<=j) {
//     swap(ch[i], ch[j]);
//     i++;
//     j--;
//   }
  
// }

// int main()
// {
//     //creation
//     char ch[100];

//     cin.getline(ch, 20); //count space
//     cout << "Before " << ch << endl;

//     int len = findLength(ch, 100);
//     reverseString(ch,len);
    
//     cout<<endl << "After " << ch << endl;
//     return 0;
// }


//------------------------------------------------------->convert lower case to upper case
// #include <iostream>
// using namespace std;

// void convertToUpperCase(char ch[], int size){
//   int index = 0;

//   while(ch[index] != '\0'){
//     //check if lowercase, then convert to upper case
//     if(ch[index] >= 'a' && ch[index] <= 'z'){
//       ch[index] = ch[index] - 'a' + 'A';
//     }
//     index++;
//   }
// }

// int main()
// {
//     char ch[100];
//     cin.getline(ch,100);

//     cout << "Before " << ch << endl;
//     convertToUpperCase(ch, 100);
//     cout<<endl << "After " << ch << endl;
//     return 0;
// }


//------------------------------------------------------->convert @ with space
// #include <iostream>
// using namespace std;

// void replaceCharacter(char ch[], int n) {
//   int index = 0;
  
//   while(ch[index] != '\0') {
//     if(ch[index] == '@') {
//       //insert space
//       ch[index] = ' ';
//     }
//     index++;
//   }
// }

// int main()
// {
//     char ch[100];
//     cin.getline(ch,100);

//     cout << "Before " << ch << endl;
//     replaceCharacter(ch, 100);
//     cout<<endl << "After " << ch << endl;
//     return 0;
// }


//------------------------------------------------------->check palindrome(string like kanak)
// #include <iostream>
// using namespace std;

// bool checkPalindrome(char ch[], int n) {
//   //n -> length of string
//   int i=0; 
//   int j = n-1;

//   while( i <= j) {
//     if(ch[i] == ch[j]) {
//       i++;
//       j--;
//     }
//     else {
//       //characters are not matching
//       return false;
//     }
//   }
//   //agar yaha pohjoch gye ho
//   //iska matlab saare characters match kr gye h 
//   ///iska matlab palindrome hai 
//   //iska matlab return true krdo
//   return true;
  
// }

// int findLength(char ch[], int size) {
//   int index = 0;
//   while(ch[index] != '\0') {
//     index++;
//   }
//   return index;
// }

// int main()
// {
//     char ch[100];
//     cin.getline(ch,100);

//     int len = findLength(ch, 100); 
//     bool isPalindrome = checkPalindrome(ch, len);

//     if(isPalindrome) {
//      cout << "Valid Palindrome" << endl;
//     }
//     else {
//      cout << "Invalid Palindrome" << endl;
//     }  
//     return 0;
// }