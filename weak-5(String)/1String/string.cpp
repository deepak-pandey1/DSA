//STRING--> string is a collection of character, diffrence between char aaray & string is, is static & dynamic respectively

//------------------------------------------------------->creation, input & output
// #include <iostream>
// using namespace std;
// int main()
// {
//     //creation
//     string name;

//     //input
//     //cin >> name;
//     getline(cin, name);      //for space consider

//     //print
//     cout <<"Printing name: "  << name << endl;
//     //printing through index
//     cout << "printing first character: "  << name[0] << endl;

//     // ====================>for verify null character present at end
//     //printing through loop
//     int index = 0;
//     while(name[index] != '\0') {
//         cout << "index: " << index <<" character: " << name[index] << endl;
//         index++;
//     }

//     //check null character
//     cout << "Printing index 6 value: " << name[6] << endl;
//     int value = (int)name[6];

//     cout << "Value: " << value << endl;
//     return 0;
// }




//--------------------------------------------------------------MEMMBER FUNCTION-----------------------------------------------------------
//------------------------------------------------------->length of string
// #include <iostream>
// using namespace std;
// int main()
// {
//     string name;

//     cin >> name;

//     cout << "Length of string: "  << name.length() << endl;
//     return 0;
// }


//------------------------------------------------------->check empty string or not
// #include <iostream>
// using namespace std;
// int main()
// {
//     string name;

//     cin >> name;

//     // empty string
//     string temp = "";

//     cout << "Length of string: "  << name.length() << endl;
//     cout << "String is empty or not: " << temp.empty() << endl;  //empty gives true(1)
//     return 0;
// }


//------------------------------------------------------->find char at specific point
// #include <iostream>
// using namespace std;
// int main()
// {
//     string name;

//     cin >> name;

//     cout <<"Character at position 0 is: " << name.at(0) << endl;
//     cout << "Front character of string is: "<< name.front() << endl;
//     cout << "back character of string is: "<< name.back() << endl;
//     return 0;
// }


//------------------------------------------------------->Append string(concatenation)
// #include <iostream>
// using namespace std;
// int main()
// {
//     string str1 = "Love";
//     string str2 = "Babbar";

//     cout << "before appending" << endl;
//     cout << str1 << endl;
//     cout << str2 << endl;
    
//     //apend
//     str1.append(str2);

//     cout << "After appending" << endl;
//     cout << str1 << endl;
//     cout << str2 << endl;
//     return 0;
// }


//------------------------------------------------------->erase particular word(char or string) in array
// #include <iostream>
// using namespace std;
// int main()
// {
//     string desc = "This is a car";
//     desc.erase(4, 3); //erase.(start,character)
//     cout << desc << endl;
//     return 0;
// }


//------------------------------------------------------->insert(string in string)
// #include <iostream>
// using namespace std;
// int main()
// {
//     string name = "Love Babbar";
//     string middle = "kumar ";

//     name.insert(5, middle);  //insert(start, string name);

//     cout << "Printing name:  " << name << endl;
//     return 0;
// }


//------------------------------------------------------->pushback & popback
// #include <iostream>
// using namespace std;
// int main()
// {
//     string name = "love" ;

//     cout << name << endl;
  
//     name.push_back('R');  //at last index
//     cout << name << endl;
  
//     name.pop_back();
//     cout << name << endl;
//     return 0;
// }


//------------------------------------------------------->find any string from string
// #include <iostream>
// using namespace std;
// int main()
// {
//     string str1 = "yaar tera super star desi kalakar";
//     string str2  = "staryyyy";
  
  
//     if(str1.find(str2) == string::npos){
//      //not found
//      cout << "Not FOund" << endl;
//     }
//     else {
//      cout << "Found" << endl;
//     }
//     return 0;
// }


//------------------------------------------------------->comparision string from string
// #include <iostream>
// using namespace std;
// int main()
// {
//     string str1 = "babbar";
//     string str2 = "Love";
  
//     if(str1.compare(str2) == 0) {
//      cout << "Matching" << endl;
//     }
//     else {
//      cout << "not matching " << endl;
//     }
//     return 0;
// }


//------------------------------------------------------->substring
// #include <iostream>
// using namespace std;
// int main()
// {
//     string desc = "this is a car, big daddy of all suvs";

//     cout << desc.substr(19, 5) << endl;
//     return 0;
// }