//
//  main.cpp
//  BubbleSort
//
//  Created by David S on 21/10/2020.
//

#include <iostream>
#include "Sort.h"
int main() {
    // Test 1 Numbers: 6,9,3,2,1,8,5,4
    // Test 2 Numbers:
    // Test 3 Numbers:
    
    Sort sort;
    int arraylength;
    
    /*std::cout<<"How many elements in the Array? ";
    std::cin>> sizeOfArray;
    count=sizeOfArray;*/
    
    int searchArray[8]{6,9,3,2,1,8,5,4};
    /*for (int i=0; i<sizeOfArray; i++)
    {
        std::cout<<"Enter Number into Array, You have more attempts "<<count<<std::endl;
        std::cin>>enterNum;
        enterNum=searchArray[i];
        count--;
    }*/
    
    arraylength=*(&searchArray+1)-searchArray;
    std::cout<< "Original Unsorted Array: "<<std::endl;
    sort.printSortedArray(searchArray, arraylength);
    std::cout<<" "<<std::endl;
    
    
    std::cout<< "Sorted Array: "<<std::endl;
    sort.BubbleSort(searchArray, false, arraylength);
    sort.printSortedArray(searchArray, arraylength);
    
    return 0;
}
