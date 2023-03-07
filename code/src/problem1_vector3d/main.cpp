#include <iostream>
#include <set>
#include <random>
#include <algorithm>

class Vector3D
{
public:
    /* class methods */

    // Task 1, empty constructor
    Vector3D() : _x(0), _y(0), _z(0) {}

    // Task 2, constructor with arguments
    Vector3D(double x, double y, double z) : _x(x), _y(y), _z(z) {}

    // Task 3, copy constructor
    Vector3D(const Vector3D &v2) : _x(v2._x), _y(v2._y), _z(v2._z) {}

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
    double magnitude() const;

private:
    /* attributes */
    double _x;
    double _y;
    double _z;
};

double Vector3D::magnitude() const
{
    return std::sqrt(pow(_x, 2) + pow(_y, 2) + pow(_z, 2));
}

// Task 5. Operator +
// (can be defined here or inside the class)
Vector3D operator+(const Vector3D &v1, const Vector3D &v2)
{
    return Vector3D(v1.getX() + v2.getX(), v1.getY() + v2.getY(), v1.getZ() + v2.getZ());
}

std::vector<int> operator+(const std::vector<int> &v1, const std::vector<int> &v2)
{
    return std::vector<int>{v1[0] + v2[0], v1[1] + v2[1], v1[2] + v2[2]};
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

bool operator>(const Vector3D &v1, const Vector3D &v2)
{
    return v1.magnitude() > v2.magnitude();
}

// Task 10. Operator << (printing)
// (can't be defined inside the class)
// Use definition from previous workshops

std::ostream &operator<<(std::ostream &out, const Vector3D &v)
{
    out << v.getX() << '\t' << v.getY() << '\t' << v.getZ() << '\n';

    return out;
}

// Task 11. Operator >> (reading)
std::istream &operator>>(std::istream &in, Vector3D &v1)
{

    double x, y, z;
    in >> x >> y >> z;
    v1.setX(x);
    v1.setY(y);
    v1.setZ(z);

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
    Vector3D vec0;
    Vector3D vec1(1, 2, 3);
    Vector3D vec2(vec1);
    Vector3D vec3;
    std::cin >> vec3;
    std::cout << vec3;
    vec2.setY(10);

    std::cout << vec2.magnitude() << '\n';
    vec2.print();
    (vec1 + vec2).print();

    std::cout << vec1 * 2.4;

    // std::cout << a;
    // ----------------------------------

    std::vector<Vector3D> vecOfvec{vec0, vec1, vec2};
    std::sort(vecOfvec.begin(), vecOfvec.end(), std::greater());

    std::vector<int> a{1, 2, 3};
    std::vector<int> b{4, 5, 6};

    for (int x : a + b)
    {
        std::cout << x << '\n';
    }

    // Part 2. Print all elements of the multiset
    // printMultiSet(s);

    // Part 3. Calculate and print the average of all magnitudes of vectors
    // double averageMagnitude = calcAverageMagnitude(s);
    // std::cout << "Average magnitude is " << averageMagnitude << std::endl;

    return 0;
}
