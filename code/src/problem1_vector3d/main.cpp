#include <iostream>
#include <set>
#include <random>

class Vector3D
{
public:
    /* class methods */

    // Task 1, empty constructor
    Vector3D() : _x(0.0), _y(0.0), _z(0.0) {}

    // Task 2, constructor with arguments
    Vector3D(double x, double y, double z) : _x(x), _y(y), _z(z){};

    // Task 3, copy constructor
    Vector3D(const Vector3D &v2)
    {
        _x = v2._x;
        _y = v2._y;
        _z = v2._z;
    };

    // Task 4. Getters and setters (define for other attributes)
    // getter
    double getX() const
    {
        return _x;
    }

    double getY() const
    {
        return _y;
    }

    double getZ() const
    {
        return _z;
    }

    // setter
    void setX(double x)
    {
        _x = x;
    }

    void setY(double y)
    {
        _y = y;
    }

    void setZ(double z)
    {
        _z = z;
    }

    void print()
    {
        std::cout << _x << '\t' << _y << '\t' << _z << '\n';
    }

    // Task 8. Magnitude
    double magnitude() const
    {
        return std::sqrt(pow(_x, 2) + pow(_y, 2) + pow(_z, 2));
    }

private:
    /* attributes */
    double _x;
    double _y;
    double _z;
};

// Task 5. Operator +
// (can be defined here or inside the class)
Vector3D operator+(const Vector3D &v1, const Vector3D &v2)
{
    return Vector3D(v1.getX() + v2.getX(), v1.getY() + v2.getY(), v1.getZ() + v2.getZ());
}

// Task 6. Operator * (dot product)
// (can be defined here or inside the class)
double operator*(const Vector3D &v1, const Vector3D &v2)
{
    return v1.getX() * v2.getX() + v1.getY() * v2.getY() + v1.getZ() * v2.getZ();
}

// Task 7. Operator * (scalar product)
// (can be defined here or inside the class)
Vector3D operator*(const Vector3D &v1, double d)
{
    return Vector3D(v1.getX() * d, v1.getY() * d, v1.getZ() * d);
}

// Task 9. Operator <
// (can be defined here or inside the class)
bool operator<(const Vector3D &v1, const Vector3D &v2)
{
    return v1.magnitude() < v2.magnitude();
}

// Task 10. Operator << (printing)
// (can't be defined inside the class)
// Use definition from previous workshops
std::ostream &operator<<(std::ostream &out, const Vector3D &v1)
{
    out << v1.getX() << ", " << v1.getY() << ", " << v1.getZ() << '\n';

    return out;
}

// Task 11. Operator >> (reading)
std::istream &operator>>(std::istream &in, Vector3D &v1)
{
    // read vector data

    return in;
}

void fillMultiset(size_t n, std::multiset<Vector3D> &mset)
{
    // generating random numbers
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distr(-1, 1);

    // loop, add a new element to the multiset n times

    double newRandomNumber = distr(gen);
}

int main()
{

    // Final task
    // Part 1. Fill a multiset of Vector3D objects with random vectors.
    // std::multiset<Vector3D> s;
    // const size_t setSize = 100;
    // fillMultiset(100, s);
    Vector3D vec1(1, 2, 3);
    Vector3D vec2(vec1);
    vec2.setY(10);
    vec2.print();
    std::cout << vec1.magnitude() << '\t' << vec2.magnitude() << '\n';
    (vec1 + vec2).print();

    std::cout << vec1 * vec2 << '\n';
    (vec1 * 8.2).print();

    std::cout << (vec1 < vec2) << '\n';
    std::cout << vec1;
    // std::cout << std::pair(1,2);

    // Part 2. Print all elements of the multiset
    // printMultiSet(s);

    // Part 3. Calculate and print the average of all magnitudes of vectors
    // double averageMagnitude = calcAverageMagnitude(s);
    // std::cout << "Average magnitude is " << averageMagnitude << std::endl;

    return 0;
}
