// Leetcode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<vector>
using namespace std;
/*
给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
*/
//摩尔投票法！！！！！！！！！
class Solution {
public:
	int majorityElement(vector<int>& nums)
	{
		int tempSize = nums.size();
		int count =0;
		int maj = 0;
		for (int i = 0;i < tempSize;i++)
		{
			if (count == 0)
			{
				maj = nums[i];
				count = 1;
			}
			else
			{
				if (maj == nums[i])
				{
					count++;
				}
				else
				{
					count--;
				}
			}
		}
		return maj;
	}
};

int main()
{
	Solution s;
	vector<int> vec1{ 6,5,5,6,6,6,6,5 };
    cout << s.majorityElement(vec1);
}

