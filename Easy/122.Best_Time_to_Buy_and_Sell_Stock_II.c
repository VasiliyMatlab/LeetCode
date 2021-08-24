int maxProfit(int* prices, int pricesSize){
    if (pricesSize == 1)
        return 0;
    int profit = 0, min = 10000;
    for (int i = 0; i < pricesSize; i++){
        if (i == 0){
            if (prices[0] < prices[1])
                min = prices[0];
            continue;
        }
        if (i == pricesSize-1){
            if (min != 10000)
                profit += prices[i] - min;
            continue;
        }
        if ((prices[i] <= prices[i-1]) && (prices[i] < prices[i+1])){
            min = prices[i];
            continue;
        }
        if ((prices[i] > prices[i-1]) && (prices[i] >= prices[i+1])){
            profit += prices[i] - min;
            min = 10000;
        }
    }
    return profit;
}