
#ifndef QWERTY_POINT_H
#define QWERTY_POINT_H
#include <ostream>
using namespace std;

class Point {
public:
    bool operator==(const Point& other)const;

    int getX() const;
    void setX (int x) ;

    int getY()const;
    void setY(int y);


private:
    int x{};
    int y{};

};
ostream& operator<<(ostream& stream, const Point& another);

#endif //QWERTY_POINT_H
