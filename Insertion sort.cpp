#include<iostream>
#include<vector>
using namespace std;
void insertionSort1(int n, vector<int> arr) {
	/*This Function sorts the vector from right to left
	*/
    int number=arr[n-1];
    for(int i=n-1;i>0;i--){
        if(arr[i]<arr[i-1]){
            arr[i]=arr[i-1];
            for(int j=0;j<n;j++){
        		cout<<arr[j]<<" ";	
    		}
        	arr[i-1]=number;
        	cout<<endl;
    	}else if(arr[i]>arr[i-1]){
    		break;
		}
    }
    //This loop is to display the final sorted vector
	for(int j=0;j<n;j++){
    	cout<<arr[j]<<" ";
    }

}
int main(){
	vector<int> arr;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int number;
		cin>>number;
		arr.push_back(number);
	}
	insertionSort1(n,arr);
}
