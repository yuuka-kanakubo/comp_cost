#include <cmath>
#include <iostream>
#include <vector>
#include "cell.h"


void cell::exe_array3D(){

	for(int i=0; i<Nx; i++){
		for(int j=0; j<Ny; j++){
			for(int k=0; k<Nz; k++){
				this->array3D_a[i][j][k]=this->get_a(i);
				this->array3D_b[i][j][k]=this->get_b(i);
				this->array3D_c[i][j][k]=this->get_c(i);
			}
		}
	}

};



void cell::exe_array1D(){

	for(int m=0; m<Nx*Ny*Nz; m++){
		//int i=this->get_xIndex(m);
		//int j=this->get_yIndex(m);
		//int k=this->get_zIndex(m);

		//In order to get a value at (i,j,k), one needs to convert m into i,j,k.
		//---------------------------------------------------------------------
		//this->array1D_a[m]=this->get_a(i,j,k);
		//this->array1D_b[m]=this->get_b(i,j,k);
		//this->array1D_c[m]=this->get_c(i,j,k);
		this->array1D_a[m]=this->get_a(m);
		this->array1D_b[m]=this->get_b(m);
		this->array1D_c[m]=this->get_c(m);
	}

};

void cell::exe_vector1D(){

	for(int m=0; m<Nx*Ny*Nz; m++){
		this->vector1D_a[m]=this->get_a(m);
		this->vector1D_b[m]=this->get_b(m);
		this->vector1D_c[m]=this->get_c(m);
	}

};

void cell::exe_vector1D_class(){

	for(int m=0; m<Nx*Ny*Nz; m++){
		info::cell_info info;
		info.a(this->get_a(m));
		info.b(this->get_b(m));
		info.c(this->get_c(m));
		this->vector1D_class[m]=info;
	}

};




