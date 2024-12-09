/*
Question Name : 2149. Rearrange Array Elements by Sign

Time Complexity : O(N)
Space Complexity : O(N)


    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int pos = 0;
        int neg = 1;

        vector<int>ans(n);

        for(int i = 0; i < n; i++){
            if(nums[i] < 0){
                // Neg number
                ans[neg] = nums[i];
                neg = neg + 2;
            }else{
                ans[pos] = nums[i];
                pos = pos + 2;
            }
        }

        return ans;
    }

*/