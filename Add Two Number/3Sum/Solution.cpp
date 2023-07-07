/*Runtime
1541 ms
Beats
15.4%
Memory
413.8 MB
Beats
5.1%*/

vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int> >v1;
        int left=0;
        int right=nums.size()-1;
        int curr=right-1;
        if(right==2)
        {
            if(nums[0]+nums[1]+nums[2]==0)
            {
                v1.push_back({nums[0],nums[1],nums[2]});
                return v1;
            }
            else
            {
                return {};
            }
        }
        else{
        for (int i = 0; i < nums.size(); i++){
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    v1.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if (sum < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        }
        map<vector<int>,int> mp;
        for(int i=0;i<v1.size();i++)
        {
            if(mp.count(v1[i])<1)
            {
                mp[v1[i]]=1;
            }
            else
            {
                continue;
            }
        }
        v1.erase(v1.begin(),v1.end());
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            v1.push_back(i->first);
        }
        return v1;
    }
