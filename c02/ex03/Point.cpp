/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 18:03:27 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/23 11:42:24 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

	Point::Point():x(0),y(0)
	{
		//std::cout << "Default constructor Point called" << std::endl;
	}
	Point::Point(const float fx, const float fy):x(fx),y(fy)
	{
		//std::cout << "Constructor Point called" << std::endl;
	}
	Point::Point (Point const &t)
	{
		//std::cout << "Copy constructor point called" << std::endl;
			*this = t;
	}
	Point &Point::operator = (Point const &t)
	{
		//std::cout << "Copy assignment operator point called" << std::endl;
		x = t.x;
		y = t.y;
		return *this;
	}
	int Point::get_valx(void) const
	{
		return (x.getValue());
	}
	int Point::get_valy(void) const
	{
		return (y.getValue());
	}
	int Point::area_of_triangle(Point const &a,Point const  &b,Point const   &c)
	{
		int area;
		int q1;
		int q2;
		int d;
		q1 = a.get_valx() * b.get_valy() + b.get_valx() * c.get_valy() +c.get_valx() * a.get_valy();
		q2 = a.get_valy() * b.get_valx() + b.get_valy() * c.get_valx() +c.get_valy() * a.get_valx();
		if (q1 > q2)
			d = q1 - q2;
		else
			d = q2 -q1;
		area = d/ 2;
		return area;
	}
	Point::~Point(){

	}
