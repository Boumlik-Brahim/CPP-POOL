/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:52:52 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/18 18:28:52 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string> 
# include <stack>

template <class Type, class Container = std::deque<Type> > 
class MutantStack : public std::stack<Type>
{
    private:
    public:
        MutantStack();

        MutantStack & operator=(const MutantStack &assign)
        {
            if(this != &assign)
            {
                std::cout << "hh" << std::endl;
            }
            return *this;
        }

        // template <typename iterator>
        typedef typename Container::iterator iterator;
        iterator begin()
        {
            return this->c.begin(); 
        }

        iterator end()
        {
            return this->c.end();
        }

        ~MutantStack();
};

#endif