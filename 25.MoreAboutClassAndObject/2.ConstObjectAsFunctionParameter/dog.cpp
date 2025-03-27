#include "dog.h"

Dog::Dog(string_view name_param, string_view breed_param, unsigned int age_param): m_name{name_param},m_breed{breed_param},m_age{age_param}{

}

 //Getters
 string_view Dog::get_name(){
    //return m_name;
    return this->m_name;
}
string_view Dog::get_breed(){
    return m_breed;
}
unsigned int Dog::get_age(){
    return m_age;
}

//Setters
void Dog::set_name(string_view name_param){
   // m_name = name_param;
   this->m_name = name_param;
}
void Dog::set_breed(string_view breed_param){
    m_breed = breed_param;
}
void Dog::set_age(unsigned int age){
    m_age = age;
}

//Utility functions
void Dog::print_info(){
    cout << "Dog (" << this << ") : [ name : " << this->m_name  
           << ", breed : " << this->m_breed  
           << ", age : " << this->m_age << "]" << endl;
}