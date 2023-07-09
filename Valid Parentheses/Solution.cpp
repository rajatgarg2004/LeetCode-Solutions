/*Runtime
0 ms
Beats
100%
Memory
6.4 MB
Beats
9.7%*/

bool isValid(string s) {
        stack<char> s1;
        if(s[0]==')' ||s[0]==']' || s[0]=='}')
        {
            return false;
        }
        bool flag=true;
        s1.push(s[0]);
        for(int i=1;i<s.length();i++)
        {
            if(s1.empty())
            {
                if(s[i]=='(' ||s[i]=='[' || s[i]=='{')
            {
            s1.push(s[i]);
            continue;
            }
            else
            {
                flag=false;
                break;
            }
            }

            if(s1.top()=='(' && s[i]==')' ||s1.top()=='[' && s[i]==']' ||s1.top()=='{' && s[i]=='}')
            {
                s1.pop();
            }
            else if(s1.top()=='(' && (s[i]=='(' || s[i]== '{' || s[i]=='[') ||s1.top()=='[' && (s[i]=='(' || s[i]== '{' || s[i]=='[') ||s1.top()=='{' &&(s[i]=='(' || s[i]== '{' || s[i]=='['))
            {
                s1.push(s[i]);
            }
            else if(s1.top()=='(' && s[i]!=')' ||s1.top()=='[' && s[i]!=']' ||s1.top()=='{' && s[i]!='}')
            {
                flag= false;
                break;
            }

        }
        if(!s1.empty())
        {
            flag =false;
        }
        return flag;
    }
