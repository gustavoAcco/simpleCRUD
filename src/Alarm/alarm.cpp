#include "alarm.h"

Alarm::Alarm() {
    createdAt = std::time(0);
    table_count++;
}

Alarm::Alarm(std::string description, int classification, int equipmentId) {
    description = description;
    classification = classification;
    equipmentId = equipmentId;
    createdAt = std::time(0);
    table_count++;
}
