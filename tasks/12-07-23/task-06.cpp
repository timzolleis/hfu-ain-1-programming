//
// Created by TimZolleis on 06.12.2023.
//
#include <cstring>
#include <cstdio>
#include "types/date.h"
struct Person {
    char firstName[100];
    char lastName[100];
    Date birthdate;
};


void fillPersons(Person array[]) {
    Person person1 = {"Rudolph", "Reindeer", {10, Date::April, 1900}};
    Person person2 = {"Isaac", "Newton", {4, Date::January, 1643}};
    Person person3 = {"Jesus", "Jesus", {day: 24, Date::December, 0000}};
    Person person4 = {"Linus", "Torvalds", {28, Date::December, 1969}};
    Person person5 = {"Tim", "Berners-Lee", {8, Date::June, 1955}};
    array[0] = person1;
    array[1] = person2;
    array[2] = person3;
    array[3] = person4;
    array[4] = person5;
}


void findBirthdate(const char *firstName, const char *lastName, Person persons[]) {
    //Loop through each person and try to find a matching one
    bool hasMatch = false;
    for (int i = 0; i < 5; ++i) {
        Person person = persons[i];
        int matchFirstname = strcmp(person.firstName, firstName);
        int matchLastname = strcmp(person.lastName, lastName);
        if (matchFirstname == 0 && matchLastname == 0) {
            hasMatch = true;
            printf("%s %s was born at %i.%u.%i", person.firstName, person.lastName, person.birthdate.day,
                   person.birthdate.month + 1, person.birthdate.year);
        }
    }
    if (!hasMatch) {
        printf("Your query didn't match anything. Try again!");
    }

}

void trimNewline(char *str) {
    str[strcspn(str, "\n")] = 0;
}

int main() {
    char firstName[100];
    char lastName[100];
    Person persons[5];
    fillPersons(persons);
    printf("Please enter the first name: \n");
    fgets(firstName, 99, stdin);
    printf("Please enter the last name: \n");
    fgets(lastName, 99, stdin);
    trimNewline(firstName);
    trimNewline(lastName);
    printf("Searching for firstname: %s and lastname: %s \n", firstName, lastName);
    findBirthdate(firstName, lastName, persons);
}

