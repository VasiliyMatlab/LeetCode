int peakIndexInMountainArray(int* arr, int arrSize){
    for (int i = 0; i < arrSize-1; i++) {
        if (!i && arr[0] > arr[1])
            return 0;
        if (arr[i] > arr[i+1])
            return i;
    }
    return arrSize;
}