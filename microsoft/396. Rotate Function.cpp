class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int sum_num=0;
        int sum_numK=0;
        // int max_sum=0;
        for(int i=0;i<n;i++){
            sum_num+=nums[i];
        }
        int max_sum=INT_MIN;
        for(int i=0;i<n;i++){
            sum_numK+=nums[i]*i;
        }
        max_sum=sum_numK;
        int k=n-1;
        for(int i=1;i<n;i++){
            sum_numK=sum_numK+sum_num-(n * nums[k]);
            k--;
            if(sum_numK>max_sum)
                max_sum=sum_numK;
        }
        return max_sum;
    }
};