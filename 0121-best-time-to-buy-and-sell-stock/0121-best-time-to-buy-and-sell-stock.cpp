class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice= INT_MAX;
        int maxp=0;
        for(auto price : prices){
            if(price < minprice) minprice = price;
            maxp = max(maxp, price-minprice);
        }
        return maxp;
    }
};