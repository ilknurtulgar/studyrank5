#ifndef VECT2_HPP
#define VECT2_HPP

#include <sstream>

class vect2 {
    
    private:
       int x,y;

    public:
        vect2();
        vect2(const vect2& other);
        vect2(const int x,  const int y);
        vect2& operator=(const vect2& other);
        ~vect2();

        int operator[](const int n)const;
        int &operator[](const int n);

        vect2 &operator++(); //önce
        vect2 operator++(int n); //sonra
        vect2 &operator--(); //once
        vect2 operator--(int n);

        vect2 operator+(const vect2 &v) const;
        vect2 operator-(const vect2 &v) const;
        vect2 operator*(const vect2 &v) const;

        vect2 operator+=(const vect2 &v);
        vect2 operator-=(const vect2 &v);
        vect2 operator*=(const vect2 &v);

        bool operator==(const vect2 &v) const;
        bool operator!=(const vect2 &v) const;

        vect2 operator-() const; // -v2
        vect2 operator*(const int n)const; //v3 * 2
        vect2 &operator*=(const int n); // v1 *= 42
};

vect2 operator*(const int n, const vect2 &v); // 3 * v2
std::ostream &operator<<(std::ostream &os,const vect2& v); 

#endif