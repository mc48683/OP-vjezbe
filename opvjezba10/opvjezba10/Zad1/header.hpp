#pragma once
template<typename T>
void sort(T arr[], int n);
template<>
void sort<char>(char arr[], int n);
#include "implementation.cpp"