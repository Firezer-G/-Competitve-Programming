#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
vector<string> fizzBuzz(int n){
	vector<string> answer;
	for(int i=1;i<=n;i++){
		if(i%3==0&&i%5==0){
			answer.push_back("FizzBuzz");
		}else if(i%3==0){
			answer.push_back("Fizz");
		}else if(i%5==0){
			answer.push_back("Buzz");
		}else{
			ostringstream num;
			num<<i;
			answer.push_back(num.str());
		}
	}
	return answer;
}
int main(){
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	vector<string> answer= fizzBuzz(number);
	for(int i=0;i<answer.size();i++){
		cout<<answer[i]<<" ";
	}
}
