#include<iostream>
#include<vector>
using namespace std;
vector<int> countsort(vector<int> arr) {
    int maxx=arr[0];
    for(int i=0;i<arr.size();i++){
        if (maxx<arr[i]) {
            maxx=arr[i];
        }
    }
    vector<int> sorted(maxx+1);
    for(int i=0;i<arr.size();i++){
        sorted[arr[i]]++;
    }
    return sorted;
}

void display(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr=countsort(arr);
    display(arr);
    return 0;
}
