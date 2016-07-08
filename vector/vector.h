/*
 * Copyright 2016 Rameshwar Bhaskaran
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// @author Rameshwar Bhaskaran (rameshwar.zorro@gmail.com)
#ifndef VECTOR_H
#define VECTOR_H

/*  
	A vector is a classic and popular C++ data structure/container. 
	It stores the data internally as an array.
	To expand itself in case of insufficient memory, it allocates double the present size(As per GCC). 
	However Facebook's Folly library does it as a factor of 1.5 considering the issue of memory wastage 
*/

template <class T>
class Vector
{
	int size;
	int start,end;
	T *array;
	public:
		Vector()
		{
			size=10; //default size
			array=NULL;
		}
		Vector(int size)
		{
			this->size=size;
			array=new T[size];
		}
		void push()
		{
			
		}


#endif //VECTOR_H
