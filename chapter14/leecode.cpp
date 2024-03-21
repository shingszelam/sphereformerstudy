//
// Created by 77469 on 2024/3/6.
//
#include <iostream>
#include <cmath>
#include <vector>
#include <bitset>

using namespace std;

int findMaxBinaryLength(const std::vector<int>& nums);


int main()
{
    vector<int> nums= {10,8,5,9,11,6,8};
    int count=0;
    int ans=0;
    int k = 1;
    int maxBinaryLenght = findMaxBinaryLength(nums);
    for (int i = 0; i < maxBinaryLenght; i++) {
        long temp = std::pow(2, i);
        count = 0; // 初始化计数器
        for (int j = 0; j < nums.size(); j++) {
            if ((temp & nums[j]) == temp) // 如果temp是nums[j]的子集
                count++;
        }
        if (count >= k) {
            ans |= temp;  // 将对应的二进制位加到ans上
        }}
    cout << ans;

    return 0;

}

int findMaxBinaryLength(const std::vector<int>& nums)
{

    if (nums.empty()) {
        // 数组为空时，返回0或者根据需求返回合适的默认值
        return 0;
    }

    int maxBinaryLength = 0;

    // 遍历数组，找到所有数转换成二进制后的最长位数
    for (int num : nums) {
        bitset<32> binaryNum(num);  // 假设最大值为32位
        int currentLength = binaryNum.size();

        // 更新最长位数
        if (currentLength > maxBinaryLength) {
            maxBinaryLength = currentLength;
        }
    }

    return maxBinaryLength;
}