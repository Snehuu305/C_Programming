int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int buyChoco(int* prices, int pricesSize, int money) {
    qsort(prices, pricesSize, sizeof(int), cmp);  // step 1: sort so cheapest 2 are at index 0 and 1
    int cost = prices[0] + prices[1];             // step 2: cost of cheapest pair
    
    if (cost <= money) {                          // step 3: check affordability
        return money - cost;
    } else {
        return money;
    }
}