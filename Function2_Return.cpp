// Function2_Return.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdexcept>

//error C4716 : 'f1' : must return a value
//int f1(){
//	//error :no return value returned
//}



void f2(){
	std::cout << "I am  in f2 \n";// ok  
	// "Falling off the end" of a function..
} 



int f3() {
	std::cout << "I am  in f3 \n";
	return 11;             //ok
}


//error C2562 : 'f4' : 'void' function returning a value
//void f4() {
//	return 1;         //error : return value in voidfunction 
//} 



// error C2561 : 'f5' : function must return a value
//int f5 (){ 
//	// return;  // error : return value is missing
//}


void f6() { 
	std::cout << "I am  in f6 \n";
	return;            //ok
}


//explicit type is missing (int assumed)
//missing type specifier- int assumed 
//Note C++ does not support default -int
//f7() {
//	std::cout << "I am calling f7\n";
//	return 99;
//}
int Baz(int x) {

	if (x == 0) {
		//handeled exception
		throw std::exception("0 is out of range !");
	}
	//if (x == 0){
	//	//Unhandled Exception
	//	throw std::out_of_range("0 is out of Range !"); //throwing an exception
	//}
	//	
	else if (x < 0) {
		std::exit(1);//invoking a system function that doesn't return
	}
	return x * x;
}


int main()
{

	//std::cout << "Calling f1 : " << f1() << std::endl;
	f2();
	f3();
	std::cout << "Calling f3 :" << f3() << std::endl;
	f6();
	std::cout << "Baz returned " << Baz(10) << std:: endl;
	//std::cout << "Baz returned " << Baz(0) << std::endl;
	try {
		std::cout << "Baz returned :" << Baz(0) << std::endl;
	}
	catch (std::exception& err) {
		std::cout << err.what();
	}
	/*try {
		std::cout << "Baz returned :" << Baz(0) << std::endl;
	}
	catch(std::out_of_range& err){
		std::cout << err.what();
	}*/
	std::cout << "Baz returned " << Baz(-8) << std::endl;
	std::cout << "Finished with main \n";
	return 0;
}


