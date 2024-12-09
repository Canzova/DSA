/*

Question Name : 905. Sort Array By Parity


---> Better than Brute Force

    Time Cmplexity : O(N)
    Space Complexity : O(N)

    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();

        int odd = n-1;
        int even = 0;
        vector<int>ans(n);

        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0){
                ans[even++] = nums[i];
            }else{
                ans[odd--] = nums[i];
            }
        }
        return ans;
    }


---> Optimal Approach : 

    Time Cmplexity : O(N)
    Space Complexity : O(1)

    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();

        int odd = n-1;
        int even = 0;

        while(even <= odd){
            if(nums[even] % 2 != 0){
                // Got an odd number at even place
                swap(nums[even], nums[odd]);
                odd--;
            }
            else
            {
                even++;
            }
            
        }
        return nums;
    }

*/