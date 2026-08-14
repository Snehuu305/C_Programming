int** intervalIntersection(int** firstList, int firstListSize, int* firstListColSize,
                            int** secondList, int secondListSize, int* secondListColSize,
                            int* returnSize, int** returnColumnSizes) {
    int maxResults = firstListSize + secondListSize;
    int** result = (int**)malloc(maxResults * sizeof(int*));
    *returnColumnSizes = (int*)malloc(maxResults * sizeof(int));

    int i = 0, j = 0, count = 0;

    while (i < firstListSize && j < secondListSize) {
        int start = (firstList[i][0] > secondList[j][0]) ? firstList[i][0] : secondList[j][0];
        int end = (firstList[i][1] < secondList[j][1]) ? firstList[i][1] : secondList[j][1];

        if (start <= end) {
            result[count] = (int*)malloc(2 * sizeof(int));
            result[count][0] = start;
            result[count][1] = end;
            (*returnColumnSizes)[count] = 2;
            count++;
        }

        if (firstList[i][1] < secondList[j][1]) {
            i++;
        } else {
            j++;
        }
    }

    *returnSize = count;
    return result;
}