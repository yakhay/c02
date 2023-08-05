/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:03:48 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/23 11:27:17 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
	class Fixed{
		private:
			int value;
			static const int number = 8;
		public:
			Fixed();
			Fixed (Fixed const &t);
			Fixed &operator = (Fixed const &t);
			~Fixed();
			int getRawBits(void) const;
			void setRawBits(int const raw);


	};

#endif
