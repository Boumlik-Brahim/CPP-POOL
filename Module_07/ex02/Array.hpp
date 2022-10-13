/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:30:16 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/13 17:30:57 by bbrahim          ###   ########.fr       */
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
        int size;
    public:
        Array();
        Array( unsigned int n );
        Array( const Array &copy );

        Array & operator = ( const Array &assign );

        int & operator[](int index);

        int size();
        
        ~Array();
};

template <typename T> Array<T>::Array()
{
    array = nullptr;
}

template <typename T> Array<T>::Array( unsigned int n )
{
    array = new T[n]; 
}

template <typename T> Array<T>::Array( const Array &copy )
{
    
}

template <typename T> Array & Array<T>::operator = ( const Array &assign )
{
    if(this != &assign)
    {
        
    }
    return(*this);
}

template <typename T> int Array<T>::size()
{
    int i = 0;
    while (array[i])
    {
        i++;
    }
    return(i);
}

template <typename T> int& Array::operator[](int index)
{
   if (index >= this->size) 
   {
        throw
   }
   return array[index];
}

template <typename T> Array<T>::Array()
{
    delete [] T;
}

#endif