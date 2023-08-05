/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:26:41 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/23 11:40:12 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
	Fixed::Fixed():value(0)
	{
		std::cout << "Default constructor called" << std::endl;
	}
	Fixed::Fixed (Fixed const &t)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = t;
	}
	Fixed &Fixed::operator = (Fixed const &t)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		value = t.getRawBits();
		return *this;
	}
	int Fixed::getRawBits(void) const
	{
		std::cout << "getRawBits member function called" << std::endl;
		return (0);
	}
	void Fixed::setRawBits(int const raw)
	{
		std::cout << "setRawBits member function called" << std::endl;
		value = raw;
	}
	Fixed::~Fixed() {
		std::cout << "Destructor called" << std::endl;
	}
