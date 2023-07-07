/*Runtime
4 ms
Beats
63.16%
Memory
7.1 MB
Beats
50.56%*/

int myAtoi(string s) {
        string s1;
        int counter=0;
        bool flag=false;
        if(s[counter]==' ')
        {
            while(s[counter]==' ')
            {
                counter++;
            }
        }
        if(s[counter]=='-')
        {
            flag=true;
            counter++;
        }
        else if(s[counter]=='+')
        {
            counter++;
        }
        for(counter;counter<s.length();counter++)
        {
            if(s[counter]<='9' && s[counter]>='0')
            {
                s1+=s[counter];
            }
            else 
            {
                break;
            }
        }
        long long int a=0;
        for(int i=0;i<s1.length();i++)
        {
            if(a>pow(2,31)-1)
            {
                a=pow(2,31)-1;
                break;
            }
            else if(a<-pow(2,31))
            {
                a=-pow(2,31);
                break;
            }
            if(flag==false)
            {a=a*10+int(s1[i]-48);}
            else
            {
                a=a*10-int(s1[i]-48);;
            }
        }
        if(a>pow(2,31)-1)
            {
                a=pow(2,31)-1;
            }
        else if(a<-pow(2,31))
            {
                a=-pow(2,31);
            }
        return a;
    }
