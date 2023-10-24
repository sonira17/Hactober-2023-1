# include <iostream>
using namespace std;

int main(){
    string s="daabcbaabcbc";
    string part="abc";
    int j=0;
    int i=0;
    int k=0;
    for( i=0;i<=s.length();i++){
        k=i;
        for(j=0;j<=part.length();j++){
            if(s[i]!=part[j]){
                break;
                k++;
            }
        }
        if(j==part.length()){
            cout<<i;
        }
    }
  
}
