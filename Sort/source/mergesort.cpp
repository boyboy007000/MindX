

void merge( int *arr, int *leftarr, int *rightarr, int sizeleft, int sizeright){
    int x = 0, y= 0, z =0;

    while (x < sizeleft && y < sizeright)
    {
        if (leftarr[x] <= rightarr[y]){
            arr[z] = leftarr[x];
            x++;
        }
        else{
            arr[z] = rightarr[y];
            y++;
        }
        z++;
    }

    while (x < sizeleft )
    {
         arr[z] = leftarr[x];
         x++;
         z++;
    }

        while (y < sizeright )
    {
         arr[z] = rightarr[y];
         y++;
         z++;
    }    
}

void mergesort(int *arr, int size){
    if (size <=1){
        return;
    }
    int midPoint = size /2;
    int left [midPoint];
    int right  [size - midPoint];
    for (int i = 0; i < midPoint; i++){
        left[i] = arr[i];
    }

    for (int i = midPoint; i < size; i++){
        right[i - midPoint] = arr[i];
    }

    mergesort(left, midPoint);
    mergesort(right, size - midPoint);
    int result[size];
    merge(arr, left, right, midPoint, size - midPoint);

}