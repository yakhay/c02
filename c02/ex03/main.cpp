/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:59:45 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/22 19:49:48 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}

int main(void) {

	Point a((1.2),(1.5));
	Point b((3.6),(3.2));
	Point c((4.6),(1.5));
	Point p(4,1.5);
	 if (bsp( a, b, c,p))
	 	std::cout<<"point is inside of a triangle"<<std::endl;
	else
	std::cout<<"point is not inside of a triangle"<<std::endl;
	return 0;
}
