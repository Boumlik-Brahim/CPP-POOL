/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:52:52 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/18 18:56:27 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string> 
# include <stack>
# include <list>

template <class Type> 
class MutantStack : public std::stack<Type>
{
    private:
    public:
        MutantStack(){}
        MutantStack(const MutantStack &copy) : std::stack<Type>(copy) {}

        MutantStack & operator=(const MutantStack &assign)
        {
            (void) assign;
            return *this;
        }

        // template <typename iterator>
        typedef typename MutantStack<Type>::container_type::iterator iterator;
        iterator begin()
        {
            return this->c.begin(); 
        }

        iterator end()
        {
            return this->c.end();
        }
        
        typedef typename MutantStack<Type>::container_type::reverse_iterator reverse_iterator;
        reverse_iterator rbegin()
        {
            return this->c.rbegin(); 
        }

        reverse_iterator rend()
        {
            return this->c.rend();
        }

        ~MutantStack(){}
};

#endif