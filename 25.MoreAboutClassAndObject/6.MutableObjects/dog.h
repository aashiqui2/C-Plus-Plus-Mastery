#ifndef DOG_H
#define DOG_H

#include <iostream>
using namespace std;

class Dog{
public : 
     Dog() = default;
     Dog(const string& name_param, const string& breed_param, unsigned int age_param);

     string& name(){
        return m_name;
     }
     const string& name() const{
        return m_name;
     }


     string& breed(){
        return m_breed;
     }
     const string& breed() const{
        return m_breed;
     }



     unsigned int& age(){
        return m_age;
     }
     const unsigned int& age() const{
        return m_age;
     }
 
     //Utility functions
     void print_info() const;

private : 
        string m_name;
        string m_breed;
        unsigned int m_age;
        mutable size_t m_print_info_count{};
};


#endif // DOG_H
