class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            // set<int>  st;
            // for( int i =0 ; i< nums.size() ; i++){
            //     st.insert(nums[i]);
            // }
            // int k = st.size();
            // int j = 0 ; 
            // for(auto& it : st){
            //     nums[j++] = it;
            // }
            // return k;
    
    
            // Intution ->
            // after oth index element will be different  
            int j = 0;
            for(int i =1 ; i <nums.size() ; i++){
                if(nums[j] != nums[i]){
                    j++;
                    nums[j] = nums[i];
                }
            }
            return j+1;
        }
    };