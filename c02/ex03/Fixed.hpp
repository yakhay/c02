/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:03:48 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/22 18:56:45 by yakhay           ###   ########.fr       */
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
		Fixed operator+(const Fixed& other) const;
		Fixed &operator=(Fixed const &t);
		int getValue(void) const;
		int toInt(void) const;
		float toFloat(void) const;
		~Fixed();
};

#endif
