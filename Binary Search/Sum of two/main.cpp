class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
         
        for(int i=0 ; i<numbers.size();i++)
        {
            int st=i , end=numbers.size()-1 , mid;
            int smaller = numbers[i];
            while(st<end)
            {
                 mid = (st+end+1)/2;
                if(smaller+numbers[mid]<= target) st=mid;
                else end = mid-1;
            }
            if(smaller+numbers[st]==target) return{i+1,st+1};
            
        }
        return {-1,-1};
    }
};