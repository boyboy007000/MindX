

void bubleSort(int *a, int size){
    bool flag_swap = false;
    for (int i =0; i< size; i++){
        for (int j = i+1 ; j <size ; j++){
            if (a[i] > a[j]){
                swap(a[i], a[j]);
                flag_swap = true;
            }
        }
        if (!flag_swap){
            break;
        }
        size--;
    }
}

// doubleBbleSort, de quy bubleSort