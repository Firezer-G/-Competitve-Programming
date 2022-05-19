#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> values(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j]&&i!=j){
                    values[i]++;
                }
            }
        }
        return values;
    }
};
int main(){
	vector<int> nums{8,1,2,2,3};
	Solution sol;
	vector<int> values=sol.smallerNumbersThanCurrent(nums);
	for(const int &num:values){
		cout<<num<<" ";
	}
}
