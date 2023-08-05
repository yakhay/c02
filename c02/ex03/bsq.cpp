/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:49:33 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/22 19:50:10 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	int abc;
	int pbc;
	int pba;
	int pac;

	abc = Point::area_of_triangle(a,b,c);
	pbc = Point::area_of_triangle(point,b,c);
	pba = Point::area_of_triangle(point,b,a);
	pac = Point::area_of_triangle(point,a,c);
	return (abc == pbc +pba + pac);
}
