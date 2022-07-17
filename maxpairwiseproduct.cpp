#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(const std::vector<int> &numbers)
{
    long long max_product = 0;
    int n = numbers.size();
    int max_ind1 = -1;
    for (int i = 0; i < n; ++i)
    {
        if ((max_ind1 == -1) || (numbers[i] > numbers[max_ind1]))
            max_ind1 = i;
    }
    int max_ind2 = -1;
    for (int j = 0; j < n; ++j)
    {
        if ((max_ind2 == -1) || (numbers[j] > numbers[max_ind2]))
            max_ind2 = j;
    }

    max_product = numbers[max_ind1] * numbers[max_ind2];

    return max_product;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> numbers[i];
    }

    long long result = MaxPairwiseProduct(numbers);
    std::cout << result << "\n";
    return 0;
}
