/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:49:30 by yonghlee          #+#    #+#             */
/*   Updated: 2023/01/14 13:49:30 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

#include"Form.hpp"

class Form;

class Bureaucrat
{
	private:
		int					grade;
		const std::string	name;
		
	public:
		int getGrade(void) const;
		void setGrade(int grade);
		const std::string getName(void) const;
		void increment();
		void decrement();

		void signForm(Form &to_sign) const;

		void executeForm(Form const &form);

		const Bureaucrat& operator=(const Bureaucrat &to_assignation);
		Bureaucrat(const Bureaucrat &old);
		Bureaucrat(std::string name);
		~Bureaucrat();

		class GradeTooHighException : public std::exception {
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &source);

#endif