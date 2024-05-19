int* twoSum(int* ptr, int size, int target, int* returnSize) {
     int sum;
      int *ra = (int*)malloc(sizeof(int)*2); 
     *returnSize=2;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            sum = *(ptr + i) + *(ptr + j);
            if (sum == target) {
                // printf("true ho rahi");
                ra[0]=i;
                ra[1]=j;
            }
        }
    }
    return ra;
}
