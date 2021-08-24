int maxProfit(int* prices, int pricesSize){
    int minprice = 10000;
    int profit = 0;
    for (int i = 0; i < pricesSize; i++){
        if (prices[i] < minprice)
            minprice = prices[i];
        else if (prices[i] - minprice > profit)
            profit = prices[i] - minprice;
    }
    return profit;
}