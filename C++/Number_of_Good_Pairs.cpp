/*1512 Number of Good Pairs
  Time Complexity for insertion in map: 0(log n)*/
  
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
     unordered_map<int, int > mp;
        int ans =0;
        int n= nums.size();
        
        for (int i=0; i<n;i++){
           ++ mp [nums [i]];
            
            if(mp[nums[i]]>1)
                ans += mp[nums[i]] -1;
        }
        return ans;
        
    }
};
