#include <iostream>
int main()

{
    int n;
    std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        int num;
        std::cin >> num;
        arr[i] = num;
    }
    int* new_arr = new int[n];
    int num_arr = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                new_arr[num_arr] = (j - i);
                ++num_arr;
                break;
            }
        }
    }
    int MaxLen = arr[0];
    for (int i = 1; i < num_arr; ++i) {
        if (MaxLen < new_arr[i]) {
            MaxLen = new_arr[i];
        }
    }


    std::cout << "Max lenght = " << MaxLen << '\n';
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) {
            for (int j = i; j < n; ++j) {
                sum += abs(arr[j]);
            }
            break;
        }
    }
    std::cout << "Sum of secon null elements = " << sum << '\n';
    delete  (new_arr);
    int* new_sort_arr = new int[n];
    num_arr = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            new_sort_arr[num_arr] = arr[i];
            num_arr++;
         }
    }
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 != 0) {
            new_sort_arr[num_arr] = arr[i];
            num_arr++;
        }
    }
    std::cout << "[ ";
    for (int i = 0; i < n; ++i) {
        std::cout << new_sort_arr[i] << ' ';
    }
    std::cout << "]";
    
    
    delete (arr);
}
