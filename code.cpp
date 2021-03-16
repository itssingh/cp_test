#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag=false;
bool solve(string temp){
    stack<char> Stack;
    for(int i=0;i<temp.size();i++){
        if(Stack.empty()){
            Stack.push(temp[i]);
        }
        else if(temp[i]==')' && Stack.top()=='(')
            Stack.pop();
        else {
            Stack.push(temp[i]);
        }
    }
    if(Stack.empty())
        return true;
    else 
        return false;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    string s,temp1,temp2;
    cin>>s;
    if(s[0]==s[s.size()-1]){
        cout<<"No\n";
    }
    else{
        for(int i=0;i<s.size();i++){
            if(s[i]==s[0]){
                temp1.push_back('(');
            }
            else{
                temp1.push_back(')');
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]==s[s.size()-1]){
                temp2.push_back(')');
            }
            else{
                temp2.push_back('(');
            }
        }
        if(solve(temp1) || solve(temp2)){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }     
    }
}
return 0;
}