#include <iostream>
#include <vector>


class info{

	public:

		class cell_info{
			private:
				double val_aSave;
				double val_bSave;
				double val_cSave;
			public:
				double a(){return val_aSave;};
				double b(){return val_bSave;};
				double c(){return val_cSave;};
				void a(double val){val_aSave=val;};
				void b(double val){val_bSave=val;};
				void c(double val){val_cSave=val;};

		};




};
