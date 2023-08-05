/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:40:43 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/22 19:51:29 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"
#include <cmath>
class Point{
	private :
		Fixed x;
		Fixed y;
	public :
		Point();
		Point(const float fx, const float fy);
		Point (Point const &t);
		Point &operator = (Point const &t);
		int get_valx(void) const;
		int get_valy(void) const;
		static int area_of_triangle(Point const &a,Point const  &b,Point const   &c);
		~Point();

};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif
