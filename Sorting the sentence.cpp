#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    string sortSentence(string s) {
        int n=1;
        for(int i=0;i<s.size();i++){
            if(isspace(s[i])){
                n++;
            }
        }
		vector<string> str(n);
		string word;
		for(int i=0;i<s.size();i++){
			if(isdigit(s[i])){
				int n;
				n=s[i]-'0';
				str[n-1]=word;
                word="";                
			}else if (!isspace(s[i])){
				word+=s[i];   
			}
		}
        string sentence="";
        for(int i=0;i<str.size();i++){
            if(i!=0){
                sentence+=" ";
            }
            sentence+=str[i];
        }
        return sentence;
	}
};
int main(){
	Solution sol;
	string sentence="is2 sentence4 This1 a3";
	cout<<"Input: "<<sentence<<endl;
	cout<<"Output: "<<sol.sortSentence(sentence);
}
