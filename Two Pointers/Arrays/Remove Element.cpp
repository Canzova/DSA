/*

Question Name : 27. Remove Element

Time Complexity : O(N)
Space Complexity : O(1)

    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int end = n - 1;
        int start = 0;

        while(start <= end){
            if(nums[start] == val){
                swap(nums[start], nums[end]);
                end = end - 1;
            }else{
                start = start + 1;
            }
        }

        return start;
    }

*/