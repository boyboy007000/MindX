

bool BinarySearch(int *a, int size, int x){
    int left = 0, right = size -1;
    int mid;
    while (left <= right){
        mid = (left + right)/2;
        if (a[mid] == x){
            return true;
        }
        else{
            if (a[mid] > x){
                right = mid -1;
            }
            else{
                left = mid +1;
            }
        }
    }
    return false;
}

int BinarySearch(int *a, int left, int right, int x){
    if (left > right){
        return;
    }

    else{
        int mid = (left + right) /2;
        if (x == mid){
            return mid;
        }

        else if (x > a[mid]){
            return BinarySearch(a, mid +1, right, x);
        }
        else{
            return BinarySearch(a, left, mid - 1, x);
        }

    }


}