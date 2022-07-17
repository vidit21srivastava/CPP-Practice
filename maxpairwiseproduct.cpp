#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(const std::vector<long long> &numbers)
{
    long long max_product = 0;
    long long n = numbers.size();
    long long max_ind1 = -1;
    for (long long i = 0; i < n; ++i)
    {
        if ((max_ind1 == -1) || (numbers[i] > numbers[max_ind1]))
            max_ind1 = i;
    }
    long long max_ind2 = -1;
    for (long long j = 0; j < n; ++j)
    {
        if ((j != max_ind1) && ((max_ind2 == -1) || (numbers[j] > numbers[max_ind2])))
            max_ind2 = j;
    }

    max_product = numbers[max_ind1] * numbers[max_ind2];

    return max_product;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<long long> numbers(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> numbers[i];
    }

    long long result = MaxPairwiseProduct(numbers);
    std::cout << result << "\n";
    return 0;
}
