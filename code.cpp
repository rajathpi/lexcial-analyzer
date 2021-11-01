#include<bits/stdc++.h>
using namespace std;

#define all(a)                      (a).begin(),(a).end()

vector<string> keywrd = {"auto","double","int","struct","break","else","long","switch","case","enum","register","typedef","char","extern","return","union","const","short","float","unsigned","continue","for","signed","void","default","goto","sizeof","volatile","do","if","static","while"};
vector<string> punctuation = {" ","+","-","*","/",",",";",">","<","=","(",")","[","]","{","}","&","|"};
vector<string> operators = {"+","-","*","/",">","<","=","|","&"};

bool isInteger(string s){
    for(auto i:s){
        if(isdigit(i) == false and i != '.' and i != '-'){
            return false;
        }
        else{
            return true;
        }
    }
    return true;
}



void solve(string s){
    if(find(all(operators), s) != operators.end()){
        cout << s << " is a Operator\n";
    }
    else if(isInteger(s)){
        cout << s << " is a Number\n";
    }
    else if(find(all(keywrd), s) != keywrd.end()){
        cout << s << " is a Keyword\n";
    }
    else if(find(all(punctuation), s) != punctuation.end()){
        cout << s << " is a Punctuation\n";
    }
    else{
        cout << s << " is a Variable\n";
    }
}

int main(){
    string s;
    freopen("in.txt", "r", stdin);
    while(cin >> s){
         solve(s);
    }
}



