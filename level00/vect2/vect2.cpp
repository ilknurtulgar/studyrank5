#include "vect2.hpp"

//orthodox conanical form ---------
vect2::vect2() : x(0), y(0) {}

vect2::~vect2(){}

vect2::vect2(const int x,const int y){
    this->x = x;
    this->y = y;
}

vect2::vect2(const vect2& other){
    *this = other;
}

vect2& vect2::operator=(const vect2& other){
    if(this->x != other.x || this->y != other.y){
        this->x = other.x;
        this->y = other.y;
    }
    return *this;
}
//------------------------------------------

//array operator---------------------------
int vect2::operator[](const int n) const {
    if(n == 0)
        return this->x;
    return this->y;
}

int &vect2::operator[](const int n) {
      if(n == 0)
        return this->x;
    return this->y;
}
//--------------------------------------------

//------------------
//prefix- postfix
vect2 &vect2::operator++(){
    this->x++;
    this->y++;
    return *this;
} //once

vect2 vect2::operator++(int n){
    vect2 tmp = *this;
    this->x++;
    this->y++;
    return tmp;
}

vect2 &vect2::operator--(){
    this->x--;
    this->y--;
    return *this;
}//once

vect2 vect2::operator--(int n){
    vect2 tmp = *this;
    this->x--;
    this->y--;
    return tmp;
}
//--------------------------------

//arithmetic
vect2 vect2::operator+(const vect2 &v) const {
    return vect2(this->x + v.x, this->y + v.y);
}

vect2 vect2::operator-(const vect2 &v) const{
    return vect2(this->x - v.x, this->y - v.y);
}

vect2 vect2::operator*(const vect2 &v) const{
    return vect2(this->x * v.x, this->y * v.y);
}
//--------------------------------------------

//assign op------------------
vect2 vect2::operator+=(const vect2 &v){
    *this = *this + v;
    return *this;
}

vect2 vect2::operator-=(const vect2 &v){
    *this = *this - v;
    return *this;
}

vect2 vect2::operator*=(const vect2 &v){

    *this = *this * v;
    return *this;
}
//-------------

bool vect2::operator==(const vect2& v)const{
    return (this->x == v.x && this->y == v.y);
}

bool vect2::operator!=(const vect2& v) const {
    return !(*this == v);
}
//
vect2 vect2::operator-()const {
    return vect2(-this->x, -this->y);
}

vect2 vect2::operator*(const int n) const{
    return vect2(this->x * n, this->y * n);
}

vect2 &vect2::operator*=(const int n){
    *this = *this * n;
    return *this;
}

vect2 operator*(const int n , const vect2& v){
    return vect2(v[0] * n, v[1] * n);
}

//ostream-------------------
std::ostream &operator<<(std::ostream &os,const vect2& v){

    os << "{" << v[0] << "," << v[1] << "}" << std::endl;
    return os;
}