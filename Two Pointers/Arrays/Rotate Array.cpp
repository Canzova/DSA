/*
Question Name : 189. Rotate Array

Time Complexity : O(N)
Space Complexity : O(1)


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        int start = 0;
        int end = n - 1;

        while(start <= end){
            swap(nums[start++], nums[end--]);
        }

        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());

    }
};


*/