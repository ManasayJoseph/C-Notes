
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer()
{
    std::cout << "default constructor called for civilengineer" << std::endl;

}

CivilEngineer::CivilEngineer(std::string_view fullname,int age,
    std::string_view address, int contract_count_param , std::string_view speciality)
    : Engineer(fullname , age , address , contract_count_param) , m_speciality(speciality)
{
    std::cout << "Custom constructor called for Civil" << std::endl;
}

//* BAD WAY
// CivilEngineer::CivilEngineer(std::string_view fullname,int age,
//     std::string_view address, int contract_count_param , std::string_view speciality)
// {
//     m_full_name = fullname; //* Error because everything is not going to be public
//     m_age = age; //* Error because everything is not going to be public
//     m_address = address; //* Error because everything is not going to be public
//     m_contract_count = contract_count_param; //* Error because everything is not going to be public
//     m_speciality = speciality;  //* Error because everything is not going to be public
// }

std::ostream& operator<<(std::ostream& out, const CivilEngineer& operand){
     out << "CivilEngineer [Full name : " << operand.get_full_name() <<
                    ",age : " << operand.get_age() << 
                    ",address : " << operand.get_address() <<
                    ",contract_count : " << operand.get_contract_count() <<
                    ",speciality : " << operand.m_speciality << "]";
                    		
    return out;  
}


CivilEngineer::~CivilEngineer()
{
}
