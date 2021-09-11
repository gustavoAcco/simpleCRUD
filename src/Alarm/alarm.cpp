#include "alarm.h"
#include <fstream>
#include <iostream>
#include <string.h>
#include <string>

Alarm::Alarm() {
    createdAt = std::time(0);
}

Alarm::Alarm(std::string description, int classification, int equipmentId) {
    description = description;
    classification = classification;
    equipmentId = equipmentId;
    createdAt = std::time(0);
}

int Alarm::save() {
    std::fstream f;
    std::string colsArray;

    f.open("../../data/Alarm.txt", std::ios::out | std::ios::in);
    const char delimiters[] = "├|┤";
    // colsArray = strtok(getline(f, ), delimiters);
}