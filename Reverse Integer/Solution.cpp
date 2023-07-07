/*Runtime
0 ms
Beats
100%
Memory
6 MB
Beats
15.90%*/

int reverse(int x) {
        long long int y=0;
        int z=abs(x);    
        while(z>0)
        {
            y=y*10+z%10;
            z/=10;
        }
        if(x<0 && y>pow(2,31)-1)
        {
            return 0;
        }
        else if(x<0 && y<=pow(2,31)-1)
        {
            return -y;
        }
        else if(x>=0 && y<=pow(2,31)-1)
        {
            return y;
        }
        else 
        {
            return 0;
        }
    }
