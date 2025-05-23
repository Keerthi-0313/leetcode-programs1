class Solution {
    public int maxProduct(int n) {
       int a=0;
    int b=0;
    while(n > 0)
    {
       int val = n % 10;
        n = n / 10;
        if(a < val)
        {
        b = a;
        a = val;
        }
        else if(b<val)
        {
            b = val;
        }
    } 
    return a*b; 
    }
}