

int giaithua(int n){
    //xac dinh buoc dung cua ham de quy
    if (n == 0){
        return 1;
    }
    return giaithua(n-1) * n;
}