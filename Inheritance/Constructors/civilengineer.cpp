
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer()
{
    std::cout << "default constructor called for civilengineer" << std::endl;

}

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
