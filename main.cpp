/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: cplummer
 *
 * Created on September 11, 2017, 1:32 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = (sizeof(vector) / sizeof(vector[0])) * 8;
    int *p = vector;
    int smallest = *p;
    
    while(*p < n)
    {
        if(smallest > *p)
        {
             smallest = *p;
             
        }
        p++;
    }
    cout << smallest;
    
    return 0;
}

