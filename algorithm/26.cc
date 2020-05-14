//题目: 去重
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
//编译的时候使用g++ file.c -o a -std=c++11
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2) return nums.size();
        int j = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[j]!=nums[i]) nums[++j]=nums[i];
        }
        return ++j;
    }
};
int main(){
	Solution solution;
	std::vector<int> num;
	num.push_back(1);
	num.push_back(1);
	num.push_back(2);
	int ret = solution.removeDuplicates(num);
	num.resize(ret);
	for(auto i:num)
		cout << i << " ";
	cout << endl;
	printf("%d\n",ret);
    return 0;
}

