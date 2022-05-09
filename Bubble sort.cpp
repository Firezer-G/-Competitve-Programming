#include<iostream>
#include<vector>
using namespace std;

void countSwaps(vector<int> a) {
    int swaps=0;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a.size()-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swaps++;
            }
        }
    }
    cout<<"Array is sorted in "<<swaps<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[a.size()-1];
}
int main(){
	int n;
	int number;
	cin>>n;
	vector<int> a;
    for (int i = 0; i < n; i++) {
		cin>>number;
		a.push_back(number);
    }
    countSwaps(a);
}
