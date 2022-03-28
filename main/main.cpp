// mode:-*- c++ -*-
#include <time.h>
#include <sys/stat.h>
#include <chrono>
#include <iostream>
#include <iomanip>
#include <vector>
#include "cell.h"
#include "constants.h"

using std::cout;
using std::endl;
using std::setw;

int main(){

	cell* cl;
	cl=new cell();

	std::chrono::system_clock::time_point  start, end; 
	double elapsed;

	//1) 3D array 
	////-----------------------
	start = std::chrono::system_clock::now();
	cl->exe_array3D();
	end = std::chrono::system_clock::now();
	elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end-start).count();
	cout << "1) 3D array " 
		<< setw(16) 
		<< elapsed << endl;


	//2) 1D array
	//--------------------
	start = std::chrono::system_clock::now();
	cl->exe_array1D();
	end = std::chrono::system_clock::now();
	elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end-start).count();
	cout << "2) 1D array " 
		<< setw(16) 
		<< elapsed << endl;

	
	//3) 1D vector
	//--------------------
	start = std::chrono::system_clock::now();
	cl->exe_vector1D();
	end = std::chrono::system_clock::now();
	elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end-start).count();
	cout << "3) 1D vector " 
		<< setw(16) 
		<< elapsed << endl;


	//4) 1D vector (information is stored in a class)
	//--------------------------------------------------
	start = std::chrono::system_clock::now();
	cl->exe_vector1D_class();
	end = std::chrono::system_clock::now();
	elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end-start).count();
	cout << "4) 1D vector (class) " 
		<< setw(16) 
		<< elapsed << endl;


	cout << "Done!" << endl;
	return 0;
}
