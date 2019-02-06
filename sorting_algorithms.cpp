/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <time.h>
#include "sorting_algorithms.h"
#include <stdlib.h>


void init_random(int *array, unsigned long length){
  srandom(time(NULL));
	for (unsigned long i = 0; i < length; i++)
		array[i] = random();
}

void bubble_sort(int *array, unsigned long length){
  bool isSwapped = false;
  do{
    isSwapped = false;
    for(unsigned long i = 0; i < length-1; i++){
      if(array[i] > array[i+1]){
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        isSwapped = true;
      }
    }
  }while(isSwapped);
}

void insertion_sort(int *array, unsigned long length){
  int temp;
  for (int i = 0; i < length; i++) {
    temp = i;
    while(temp > 0 && array[temp - 1] > array[temp]){
      int temp2 = array[i];
      array[i] = array[i - 1];
      array[i + 1] = temp2;
      temp--;
    }
  }
}
