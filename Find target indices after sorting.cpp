#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> indices;
        for (int i=0;i<nums.size();i++){
            if(nums[i]==target){
                indices.push_back(i);
            }
        }
        return indices;
    }
};
int main(){
	Solution sol;
	vector<int> nums={1,2,5,2,3};
	int target=2;
	vector<int> indices=sol.targetIndices(nums,target);
	for(int indice:indices){
		cout<<indice<<" ";
	}
}
