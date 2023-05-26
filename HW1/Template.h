﻿#pragma once

template<class T> 
T power(T &n) 
{
	return n * n;

}

template <class T> 
std::vector<T> power(std::vector<T> & vec) 
{
	for (int i = 0; i < vec.size(); ++i)
	{
		vec[i] = pow(vec[i],2);
	}
	return vec;

}