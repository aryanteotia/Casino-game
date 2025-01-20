include <iostream>

#define N 40

void sum(int* p, int n, int d[])
{
    int i;
    *p = 0;
    for(i = 0; i < n; ++i)
        *p = *p + d[i];
}

int main()
{
    int i;
    int accum = 0;
    int data[N];
    for(i = 0; i < N; ++i)
        data[i] = i;
    sum(&accum, N, data);
    std::cout << "sum is " << accum << std::endl;
    return 0;
}
