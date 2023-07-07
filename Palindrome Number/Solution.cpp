/*Runtime
8 ms
Beats
90.38%
Memory
6 MB
Beats
42.28%*/

bool isPalindrome(int x) {
     if(x<0)
     {
         return false;
     }
     int n=x;
     long long b=0;
     while(n>0)
     {
         b=b*10+n%10;
         n/=10;
     }
     if(b==x)
     {
         return true;
     }
     return false;
    }
