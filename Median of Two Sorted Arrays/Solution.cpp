/*Runtime
104 ms
Beats
5.17%
Memory
90.3 MB
Beats
5.64%*/

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<float>v;
        int counter1=0;
        int counter2=0;
        int s1=nums1.size();
        int s2=nums2.size();
        while(counter1!=s1 || counter2!=s2)
        {
            if(counter1==s1)
            {
                while(counter2!=s2)
                {
                    v.push_back(nums2[counter2]);
                    counter2++;
                }
                break;
            }
            else if(counter2==s2)
            {
                while(counter1!=s1)
                {v.push_back(nums1[counter1]);
                counter1++;}
                break;
            }
            if(nums1[counter1]<nums2[counter2])
            {
                v.push_back(nums1[counter1]);
                counter1++;
            }

            else if(nums1[counter1]>nums2[counter2])
            {
                v.push_back(nums2[counter2]);
                counter2++;
            }
            else
            {
                v.push_back(nums1[counter1]);
                counter1++;
            }
        }
       
        s1=v.size();
        for(int i=0;i<s1;i++)
        {
            cout<<v[i]<<" "; 
        }
        if(s1%2==0)
        {
            return (v[s1/2]+v[s1/2-1])/2;
        }
        else
        {
            return v[s1/2];
        }
    }
