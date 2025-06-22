class Solution {
public:
    int mySqrt(int x) {
 

       long long start = 0 , end = x , mid;
    long long result = 0 ;
        while(start<=end)
        {
            mid = (start+end)/2;
            result = mid*mid;
            if(x == result)
            return mid;
            else if(x<result)
            end = mid - 1 ;
            else if(x>result)
            start = mid+1;
        }    
        return end;
    }
};
/*
ex:
target = 16
arr = {0,1,2,3,4}
0*0 = 0 
1*1 = 1 
2*2 = 4
3*3 = 9 
4*4 = 16 --> result is 4



*/