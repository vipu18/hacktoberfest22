#include <bits/stdc++.h>
using namespace std;
void permutationUtil(vector<int> &nums, int i, int &numsSize, vector<vector<int>> &answer){
    if(i == numsSize){
        answer.push_back(nums);
    }
    for(int j = i; j < numsSize; j++){
        swap(nums[i], nums[j]);
        permutationUtil(nums, i+1, numsSize, answer);
        swap(nums[i], nums[j]);
    }
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> answer;
    int numsSize = nums.size();
    permutationUtil(nums, 0, numsSize, answer);
    return answer;
}
int main(){
    vector<int> nums({1, 2, 3});
    vector<vector<int>> answer = permute(nums);
    for(auto i: answer){
        for(auto j: i)
            cout<<j<<" ";
        cout<<"\t";
    }
}
