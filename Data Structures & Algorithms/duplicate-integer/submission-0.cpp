class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int key=nums[i];

            for(int j=i+1;j<n;j++){
                if(nums[j]==key){
                    return true;
                }

            }
        }
        return false;
        
    }
};