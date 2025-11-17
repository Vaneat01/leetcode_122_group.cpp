#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        int maxProfit(vector<int>& prices) {    //create a vector that stores the stocks
            int max=0;  //initialize max profit at 0
            int start = prices[0];  //start at index 0
            int len = prices.size();    //set length to be the number of elements in the vector
            for(int i=1;i<len;i++){ //traverse through the vector
                if (start < prices[i]){ //if the current stock we own is < the stock at current i
                    max += prices[i] - start;   //make profit->store in max
                }
                start = prices[i];  //start new, and next element becomes current stock
            }
            return max;
        }
};


//[7, 1, 5, 3, 6, 4]
