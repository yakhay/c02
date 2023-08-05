/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:42:59 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/23 16:23:34 by yakhay           ###   ########.fr       */
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
		value = val << number;
	}
	Fixed::Fixed (const float val)
	{
		value = roundf((float)(val) * (float)(1 << number));

	}
	int Fixed::toInt(void) const
	{

		return (value >> number);
	}
	Fixed &Fixed::operator = (Fixed const &t)
	{
		//std::cout << "Copy assignment operator called" << std::endl;

		value = t.value;;
		return *this;
	}
	float Fixed::toFloat(void) const
	{
		return  ((float)(value) / (float)(1 << number));
	}
	//(++x)
	Fixed& Fixed::operator++(){

		value += 1;
		return *this;
	}
	//(x++)
	Fixed Fixed::operator++(int) {
		Fixed old = *this;
		++(*this);
		return old;
	}
	//(--x)
	Fixed& Fixed::operator--() {
		value -= 1;
		return *this;
	}
	//(x--)
	Fixed Fixed::operator--(int) {
		Fixed old = *this;
		--(*this);
		return old;
	}
	bool Fixed::operator>(const Fixed& other) const {
		return value > other.value;
	}

	bool Fixed::operator<(const Fixed& other) const{
    		return value < other.value;
		}
	bool Fixed::operator>=(const Fixed& other) const {
		return value >= other.value;
	}

	bool Fixed::operator<=(const Fixed& other) const {
		return value <= other.value;
	}

	bool Fixed::operator==(const Fixed& other) const {
		return value == other.value;
	}

	bool Fixed::operator!=(const Fixed& other) const {
		return value != other.value;
	}

	Fixed Fixed::operator+(const Fixed& other) const {
		return Fixed(value + other.value);
	}

	Fixed Fixed::operator-(const Fixed& other) const {
		return Fixed(value - other.value);
	}
	Fixed Fixed::operator*(const Fixed& other) const {
		return Fixed(this->toFloat() * other.toFloat());
	}
	Fixed Fixed::operator/(const Fixed& other) const {
		return Fixed(this->toFloat() / other.toFloat());
	}
	Fixed& Fixed::max(Fixed &a,Fixed &b)
	{
		if (a > b)
			return (a);
		else
			return (b);
	}
	const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
	{
		if (a > b)
			return (a);
		else
			return (b);
	}
	Fixed& Fixed::min(Fixed &a,Fixed &b)
	{
		if (a < b)
			return (a);
		else
			return (b);
	}
	const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
	{
		if (a < b)
			return (a);
		else
			return (b);
	}
	Fixed::~Fixed() {

	}

