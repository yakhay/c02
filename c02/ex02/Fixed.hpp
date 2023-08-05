/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:03:48 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/22 18:49:06 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed{
	private:
		int	value;
		static const int number = 8;
	public:
		Fixed();
		Fixed (Fixed const &t);
		Fixed (const int val);
		Fixed (const float val);
		int toInt(void) const;
		float toFloat(void) const;
		Fixed &operator = (Fixed const &t);
		//(++x)
		Fixed& operator++();
		//(x++)
		Fixed operator++(int);
		//(--x)
		Fixed& operator--();
		//(x--)
		Fixed operator--(int) ;
		bool operator>(const Fixed& other) const ;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const ;
		bool operator<=(const Fixed& other) const ;
		bool operator==(const Fixed& other) const ;
		bool operator!=(const Fixed& other) const ;
		Fixed operator+(const Fixed& other) const ;
		Fixed operator-(const Fixed& other) const ;
		Fixed operator*(const Fixed& other) const ;
		Fixed operator/(const Fixed& other) const ;
		static const Fixed& max(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a,Fixed &b);
		static Fixed& min(Fixed &a,Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		~Fixed();
	};

#endif
