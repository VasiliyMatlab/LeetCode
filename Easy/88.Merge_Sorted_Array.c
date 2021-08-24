void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    if (n == 0)
        return;
    if (m == 0){
        for (int i = 0; i < nums1Size; i++)
            nums1[i] = nums2[i];
        return;
    }
    for (int i = m; i < nums1Size; i++)
        nums1[i] = 1000000000;
    int i =  0, j = 0;
    while (i < nums1Size){
        if (nums1[i] > nums2[j]){
            for (int k = nums1Size-1; k > i; k--)
                nums1[k] = nums1[k-1];
            nums1[i] = nums2[j];
            j++;
        }
        else if ((i != 0) && (nums1[i] < nums1[i-1])){
            nums1[i] = nums2[j];
            j++;
        }
        if (j == nums2Size)
            break;
        i++;
    }
}