class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // Brute Force Approach


        // int n = gas.size();
        // for(int i = 0 ; i< n ; i++){
        //     if(gas[i] < cost[i]){
        //         continue;
        //     }
        //     int j = (i+1)%n;
        //     int currGas = gas[i] + gas[j] - cost[i];

        //     while(j != i){
        //         if(currGas < cost[j]){
        //             break;
        //         }
        //         int moveNextJ = cost[j];
        //         j = (j+1)%n;
        //         currGas = currGas + gas[j] - moveNextJ;
        //     }
        //     if(j == i){
        //         return i;
        //     }
        // }
        // return -1;

        int totalEarn =0;
        int totalExp = 0;
        int n = cost.size();

        for( int i= 0 ; i< n ; i++ ){
            totalEarn +=gas[i];
            totalExp += cost[i];
        }

        if(totalEarn < totalExp){
            return -1;

        }

        int index =0;
        int total=0;
        for( int i=0 ; i< n ; i++){
            total = total+ gas[i] -cost[i];
            if(total < 0){
                index = i+1;
                total = 0;
            }
        }

        return index;
        
    }
};