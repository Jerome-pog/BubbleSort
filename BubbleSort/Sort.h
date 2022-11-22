//
//  Sort.h
//  BubbleSort
//
//  Created by David S on 21/10/2020.
//

#ifndef Sort_h
#define Sort_h
class Sort{
private:
    int temp;
    int passes{0};
    int m_lengthOfArray;
    int m_standardArray[];
public:
    void BubbleSort(int m_standardArray[], bool hasSwapped, int m_lengthOfArray);
    void printSortedArray(int m_standardArray[],int m_lengthOfArray);
    
};

#endif /* Sort_h */
