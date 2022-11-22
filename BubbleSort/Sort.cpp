//
//  Sort.cpp
//  BubbleSort
//
//  Created by David S on 21/10/2020.
//

#include <stdio.h>
#include <iostream>
#include "Sort.h"
void Sort::BubbleSort(int m_standardArray[], bool hasSwapped,int m_lengthOfArray){
    
    
    
    for (int i=0; i<m_lengthOfArray-1; i++){
        for (int j=0;  j<m_lengthOfArray-i-1; j++){
            
            if(m_standardArray[j]>m_standardArray[j+1])
            {
                temp= m_standardArray[j];
                m_standardArray[j]= m_standardArray[j+1];
                m_standardArray[j+1]= temp;
                hasSwapped=true;
            }
            
        }
        passes++;
        if(!hasSwapped)
        {
            break;
        }
    }
    
}

void Sort::printSortedArray(int m_standardArray[], int m_lengthOfArray){
    
    for (int i=0; i<m_lengthOfArray; i++)
    {
        std::cout<<m_standardArray[i]<<", ";
    }
    
    std::cout<<"Swaps made in the Algo " << passes << std::endl;
}
