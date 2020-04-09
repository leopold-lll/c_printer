#pragma once

#include <iostream>
#include <vector>

using std::ostream;
using std::vector;

template<typename T>
ostream & operator<<(ostream & os, const vector<T> & v){
	os << "[";
	if(v.size()>0){
		for(int i=0; i<v.size()-1; i++){
			os << v[i] << ", ";
		}
		os << v[v.size()-1];
	}
	return os << "]";
}