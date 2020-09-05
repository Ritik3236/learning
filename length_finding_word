#include <iostream>

using namespace std;

int main() {
    int t,v,w,i;
    char str[201];
    cin>>t;
    while(t--){
        v=0;
        w=0;
        cin >> str;
        for(i=4; str[i+4] != '\0';i++)
            {
                if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
                    v++;
                }
                w++;
            }
        cout<<(w-v+4)<<"/"<<(w+8)<<"\n";
    }
}
