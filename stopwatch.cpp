/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "stopwatch.h"

double startTime;
double endTime;

void start_stopwatch(){
  startTime = clock();
}

void stop_stopwatch(){
  endTime = clock();
}

double elapsed_time(){
  return (endTime - startTime) / CLOCKS_PER_SEC;
}
