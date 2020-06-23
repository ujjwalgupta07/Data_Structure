/*
 * dynamicArray.h
 * --------------
 *  This is a header file for Dynamic Array implementation.
 *  Author: Ujjwal Gupta
 *  Github Profile: https://github.com/ujjwalgupta07
 *  Date: 17 June, 2020
 */

#ifndef _DYNAMICARRAY_H_
#define _DYNAMICARRAY_H_

#include <iostream>

const int INITIALCAPACITY = 2;    ///< Initial Capacity of the DynamicArray

template <class T>
class DynamicArray
{
  private:
    int m_size;      ///< Size of the Dynamic Array
    int m_capacity;  ///< Capacity of the Dynamic Array
    T m_fillData;       ///< Initial filling data while initialization
    T* m_data;          ///< All the elements in the Dynamic Array

  public:

    /**
     * @brief Default Constructor
     */
    DynamicArray();              
    
    /**
     *@brief Constructor with an initial size
     * @param size The initial size of the dynamic array
     */
    DynamicArray(int size);

    /**
     *@brief Constructor with and initial size and initializing value
     * @param size The initial size of the dynamic array
     * @param initialData Initial value to initialize the array with.
     */
    DynamicArray(int size, T initialData);

    /**
     *@brief Destructor
     */
    ~DynamicArray();

    /**
     *@brief   This will remove the last element and will return it.
     */
    T pop();

    /**
     *@brief This function will return the last element of the DynamicArray
     *       and can be also used to set the last element.
     */
    T& back();

    /**
     *@brief This function will return the first element of the DynamicArray
     *       and can be also used to set the first element.
     */
    T& front();

    /**
     *@brief This function will return the element stored at given index and
     *       can be also used to set the value at given index.
     * @param index Index where we need to access the element.
     */
    T& at(int index);

    /**
     * @brief This is another way to access and modify the value at given 
     *        index. This is same as at() function.
     * @param index Index where we need to access the element.
     */
    T& operator[](int index);

    /**
     *@brief This function will remove the element stored at the given index.
     * @param index From where we need to remove the element
     */
    T removeAt(int index);

    /**
     *@brief This fucntion will add an element at last of the DynamicArray
     * @param key The value which has to be added at the last of the
     *        DynamicArray.
     */
    void push_back(T key);

    /**
     *@brief This function will insert a value at given index
     * @param index Index where we need to insert the element
     * @param key Value which has to be inserted
     */
    void insertAt(int index, T key);

    /**
     *@brief This function will return the size of the DynamicArray
     */
    int size();

    /**
     *@brief This function will return the index of an element in the
     *        DynamicArray, if found otherwise it will return -1 
     * @param key Element whose index has to be find
     */
    int indexOf(T key);

    /**
     *@brief This function will return true if DynamicArray is empty else false
     */
    bool is_empty();

    /**
     *@brief This function will remove an element from the DynamicArray if
     *        found and will return true else false.
     * @param key Element which has to be removed
     */
    bool remove(T key);

    /**
     *@brief This will check whether given element is present in the Dynamic
     *        Array and will return true and false accordingly.
     * @param key Element which has to be check whether it is present in the
     *        dynamicArray or not.
     */
    bool contains(T key);


  private:
    /**
     *@brief This function will resize the DynamicArray's capacity.
     */
    void resize();
};


#endif // _DYNAMICARRY_H_
