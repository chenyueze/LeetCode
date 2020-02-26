int num(int n){
    int ans = 0;
    while(n){
        ans += pow(n % 10, 2);
        n /= 10;
    }
    return ans;
}

bool isHappy(int n){
    int p = n, q = n;
    do{
        p = num(p);
        q = num(q);
        q = num(q);
    }while(p != q);
    return p == 1;
}