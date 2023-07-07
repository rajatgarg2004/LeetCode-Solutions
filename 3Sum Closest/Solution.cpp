/*Runtime
140 ms
Beats
6.21%
Memory
10.2 MB
Beats
16.43%*/

int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        int left=0;
        int right=nums.size()-1;
        int curr=right-1;
        int sum1;
        if(right==2)
        {
            return nums[0]+nums[1]+nums[2];
        }
        else{
        for (int i = 0; i < nums.size(); i++){
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (abs(sum-target)<diff) {
                    cout<<diff<<" "<<sum<<endl;
                    diff=abs(sum-target);
                    sum1=sum;
                }
                if (sum == target) {
                    return sum;
                } else if(sum<target){
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        }
        return sum1;
    }
