int inserare (int &n) {
    
    int x, v[15], k = 1;
    x = n;
    while (x)
    {
        v[k++] = x % 10;
        x = x / 10;
    }
    for (int i = k - 1; i >= 2; i--)
    {
        x = x * 10 + v[i];
        x = x * 10 + abs(v[i] - v[i-1]);
    }
    x = x * 10 + v[1];
    n = x;
    return n;
}