/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:52:52 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/20 15:19:28 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string> 
# include <stack>
# include <list>

template <typename T, class Container=std::deque<T> >
class MutantStack : public std::stack<T>
{
    private:

    public:
        MutantStack(){}
        MutantStack(const MutantStack &copy) : std::stack<T>(copy) {}

        MutantStack & operator=(const MutantStack &assign)
        {
            (void)assign;
            return *this;
        }

        typedef typename MutantStack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return this->c.begin();
        }

        iterator end()
        {
            return this->c.end();
        }

        ~MutantStack(){}
};

#endif