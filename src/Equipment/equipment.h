#include <ctime>

class Equipment
{
private:
    char name[20];
    int serialNumber;
    enum type { Tensao, Corrente, Oleo };
    time_t createdAt;
    static int table_count;
public:
    Equipment();
    int save();
    int destroy();
};

