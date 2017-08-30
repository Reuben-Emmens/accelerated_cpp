#ifndef GUARD_median_h
#define GUARD_median_h

#include <algorithm>
#include <vector>

using namespace std;

// generic version of the median function
template<class T>
T median(vector<T> v)
{
  typedef typename vector<T>::size_type vec_sz;

  vec_sz size = v.size();

  if(size == 0)
    throw domain_error("median of an empty vectoy");

  sort(v.begin(), v.end());

  vec_sz mid = size / 2;

  return size % 2 == 0 ? (v[mid] + v[mid-1])/2 : v[mid];
}

#endif