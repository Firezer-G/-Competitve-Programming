#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]>=nums[j]){
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
    }
};
int main(){
	Solution sol;
	vector<int> nums={2,0,2,1,1,0};
	cout<<"Input: ";
	for(int num: nums){
		cout<<num<<" ";
	}
	sol.sortColors(nums);
	cout<<endl<<"Output: ";
	for(int num: nums){
		cout<<num<<" ";
	}
}
