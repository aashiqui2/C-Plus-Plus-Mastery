#ifndef DOG_H
#define DOG_H

#include <iostream>
using namespace std;

class Dog
{
public:
   Dog() = default;
   Dog(const string &name_param, const string &breed_param, unsigned int age_param);

   string &name()
   {
      return m_name;
   }
   const string &name() const
   {
      return m_name;
   }

   string &breed()
   {
      return m_breed;
   }
   const string &breed() const
   {
      return m_breed;
   }

   unsigned int &age()
   {
      return m_age;
   }
   const unsigned int &age() const
   {
      return m_age;
   }
   //!Getters
   /*
   string get_name() const;
   string get_breed() const;
   unsigned int get_age() const;*/

   //!Setters
   /*
   void set_name(string name_param);
   void set_breed(string breed_param);
   void set_age(unsigned int age);
   */

   //! Utility functions
   void print_info() const;
   
   const string &compile_dog_info() const
   {
      string dog_info = "dog_name : " + m_name + " dog_breed : " + m_breed + " dog_age :" + to_string(m_age);
      return dog_info;
   }

   unsigned int *jumps_per_minute() const
   {
      unsigned int jumps{5};
      return &jumps;
   }

private:
   string m_name;
   string m_breed;
   unsigned int m_age;
};

#endif // DOG_H
