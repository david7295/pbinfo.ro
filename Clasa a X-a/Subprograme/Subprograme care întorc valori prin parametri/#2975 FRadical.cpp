void FRadical(int n, int &x, int &y)
{
    x = 1;
    y = 1;
    int divizor = 2;
    while(n > 1)
    {
        int exponent = 0;
        while(n % divizor == 0)
        {
            exponent ++;
            n = n / divizor;
        }
        if(exponent)
        {
            if(exponent % 2 == 0)
                x = x * pow(divizor, exponent / 2);
            else
            {
                y = y * divizor;
                exponent--;
                if(exponent)
                    x = x * pow(divizor, exponent / 2);
            }
        }
        divizor ++;
    }
}