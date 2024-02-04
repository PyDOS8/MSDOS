#include <iostream>
#include <map>
#include <string>
#include <functional>
using namespace std;
class CPU{
    public:

  /*		Registers		*/
  map<int, double>RID;
  map<string, char>RCS;
  map<string*, char*>RPCS;
  map<int*, double*>RPID; 
 string strMemory[1] = {}
  void add(){
	if(RID[0] > 0 && RID[1] > 0){
		RID[0] = RID[0]+RID[1];
	}
  } 
  void sub(){
	if(RID[0] > 0 && RID[1] > 0){
		RID[0] = RID[0]-RID[1];
	}
  }
  void mul(){
	if(RID[0] > 0 && RID[1] > 0){
		RID[0] = RID[0]*RID[1];
	}
  }
  void div(){
	if(RID[0] > 0 && RID[1] > 0){
		RID[0] = RID[0] / RID[1];
	}
  }
  void addToStrMemory(string val){
	 if (strMemory.empty()){
		strMemory[0] = val;
	 }else{
		strMemory.empty();
	 }
  }

  void deallocatePRIDInt(){
	RPID.clear();
  }
  void deallocatePRIDDouble(){
	RPID.clear();
  }
  
  void deallocateRPCSString(){
	RPCS.clear();
  }
  
  void deallocateRPCSSChar(){
	RPCS.clear();
  }
}
