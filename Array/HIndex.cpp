class Solution {
    public:
        int hIndex(vector<int>& citations) {
            // Thoda ajib sa Question hai bhai 
    
            int n = citations.size();
            sort(citations.rbegin() , citations.rend());
    
            int h = 0 ;
            while( h < n && citations[h] > h){
                h++;
            }
            return h;
            
        }
    };