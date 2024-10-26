//------------------------------------------------------->first non-repeating character in a stream
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    string str = "ababc";
    queue<char> q;
    int freq[26] = {0};

    for(int i = 0; i<str.length(); i++){
        char ch = str[i];
        freq[ch-'a']++;
        q.push(ch);

        // ans find kro
        while(!q.empty()){
            char frontCharacter = q.front();
            if(freq[frontCharacter - 'a'] > 1){
                // yaani ye ans nhi hai
                q.pop();
            }
            else{
                // ==1 wala case & yahi ans hai
                cout<< frontCharacter <<"->";
                break;
            }
        }

        if(q.empty()){
            // koe ans nhi nikla
            cout<<"#"<<"->";
        }
    }
    return 0;
}