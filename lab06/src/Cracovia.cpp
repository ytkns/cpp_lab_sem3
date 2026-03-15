#include "Cracovia.h"

Cracovia* Cracovia::Create(){
	if(obj==nullptr)
		obj=new Cracovia();
	return obj;
}

void Cracovia::SetName(const string& n){
    name=n;
}	

void Cracovia::Presentation() const{
    std::cout << name << std::endl;
}
  
void Cracovia::Delete(){
	if(obj != nullptr){
		delete obj;
		obj = nullptr;
	}
}

Cracovia* Cracovia::obj = nullptr;

Cracovia::Cracovia() {}

Cracovia::~Cracovia() {}


