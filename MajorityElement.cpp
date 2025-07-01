class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            // map<int , int> mp;
            // int n = nums.size();
            // for( int i =0 ; i < nums.size() ; i++){
            //     mp[nums[i]]++;
            // }
            // for(auto & it : mp){
            //     if(it.second  > (n/2)){
            //         return it.first;
            //     }
            // }
    
            // return -1;
    
            // Moore Voting algorithem 
    
            int cnt =0;
            int ele;
            for(int i = 0 ; i < nums.size() ; i++){
                if(cnt ==0 ){
                    cnt = 1;
                    ele = nums[i];
                }
                else if(ele == nums[i]){
                    cnt++;
                }
                else{
                    cnt--;
                }
    
            }
            int cnt1=0;
            int n = nums.size();
            for( int i =0 ; i< n ; i++){
                if(ele == nums[i]){
                    cnt1++;
                }
            }
    
            if(cnt1 > n/2){
                return ele;
            }
            else return -1;
    
            
    
        }
    };