class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mapCount;
        
        for( int i =0; i < nums.size(); i++)
        {
            if(mapCount[nums[i]])
            {
                return true;
            }
            else
            {
                mapCount[nums[i]]++;
            }
        }
        return false;
        
    }
};