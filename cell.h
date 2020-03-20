#include <cmath>
#include <iostream>
#include <vector>
#include "constants.h"
#include "info.h"

class cell{

	public:
		cell(){};
		~cell(){};

	private:
		std::vector<info::cell_info> vector1D_class=std::vector<info::cell_info>(Nx*Ny*Nz);
		double array3D_a[Nx][Ny][Nz];
		double array3D_b[Nx][Ny][Nz];
		double array3D_c[Nx][Ny][Nz];
		double array1D_a[Nx*Ny*Nz];
		double array1D_b[Nx*Ny*Nz];
		double array1D_c[Nx*Ny*Nz];
		std::vector<double> vector1D_a=std::vector<double>(Nx*Ny*Nz);
		std::vector<double> vector1D_b=std::vector<double>(Nx*Ny*Nz);
		std::vector<double> vector1D_c=std::vector<double>(Nx*Ny*Nz);

		int get_xIndex(int m) const{
			double val= m/(Ny*Nz);
			return floor(val);		
		}

		int get_yIndex(int m) const{
			double val=((double)(m%(Ny*Nz))) / ((double)Nz);
			return floor(val);
		}

		int get_zIndex(int m) const{
			return m%Nz;
		}


		double get_a(int m) const{
			int a=this->get_xIndex(m);
			int b=this->get_yIndex(m);
			int c=this->get_zIndex(m);
			//In order to get a value at (i,j,k), one needs to convert m into i,j,k.
			//---------------------------------------------------------------------
			return (double) a*b*c;
		}
		double get_b(int m) const{
			int a=this->get_xIndex(m);
			int b=this->get_yIndex(m);
			//In order to get a value at (i,j,k), one needs to convert m into i,j,k.
			//---------------------------------------------------------------------
			int c=this->get_zIndex(m);
			return (double) a*b*c;
		}
		double get_c(int m) const{
			int a=this->get_xIndex(m);
			int b=this->get_yIndex(m);
			int c=this->get_zIndex(m);
			//In order to get a value at (i,j,k), one needs to convert m into i,j,k.
			//---------------------------------------------------------------------
			return (double) a*b*c;
		}
		double get_a(int a, int b, int c) const{
			//For simplicity.
			//--------------------
			return (double) a*b*c;
		}
		double get_b(int a, int b, int c) const{
			//For simplicity.
			//--------------------
			return (double) a*b*c;
		}
		double get_c(int a, int b, int c) const{
			//For simplicity.
			//--------------------
			return (double) a*b*c;
		}



public:

void exe_array3D(){

	for(int i=0; i<Nx; i++){
		for(int j=0; j<Ny; j++){
			for(int k=0; k<Nz; k++){
				this->array3D_a[i][j][k]=this->get_a(i,j,k);
				this->array3D_b[i][j][k]=this->get_b(i,j,k);
				this->array3D_c[i][j][k]=this->get_c(i,j,k);
			}
		}
	}

};



void exe_array1D(){

	for(int m=0; m<Nx*Ny*Nz; m++){
		int i=this->get_xIndex(m);
		int j=this->get_yIndex(m);
		int k=this->get_zIndex(m);
		//In order to get a value at (i,j,k), one needs to convert m into i,j,k.
		//---------------------------------------------------------------------
		this->array1D_a[m]=this->get_a(i,j,k);
		this->array1D_b[m]=this->get_b(i,j,k);
		this->array1D_c[m]=this->get_c(i,j,k);
	}

};

void exe_vector1D(){

	for(int m=0; m<Nx*Ny*Nz; m++){
		this->vector1D_a[m]=this->get_a(m);
		this->vector1D_b[m]=this->get_b(m);
		this->vector1D_c[m]=this->get_c(m);
	}

};

void exe_vector1D_class(){

	for(int m=0; m<Nx*Ny*Nz; m++){
		info::cell_info info;
		info.a(this->get_a(m));
		info.b(this->get_b(m));
		info.c(this->get_c(m));
		this->vector1D_class[m]=info;
	}

};








};
