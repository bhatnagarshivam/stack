# include<bits/stdc++.h>
using namespace std;
bool isValid(string st){
    stack<char>S;
    for(int i=0;i<st.length();i++){
        char exp=st[i];
        if(exp=='('||exp=='{'||exp=='['){
            S.push(exp);
        }
        else{
            if(!S.empty()){
                char top=S.top();
                if((exp==')'&&top=='(')||(exp==']'&&top=='[')||(exp=='}'&&top=='{')){
                    S.pop();}
                else{
                    return false;
                }
                
            }
            else{
                return false;
            }
        }
    }
    if(S.empty()){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    string input;
    cin>>input;
    if(isValid(input)){
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}