//题目：反转数组
//编译方法：g++ file.cc -o a -std=c++11
#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        reverse(nums.begin(),nums.end()-k%len);
        reverse(nums.end()-k%len,nums.end());
        reverse(nums.begin(),nums.end());
        return;
    }
};

int main(){
	Solution solution;
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(6);
	nums.push_back(7);
	solution.rotate(nums,3);
	for(auto i:nums){
		cout << i << " ";
	}
	cout << endl;
    return 0;
}

