#pragma once

#include <iostream>
#include <iomanip>

using namespace std;

template <typename t> 
void printMtx(t* A, int n, int width){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
      cout<<setfill(' ')<<defaultfloat<<setw(width)<<setprecision(1)<<A[n*i+j];
		}
		cout<<endl;
	}
}
