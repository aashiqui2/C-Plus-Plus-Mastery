#include "dog.h"

Dog::Dog(const string &name_param, const string &breed_param, unsigned int age_param)
{
    m_name = name_param;
    m_breed = breed_param;
    m_age = age_param;
}

//! Getters
/*
 string Dog::get_name() const{
     //return m_name;
     return this->m_name;
 }
 string Dog::get_breed() const {
     return m_breed;
 }
 unsigned int Dog::get_age() const{
     return m_age;
 }*/

//! Setters
/*
void Dog::set_name(string name_param){
   // m_name = name_param;
   this->m_name = name_param;
}
void Dog::set_breed(string breed_param){
    m_breed = breed_param;
}
void Dog::set_age(unsigned int age){
    m_age = age;
}
*/

//! Utility functions
void Dog::print_info() const
{
    cout << "Dog (" << this << ") : [ name : " << this->m_name << ", breed : " << this->m_breed << ", age : " << this->m_age << "]" << endl;
}