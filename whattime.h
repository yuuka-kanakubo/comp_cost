#include <time.h>
#include <iomanip>
#include <sstream>
#include <string>

class whattime{


 private:
  std::string date;
  std::string generateS(int n){
    std::ostringstream name;
    name  << n ;
    return name.str();
  }

  std::string generateS2(int n){
    std::ostringstream name;
    name  << std::setw(2) << std::setfill('0') << n ;
    return name.str();
  }


  
 public:
  whattime(){    
    time_t now = time(NULL);
    struct tm *pnow = localtime(&now);
    
    int Y=pnow->tm_year+1900;
    int M=pnow->tm_mon + 1;
    int D=pnow->tm_mday;
    date=generateS(Y)+generateS2(M)+generateS2(D);    
  }
   
  std::string get_date(){return date;};
  
};
