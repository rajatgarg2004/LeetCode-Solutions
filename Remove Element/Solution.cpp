/*Runtime
0 ms
Beats
100%
Memory
8.7 MB
Beats
49.7%*/

int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                for(int j=i;j<nums.size()-1;j++)
                {
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
                nums.pop_back();
                i--;
            }

        }
        return nums.size();
    }
