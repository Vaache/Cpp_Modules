/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:49:21 by vhovhann          #+#    #+#             */
/*   Updated: 2024/04/17 14:07:04 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0),y(0)
{}

Point::Point(const float num1, const float num2):x(num1),y(num2)
{}

Point::Point(const Point& other):x(other.x),y(other.y)
{}
Point& Point::operator =(const Point& other)
{
	(void)other;
	return *this;
}
Point::~Point()
{}

float Point::getX() const
{
	return (x.toFloat());
}
float Point::getY() const
{
	return (y.toFloat());
}
