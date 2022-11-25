

bool linearExhaustive(int *a, int size, int x){
    for (int i = 0; i < size; i++){
        if (a[i] == x){
            return true;
        }
    }
    return false;
}

bool linearExhaustive1(int *a, int size, int x){
    if(size == 0 && a[size] != x){
        return false;
    }
    if (a[size] == x){
        return true;
    }

    return linearExhaustive1(a, size -1, x);

}

bool LinearSentinel(int *a, int size, int x){
    a[size] = x;
    int i = 0;
    while(a[i] != x){
        i++;
    }
    if (i < size){
        return true;
    }
    return false;
}

bool LinearSentinel1(int *a, int size, int x, int i){
    if (i < size ){
        return true;
    }
    
}
