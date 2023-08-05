/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:59:44 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/23 17:31:36 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

	Fixed::Fixed():value(0)
	{
		//std::cout << "Default constructor called" << std::endl;
	}
	Fixed::Fixed (Fixed const &t)
	{
		//std::cout << "Copy constructor called" << std::endl;
		*this = t;
	}
	Fixed::Fixed (const int val)
	{
		//std::cout << "Int constructor called" << std::endl;
		value = val << number;
	}
	Fixed::Fixed (const float val)
	{
		//std::cout << "Float constructor called" << std::endl;
		value = (roundf(val * (1 << number)));
	}
	Fixed Fixed::operator+(const Fixed& other) const {
	return Fixed(value + other.value);
	}
	Fixed &Fixed::operator = (Fixed const &t)
	{
		//std::cout << "Copy assignment operator called" << std::endl;
			value = t.value;;
			return *this;
	}
	int Fixed::getValue(void) const
	{
		return (value);
	}
	int Fixed::toInt(void) const
	{
		return (value >> number);
	}
	float Fixed::toFloat(void) const
	{
		return (((float)value / (float)(1 << number)));
	}
	Fixed::~Fixed() {
		//std::cout << "Destructor called" << std::endl;
	}
