class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero_count = 0;
        int n = nums.size();

        for(auto it:nums){
            if(it==0) zero_count++;
        }

        vector<int>a(nums.size(),0);

        if(zero_count>1){
            return a;
        }



        if(zero_count==1){
            long long mul = 1;
            for(auto it:nums){
                if(it!=0) mul*=it;
            }


             for(int i=0;i<n;i++){
                if(nums[i]==0) a[i] = (int)mul;
             }
        }
           
            long long mul = 1;
            for(auto it:nums){
                 mul*=it;
            }

            for(int i=0;i<n;i++){
             if(nums[i]!=0) a[i] = mul/(nums[i]);
            }

            return a;

    }
};