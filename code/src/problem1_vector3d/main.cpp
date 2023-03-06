#include <iostream>
#include <set>
#include <random>


class Point
{
public:
    Point()
    :_x(0), _y(1)
    {
    }

    Point(int x, int y)
    :_x(x), _y(y) 
    {
    }

    int getX() const
    {
        return _x;
    }
    void setX(int x)
    {
        _x = x;
    }

    int getY() const
    {
        return _y;
    }

    void setY(int y)
    {
        _y = y;
    }

    friend Point operator+ (const Point& v1, const Point& v2);
private:
    int _x;
    int _y;
};

Point operator+ (const Point& v1, const Point& v2)
{
    Point resultPoint;
    resultPoint.setX(v1.getX() + v2.getX());
    resultPoint.setY(v1.getY() + v2.getY());
    return resultPoint;
}

Point operator* (const Point& v1, double d)
{
    Point resultPoint;

    return resultPoint;
}


// double operator* (const Point& v1, double d)
// {
//     double result = ...

//     return result;
// }
// Point extraFunction (const Point& v1, const Point& v2)
// {
//     Point resultPoint;
//     resultPoint._x = v1._x + v2._x;
//     resultPoint._y = v1._y + v2._y;
// }

class Vector3D
{
public:
    /* class methods */
    
    // Task 1, empty constructor
    Vector3D()
        :_x(0.0), _y(0.0), _z(0.0)
    {
    }
    
    // Task 2, constructor with arguments
    Vector3D(double x, double y, double z);
    
    // Task 3, copy constructor
    Vector3D(const Vector3D& v2)
    {
    }
    
    
    // Task 4. Getters and setters (define for other attributes)
    // getter
    double getX() const
    {
        return _x;
    }
    
    // setter
    void setX(double x)
    {
        _x = x;
    }

    Vector3D operator+ ( const Vector3D& v2)
    {
        _x + v2._x;
    }
        
    // Task 8. Magnitude
    double magnitude() const
    {
        return std::sqrt(*this * (*this));
    }
    friend Vector3D operator+ (const Vector3D& v1, const Vector3D& v2);
private:
    /* attributes */
    double _x;
    double _y;
    double _z;
    
};


Vector3D::Vector3D(double x, double y, double z)
{

}

// Task 5. Operator +
// (can be defined here or inside the class)
Vector3D operator+ (const Vector3D& v1, const Vector3D& v2)
{

}

// Task 6. Operator * (dot product)
// (can be defined here or inside the class)
double operator* (const Vector3D& v1, const Vector3D& v2)
{
    double result = v1.getX() * v2.getX() + v1.getY() * v2.getY();
    return result;
}

// Task 7. Operator * (scalar product)
// (can be defined here or inside the class)
Vector3D operator* (const Vector3D& v1, double d);

// Task 9. Operator <
// (can be defined here or inside the class)
bool operator<(const Vector3D& v1, const Vector3D& v2)
{
    return v1.magnitude() < v2.magnitude();
}


// Task 10. Operator << (printing)
// (can't be defined inside the class)
// Use definition from previous workshops
std::ostream& operator<< (std::ostream& out, Vector3D& v1)
{
    out << "(" << v1.getX() << " ," <<  ")";
    return out;
}

// Task 11. Operator >> (reading)
std::istream& operator>> (std::istream& in, Vector3D& v1)
{
    // read vector data
    double x;
    in >> x;
    double y;
    in >> y;
    double z;
    in >> z;
    v1.setX(x);
    // v1.setY(y);
    // v1.setZ(z);

    return in;
}


void fillMultiset(size_t n, std::multiset<Vector3D>& mset)
{
    // generating random numbers
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distr(-1, 1);
    
    
    // loop, add a new element to the multiset n times
    
    double newRandomNumber = distr(gen);

    for (size_t i = 0; i < n; ++i)
    {
        double x = distr(gen);
        double y = distr(gen);
        double z = distr(gen);
        Vector3D v(x, y, z);
        mset.insert(v);
    }
    
}

void printMset(const std::multiset<Vector3D>& mset)
{
    for (const Vector3D& v: mset)
    {
        std::cout << v;
    }
}


void example(const Point& p)
{
    p.getX();
}


int main()
{
    double vEnd = 0;
    vEnd = 1 + 2 + 3;

    double v = 0;

    v += 1;
    v += 2;
    v += 3;


    double vEnd2 = vEnd2 + 10;

    Point point(10, 50);

    Point point2(10, 50);

    Point point3 = point + point2;

    int abc = point.getX();
    // point._x = 10;

    // Final task
    // Part 1. Fill a multiset of Vector3D objects with random vectors.
    std::multiset<Vector3D> s;
    s.size();
    const size_t setSize = 100;
    fillMultiset(100, s);
    
    
    // Part 2. Print all elements of the multiset
    // printMultiSet(s);
    
    // Part 3. Calculate and print the average of all magnitudes of vectors
    // double averageMagnitude = calcAverageMagnitude(s);
    // std::cout << "Average magnitude is " << averageMagnitude << std::endl;
    
    return 0;
}
