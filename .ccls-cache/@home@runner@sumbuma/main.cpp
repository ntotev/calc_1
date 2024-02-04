#include <iostream>
using namespace std;

//void, int, char, string, double, float
int sum(int v1, int v2){
  int summ = v1+v2;
  return summ;
}


int hmwork_pro(int a1, int a2, int a3){
  
int a4 = a1 + a2 - a3 * 10;
return (a4);
}



int multiple(int x, int z, int c, int v){
  return x*z*c*v;
}
int main() {
// cout << "Hello World!\n";
  //create a variable
  //create a pointer variable and set it equal to the memory address of previous variable
  //print the memory address
  //print the int value using the pointer variable
  cout << (to_string(hmwork_pro(3, 4, 5)) + "\n");
  exit(0);
  
  int mysa;
  int num2 = 11;
   mysa = 498; //1345
   int* dysa =     &mysa; //dysa = 1345
  cout << dysa<<endl;
  cout << *dysa<<endl;
  cout<<(*dysa) * num2<<endl;
  //initialze a pointer
  //int * something = 10
  //*something
  //num1+num2;
  int var1= 10;
  int var2 = 15;
  int summation = sum(var1  ,var2);
  cout<<summation<<endl;
  //function that multiplies 4 numbers
  int x=1, z=2,c=3,v=4; //single line initialiaztion of variables
  //int ado(x = 1,z = 2,c = 3,v = 4)
  int mult = multiple(1,2,3,4);
  cout<<"Multiplication of four numbers is " <<mult<<endl;
  
  //homework
  //create a function that take three variables and     returns var1+ var2-var3 *10

  







  
  }