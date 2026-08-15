class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        vector<pair<int,int>> v;
        vector<int> ans;

        for(int i=0;i<n;i++){
            mpp[nums[i]]++;

        }
        for(auto it=mpp.begin();it != mpp.end();it++){
            
                v.push_back({it->second,it->first});
            
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;

        
        


        
        
    }
};
