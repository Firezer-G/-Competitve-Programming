#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> numbers;
	    for(int num:nums){
		    numbers.insert(num);
	    }
	    if(numbers.size()<3){
		    return *(next(numbers.end(),-1));
	    }else{
		    return *(next(numbers.end(),-3));	
	    }
    }
};

