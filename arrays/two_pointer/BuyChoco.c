int cmp(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int buyChoco(int* prices, int pricesSize, int money) {
    qsort(prices, pricesSize, sizeof(int), cmp);  
    int cost = prices[0] + prices[1];            
    
    if (cost <= money) {                          
        return money - cost;
    } else {
        return money;
    }
}
