/*Runtime
198 ms
Beats
45.90%
Memory
10.2 MB
Beats
75.21%*/

vector<int> twoSum(vector<int>& arr, int target) {
        vector <int> v;
        v.push_back(-1);
        v.push_back(-1);
        for(int i=0;i<arr.size()-1;i++)
        {
            int temp=target-arr[i];
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[j]==temp)
                {
                    v[0]=i;
                    v[1]=j;
                    break;
                }
            }
            if(v[0]!=-1)
            {
                break;
            }
        }
        return v;
    }
