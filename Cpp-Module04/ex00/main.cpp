/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:34:34 by iyonghun          #+#    #+#             */
/*   Updated: 2023/01/03 17:01:35 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
    const Animal *meta = new Animal();
    // const Animal *j = new Dog();
    // const Animal *i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); // will output the cat sound!
    // j->makeSound();
    meta->makeSound();
    return 0;
}