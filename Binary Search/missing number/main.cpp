
/*Complexity O(n^2)*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        bool isFound = false;
    
    for(int i=0 ; i<=nums.size();i++)
    {
     for(int j=0 ; j<nums.size();j++)
     {
         if(nums[j]== i)
         {
             isFound = true;
             break;
         }
            
     }

             if(!isFound) return i ; 
     else isFound = false ;     
     
    }
    return -1;
    }
};

//-----------------------------------------------------------------------------------------
/*Complexity O(n) */
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = n * (n+1) / 2 ; 
        int realSum = 0 ;
        for(int num:nums)
        {
            realSum += num;
        }
        return expectedSum - realSum;
    }
};
//-----------------------------------------------------------------------------------------