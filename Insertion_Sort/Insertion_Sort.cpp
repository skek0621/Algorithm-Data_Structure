//
//  Insertion_Sort.cpp
//  Algorithm_2018
//
//  Created by Cha Hyun Min on 2019. 3. 22..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int array[12] = {1,10,5,8,7,6,4,3,2,9,14,12};
    
    for(i=0; i<12; i++){
        j=i;
        while (array[j] < array[j-1]) {
            swap(array[j], array[j-1]);
            j--;
        }
    }
    
    for(i=0; i<12; i++) cout<<array[i]<<" ";
    
    return 0;
}
