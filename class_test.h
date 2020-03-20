//c++
#include <iostream>

class class_test{

 private:
  int a=0;
  const static int four=4;
  //-<note>-------------------------------
  //Declarization of array shoulf be done with "static" index value.
  //--------------------------------------
  int array[class_test::four];
  
 public:
  //class_test(){}

  //-<note>-------------------------------
  //Need "(){}" after class name
  //--------------------------------------

  class_test(){
    std::cout << "This is class. " << a << std::endl;
  }

 private:
  void array_calculation(){
    for(int i=0; i<4; ++i) array[i]=i;
  }

  void get_array(){
    for(int i=0; i<4; ++i) std::cout << array[i] << std::endl;
  }
  
};
