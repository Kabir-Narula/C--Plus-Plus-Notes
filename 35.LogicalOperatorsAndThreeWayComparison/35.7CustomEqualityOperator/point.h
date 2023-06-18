#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point
{
	friend std::ostream& operator<< (std::ostream& out , const Point& p);
public:
	Point() = default;
	Point(double x, double y) : 
		m_x{x}, m_y{y}{}

	Point(double x_y) : Point{x_y,x_y}{}
	//Operators
    bool operator==(const Point& other) const;
    //bool operator!=(const Point& other) const;
private: 
	double length() const;   // Function to calculate distance from the point(0,0)
private : 
	double m_x{};
	double m_y{};
};

inline std::ostream& operator<< (std::ostream& out , const Point& p){
	out << "Point [ x : " << p.m_x << ", y : " << p.m_y <<
       " length : " << p.length()  <<  "]" ;
	return out;
}




#endif // POINT_H
