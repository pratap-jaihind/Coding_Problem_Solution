class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
    
            // Using the divide method to find out the answer;
            // int n = nums.size();
            // int countZero = 0;
            // int productWtZero = 1;
    
    
            // for(int i =0 ; i< n ; i++){
            //     if(nums[i] == 0){
            //         countZero++;
            //     }
            //     else{
            //         productWtZero *=nums[i];
            //     }
            // }
    
            // vector<int> result(n);
            // for( int i = 0 ; i< n ; i++){
            //     if(nums[i] != 0){
            //         if(countZero > 0){
            //             result[i] = 0;
            //         }
            //         else{
            //             result[i] = productWtZero / nums[i];
            //         }
            //     }
            //     else{
            //             if(countZero > 1){
            //                 result[i] = 0;
            //             }
            //             else{
            //                 result[i] = productWtZero;
            //             }
            //         }
            // }
    
            // return result;
    
    
            // Using extra space 
    
            // int n = nums.size();
            // vector<int> left(n);
            // vector<int> right(n);
    
            //  left[0] = 1;
            //  right[n-1] = 1;
    
            // for(int i = 1 ; i< n ; i++){
            //     left[i] = left[i-1] * nums[i-1];
            // }
            // for(int i = n-2 ; i>=0 ; i--){
            //     right[i] = right[i+1] * nums[i+1];
            // }
    
            // vector<int> ans(n);
            // for(int i =0 ; i< n ; i++){
            //     ans[i] = left[i] * right[i];
            // }
            // return ans;
    
    
            //Using constant space or given space 
    
    
            int n  = nums.size();
            vector<int> result(n);
            result[0] = 1;
    
            for(int i =1 ; i< n ;i++){
                result[i] = result[i-1] * nums[i-1];
            }
            int rightProduct = 1;
            for(int i = n-1 ; i>=0 ; i--){
                result[i] = result[i]*rightProduct;
                rightProduct *=nums[i];
            }
    
            return result;
        }
    };