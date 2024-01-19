#include <iostream>
#include <string>
#include <iomanip>

int naive_hash(std::string);

int main() {
  std::string str;
  do{
  std::cout << "Введите строку: ";
  std::cin>>std::setw(255)>>str;
  std::cout<<"Наивный хэш строки "<<str<<" = "<<naive_hash(str)<<"\n";
  }while(str!="exit");
}

int naive_hash(std::string str){
   int hash = 0;
   for(int i = 0; i<str.length();i++){
     hash += str[i];
   }
   return hash;
}
