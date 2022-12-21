/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:39:06 by yonghlee          #+#    #+#             */
/*   Updated: 2022/12/21 13:39:13 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::AddContact()
{
    std::cout << "Input First Name : ";
    std::cin >> firstName;
    std::cout << "Input Last Name : ";
    std::cin >> lastName;
    std::cout << "Input NickName : ";
    std::cin >> nickName;
    std::cout << "Input Phone Number : ";
    std::cin >> phoneNumber;
    std::cout << "Input Secret : ";
    std::cin >> darkestSecret;
}