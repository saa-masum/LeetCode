#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();
        for(int i=1; i<n; i++){
            if(prices[i] > prices[i-1]){
                profit += prices[i] - prices[i-1];
            }
        }
        return profit;
    }
};

int main(){
    Solution sol;
    int n;
    cin >> n;
    vector<int> prices;
    for(int i=0; i<n; i++){
        int in;
        cin >> in;
        prices.push_back(in);
    }
    
    int profit = sol.maxProfit(prices);
    cout << profit << endl;
}