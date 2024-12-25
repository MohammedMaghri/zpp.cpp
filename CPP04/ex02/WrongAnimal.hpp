/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:07:53 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/15 15:08:11 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include  "iostream"
#include "string"

class WrongAnimal {
    private :
        std::string type;
    public : 
        WrongAnimal();
        WrongAnimal(const std::string &name);
        WrongAnimal(const WrongAnimal& target);
        WrongAnimal& operator=(const WrongAnimal& target);
        ~WrongAnimal();
        void makeSound() const;
        std::string getType() const;
};