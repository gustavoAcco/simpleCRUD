#include <ctime>
#include <string>

class Alarm
{
private:
    std::string description;
    enum classification { Baixo, Medio, Alto };
    int equipmentId;
    time_t createdAt;
    static int table_count;
public:
    Alarm();
    Alarm(std::string, int, int);
    int save();
    int destroy();
};