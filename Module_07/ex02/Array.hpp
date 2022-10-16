/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:30:16 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/16 16:29:07 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string> 

template <typename T> class Array 
{
    private:
        T   *array;
        int sizeofarray;
    public:
        Array();
        Array( unsigned int n );
        Array( const Array &copy );

        Array & operator = ( const Array &assign );

        class OutOfBoundExeption: public std::exception
		{
			public:
				virtual const char * what() const throw()
                {
                    return("out of bound exeption");
                }
		};

        T & operator[](int index);

        int size();

        ~Array();
};

template <typename T> Array<T>::Array()
{
    std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
    array = nullptr;
}

template <typename T> Array<T>::Array( unsigned int n )
{
    std::cout << "\e[0;33mParametrized Constructor called of Array\e[0m" << std::endl;
    sizeofarray = n;
    array = new(std::nothrow) T[n];
}

template <typename T> Array<T>::Array( const Array &copy )
{
    std::cout << "\e[0;33mCopy Constructor called of Array\e[0m" << std::endl;
    this->sizeofarray = copy.sizeofarray;
    this->array = new(std::nothrow) T[this->sizeofarray];
    int i = 0;
    while(i < this->sizeofarray)
    {
        this->array[i] = copy.array[i];
        i++;
    }
}

template <typename T> Array<T> & Array<T>::operator = ( const Array &assign )
{
    if(this != &assign)
    {
        delete [] this->array;
        this->array = nullptr;
        this->sizeofarray = assign.sizeofarray;
        this->array = new(std::nothrow) T[sizeofarray];
        int i = 0;
        while(i < this->sizeofarray)
        {
            this->array[i] = assign.array[i];
            i++;
        }
    }
    return(*this);
}

template <typename T> int Array<T>::size()
{
    return(sizeofarray);
}

template <typename T> T & Array<T>::operator[](int index)
{
    if(index >= this->sizeofarray || index < 0)
    {
        throw OutOfBoundExeption();
    }
    return array[index];
}

template <typename T> Array<T>::~Array()
{
    std::cout << "\e[0;31mDestructor called of Array\e[0m" << std::endl;
    delete [] array;
}

#endif