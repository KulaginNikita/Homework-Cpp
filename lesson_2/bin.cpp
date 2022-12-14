#include <iostream>
#include <vector>

void swap(std::vector<int> &arr,int ind1,int ind2){
    int alpha = arr[ind1];
    arr[ind1] = arr[ind2];
    arr[ind2] = alpha;
}
void intersectionSort(std::vector<int> &arr ,int length){
    // Алгоритм сортировки
    for(int i = 1; i<length; i++){
        for(int k = i; k>0; k--){
            if(arr[k]<arr[k-1]){
                swap(arr,k,k-1);
            }
        }
    }
}
void arrayOut(std::vector<int> &arr,int size){
    for(int i = 0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
}

int binarySearch(std::vector<int> &arr, int size,int element){
    // Алгоритм бинарного поиска
    int left = 0;
    int right = size-1;
    while(left<=right){
        int midIndex = (left+right)/2;
        if(arr[midIndex] == element)
            return midIndex;
        else if(arr[midIndex] < element)
            left = midIndex+1;
        else
            right = midIndex-1;
    }
    return -1;
}


int main(){
    int size;
    std::vector<int> array;
    int element; // Искомый элемент бинарного поиска
    int element_index; // Индекс искомого элемента бинарного поиска

    std::cout<<"Enter the array size: ";
    std::cin>>size;
    std::cout<<"Array elements:"<<std::endl;

    for(int i = 0;i<size;i++){
        int value;
        std::cout<<std::endl<<"Enter an element "<<i<<": ";
        std::cin>>value;
        array.push_back(value);
    }
    std::cout<<std::endl<<"Sorted array:"<<std::endl;
    intersectionSort(array,size);
    arrayOut(array,size);

    std::cout<<std::endl<<"Seaching element: ";
    std::cin>>element;

    int elementArrIndex = binarySearch(array,size,element);
    if(elementArrIndex != -1)
        std::cout << "Found " << element << " at index " << elementArrIndex << std::endl;
    else
        std::cout<<std::endl<<"There is no such element" << std::endl;

    return 0;
}

