//
// Created by TimZolleis on 07.12.2023.
//

#ifndef HFU_AIN_1_PROGRAMMING_PERSON_HPP
#define HFU_AIN_1_PROGRAMMING_PERSON_HPP

#include "date.hpp"

struct Person {
    char firstName[100];
    char lastName[100];
    Date birthdate;
};
#endif //HFU_AIN_1_PROGRAMMING_PERSON_HPP
