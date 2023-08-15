#include <iostream>

int main()
{
    int n, m;
    std::cout << "Enter the number of elements for the first array: ";
    std::cin >> n;

    int arr1[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr1[i];
    }

    std::cout << "Enter the number of elements for the second array: ";
    std::cin >> m;

    int arr2[m];

    for (int i = 0; i < m; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr2[i];
    }

    int arr3[n + m]; // The third array size should accommodate both input arrays.

    for (int i = 0; i < n; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < m; i++) {
        arr3[n + i] = arr2[i]; // The starting index for the second array should be n.
    }

    std::cout << "Merged array: ";
    for (int i = 0; i < n + m; i++) {
        std::cout << arr3[i] << " ";
    }

    // Reverse the merged array arr3
    // int temp;
    // for (int i = 0; i < (n + m) / 2; i++) {
    //     temp = arr3[i];
    //     arr3[i] = arr3[n + m - i - 1];
    //     arr3[n + m - i - 1] = temp;
    // }

    // std::cout << "\nReversed merged array: ";
    // for (int i = 0; i < n + m; i++) {
    //     std::cout << arr3[i] << " ";
    // }

    int c =sizeof(arr3)/sizeof(arr3[0]);
    std::cout<<c;
    for (int i = c-1; i >=0 ; i--) {
        std::cout << arr3[i] << " ";
    }
   
    return 0;
}
