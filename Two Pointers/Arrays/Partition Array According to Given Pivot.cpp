/*

Question Statement : 2161. Partition Array According to Given Pivot

Time Complexity : O(2N)
Space Complexity : O(N)

    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>less, equal, greater, ans;

        for(auto ele : nums){
            if(ele > pivot) greater.push_back(ele);
            else if(ele < pivot) less.push_back(ele);
            else equal.push_back(ele);
        }

        for(auto ele : less) ans.push_back(ele);
        for(auto ele : equal) ans.push_back(ele);
        for(auto ele : greater) ans.push_back(ele);

        return ans;
    }


*/