/*Runtime
0 ms
Beats
100%
Memory
6.4 MB
Beats
85.34%*/

string s(char a)
{
    string s1;
    if(a=='2')
    {
        s1+="abc";
    }
    else if(a=='3')
    {
        s1+="def";
    }
    else if(a=='4')
    {
        s1+="ghi";
    }
    else if(a=='5')
    {
        s1+="jkl";
    }
    else if(a=='6')
    {
        s1+="mno";
    }
    else if(a=='7')
    {
        s1+="pqrs";
    }
    else if(a=='8')
    {
        s1+="tuv";
    }
    else
    {
        s1+="wxyz";
    }
    return s1;
}
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> v1;
        vector<string>v2;
        if(digits.length()==0)
        return v2;
        int len = digits.length();
        cout<<len<<endl;
        for(int i=0;i<len;i++)
        {
            v1.push_back(s(digits[i]));
        }
        if(len==0)
        {
            return v2;
        }
        else if(len==1)
        {
            string a;
            for(int i=0;i<v1[0].length();i++)
            {
                
                a+=v1[0][i];
                v2.push_back(a);
                a.erase(0,1);
                cout<<v2[i]<<" ";
            }
        }
        else if(len==2)
        {
            string a;
            int alpha=0;
            for(int i=0;i<v1[0].length();i++)
            {
                a+=v1[0][i];
                for(int j=0;j<v1[1].length();j++)
                {
                    a+=v1[1][j];
                    v2.push_back(a);
                    a.erase(1,1);
                    cout<<v2[alpha]<<" ";
                    alpha++;
                }
                a.erase(0,1);
            }
        }
        else if(len==3)
        {
            for(int i=0;i<v1[0].length();i++)
            {
                string a;
                a+=v1[0][i];
                for(int j=0;j<v1[1].length();j++)
                {
                    a+=v1[1][j];
                    for(int k = 0 ;k<v1[2].length();k++)
                    {
                        a+=v1[2][k];
                        v2.push_back(a);
                        a.erase(2,1);
                    }
                    a.erase(1,1);
                }
                a.erase(0,1);
            }
        }
        else
        {
            string a;
            for(int i=0;i<v1[0].length();i++)
            {
                
                a+=v1[0][i];
                for(int j=0;j<v1[1].length();j++)
                {
                    a+=v1[1][j];
                    for(int k = 0 ;k<v1[2].length();k++)
                    {
                        a+=v1[2][k];
                        for(int h = 0 ;h<v1[3].length();h++)
                        {
                            a+=v1[3][h];
                            v2.push_back(a);
                            a.erase(3,1);
                        }
                        a.erase(2,1);
                    }
                    a.erase(1,1);
                }
                a.erase(0,1);
            }
        }
        return v2;
        
    }
};
