#inclu<iostrea>
include <fstream>
#include <map>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// [2,7,11,15], target = 9
vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int> m;
    vector<int> result;
    for(int i=0;i<nums.size();i++){
        m[nums[i]] = i;
    }
    for(int i=0;i<nums.size();i++){
        int t = target - nums[i];
        if(m.find(t)!=m.end() && m[t]!=i){
            result.push_back(i);
            result.push_back(m[t]);
            break;
        }
    }
    return result;
}

int main(){

    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);
    int target = 9;
    vector<int> result = twoSum(nums, target);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }

    map<int, int> m;

    // 向 m 中插入元素
    m[1] = 10;
    m[2] = 20;
    m[3] = 30;

    cout << "hi" << endl;
  
