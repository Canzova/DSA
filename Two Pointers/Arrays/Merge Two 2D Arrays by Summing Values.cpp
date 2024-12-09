/*

Question Name : 2570. Merge Two 2D Arrays by Summing Values

Time complexity : O(min (n, m)) + O(max(n, m)) == O(N + M);
Space complexity : O(1);

vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
    vector<vector<int>>ans;
    int n = nums1.size();
    int m = nums2.size();

    int i = 0;
    int j = 0;

    while(i < n && j < m){
        if(nums1[i][0] < nums2[j][0]){
            ans.push_back(nums1[i]);
            i++;
        }else if(nums1[i][0] > nums2[j][0]){
            ans.push_back(nums2[j]);
            j++;
        }else{
            ans.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
            i++;
            j++;
        }
    }

    while(i < n){
        ans.push_back(nums1[i]);
        i++;            
    }

    while(j < m){
        ans.push_back(nums2[j]);
        j++;            
    }

    return ans;

}

*/