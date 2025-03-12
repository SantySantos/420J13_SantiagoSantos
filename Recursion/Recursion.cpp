#include <iostream> 

int search_for_number(int arr[], int values, int index) -> int
{
    
    if (arr[index] == values)
    {
        return index;
    }
    
    return search_for_number(arr, values, index + 1);
    return 0;
}

int main()
{
    int arr[] {1,2,3,4,5,6,7};
    int value = 6;
    int index = 0;
    int numberFounded  = search_for_number(arr, 6, index);
    std::cout << "Number = "<< value << " Founded at index: "<< numberFounded << '\n';
    return 0;
}
