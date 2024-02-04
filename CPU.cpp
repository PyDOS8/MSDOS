#include <iostream>
#include <map>
#include <string>
using namespace std;
class CPU{
    public:
   /*		Registers		*/
   map<int, double>RDI;
   map <char, string>RCS;
   map <double, float> RFD;

   /*		Memory			*/
   map <double, float> DFMemory;
   map <char, string> CSMemory;
   map <int, double> DIMemory;

   /*		Math Functions  */
   void add(double num1, double num2){
		double sum = num1+num2;
		RFD[1] = sum;
   }
   void sub(double num1, double num2){
		double sum = num1-num2;
		RFD[1] = sum;
   }
   void mul(double num1, double num2){
		double sum = num1 * num2;
		RFD[1] = sum;
   }
   void div(double num1, double num2){
		double sum = num1 / num2;
		RFD[1] = sum;
   }

   /* Memory */
   void storeString(string msg){
	 RCS[1] = msg;
   }
   void storeChar(char chr){
	 RCS[0] = chr;
   }
   void storeCharIntoMemory(){
		CSMemory[0] = RCS[0];
   }
   void storeStringIntoMemory(){
		CSMemory[1] = RCS[1];
   }
   void storeIntIntoMemory(){
		DIMemory[0] = RDI[0];
   }
   void storeDoubleIntoMemory(){
		DIMemory[1] = RDI[1];
   }
   void storeFloatIntoMemory(){
		DFMemory[1] = RFD[1];
   }
};