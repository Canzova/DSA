/*
Question Name : 922. Sort Array By Parity 2

---> Optimal Approach : 

    Time Cmplexity : O(N)
    Space Complexity : O(1)

    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int even = 0;
        int odd = 1;

        while(even < n){
            if(nums[even] % 2 != 0){
                swap(nums[even], nums[odd]);
                odd = odd + 2;
            }else{
                even = even + 2;
            }
        }
        return nums;
    }

*/