/*
 * dynamicArray.cpp
 * ---------------
 *  Author: Ujjwal Gupta
 *  Github Profile: https://github.com/ujjwalgupta07
 *  Date: 17 June, 2020
 */

#include <cstdlib>          ///< For Calloc, malloc, realloc, free
#include <stdexcept>        ///< For error handling
#include "dynamicArray.h"

#define RESIZE_FACTOR 2     ///<  Resizing Factor for capacity of DynamicArray

template <class T>
DynamicArray<T>::DynamicArray()
{
  m_capacity = INITIALCAPACITY;
  m_size = 0;
  m_data = (T*)calloc(m_capacity, sizeof(*m_data));
  if(!m_data)
    throw std::bad_alloc();
}

template <class T>
DynamicArray<T>::DynamicArray(int size)
{
  m_capacity = size;
  m_size = size;
  m_data = (T*)calloc(m_capacity, sizeof(*m_data));
  if(!m_data)
    throw std::bad_alloc();
}

template <class T>
DynamicArray<T>::DynamicArray(int size, T initialData)
{
  m_capacity = size;
  m_size = size;
  m_data = (T*)calloc(m_capacity, sizeof(*m_data));
  if(!m_data)
    throw std::bad_alloc();

  for(int i = 0; i < size; i++)
    *(m_data + i) = initialData;
}

template <class T>
DynamicArray<T>::~DynamicArray()
{
  free(m_data);
}

template <class T>
T DynamicArray<T>::pop()
{
  return *(m_data + --m_size);
}

template <class T>
T& DynamicArray<T>::back()
{
  return *(m_data + m_size - 1);
}

template <class T>
T& DynamicArray<T>::front()
{
  return *m_data;
}

template <class T>
T& DynamicArray<T>::at(int index)
{
  if(index >= m_size || index < 0)
    throw std::out_of_range("Trying to access out of range");
  return *(m_data + index);
}

template <class T>
T& DynamicArray<T>::operator[](int index)
{
  return at(index);
}

template <class T>
T DynamicArray<T>::removeAt(int index)
{
  if(index >= m_size || index < 0)
    throw std::out_of_range("Trying to access out of range");

  T returnElement = *(m_data + index);

  for(int i = index; i < m_size - 1; i++)
    *(m_data + i) = *(m_data + i + 1);
  m_size--;

  return returnElement;
}

template <class T>
void DynamicArray<T>::push_back(T key)
{
  if(m_size + 1 > m_capacity)
    resize();
  *(m_data + m_size++) = key;
}

template <class T>
void DynamicArray<T>::insertAt(int index, T key)
{
  if(index > m_size || index < 0)
    throw std::out_of_range("Trying to access out of range");
  
  if(m_size + 1 > m_capacity)
    resize();

  for(int i = m_size; i > index; i--)
    *(m_data + i) = *(m_data + i - 1);
  *(m_data + index) = key;
  m_size++;
}

template <class T>
int DynamicArray<T>::size()
{
  return m_size;
}

template <class T>
int DynamicArray<T>::indexOf(T key)
{
  for(int i = 0; i < m_size; i++)
  {
    if(*(m_data + i) == key)
      return i;
  }
  return -1;
}

template <class T>
bool DynamicArray<T>::is_empty()
{
  return m_size == 0;
}

template <class T>
bool DynamicArray<T>::remove(T key)
{
  int index = indexOf(key);
  if(index == -1) return false;
  removeAt(index);
  return true;
}

template <class T>
bool DynamicArray<T>::contains(T key)
{
  return indexOf(key) != -1;
}

template <class T>
void DynamicArray<T>::resize()
{
  m_capacity *= RESIZE_FACTOR;
  m_data = (T*)realloc(m_data, sizeof(*m_data) * m_capacity);
  if(!m_data)
    throw std::bad_alloc();
}


template class DynamicArray<int>;
template class DynamicArray<std::string>;
template class DynamicArray<float>;
