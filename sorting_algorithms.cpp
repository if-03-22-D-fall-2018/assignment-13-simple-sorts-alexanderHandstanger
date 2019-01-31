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

}

void insertion_sort(int *array, unsigned long length){

}
