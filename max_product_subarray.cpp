int maxProduct(vector<int>& nums) {
        int res = INT_MIN;
        int curr_prod = 1;
        for(auto i: nums){
            curr_prod = i*curr_prod;
            res = max(res, curr_prod);
            if(curr_prod==0)curr_prod =1;
            
        }
        curr_prod = 1;
        
        for(int i = nums.size()-1;i>=0;i--){
            curr_prod *= nums[i];
            res = max(res, curr_prod);
            if(curr_prod==0)curr_prod=1;
        }
        return res;