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
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
template < class T>
struct node
{
	T data;
	struct node *next;
};


template <class T>
class LinkedList
{
	private:
		struct node<T> *head;
		
	public:	
		LinkedList()
		{
			head=NULL;
		}

		void deleteNode()
		{
			if(head==NULL)
				return;
			else
			{
				head=head->next;
			}
		}

		void addNode(T data)
		{
			struct node<T> *newnode=new struct node<T>();
			newnode->data=data;
			newnode->next=NULL;
			if(head==NULL)
			{
				head=newnode;
				head->next=NULL;
			}
			else
			{
				struct node<T> *iter=head;
				while(iter->next!=NULL)
				{
					iter=iter->next;
				}
				iter->next=newnode;
				newnode->next=NULL;
			}
		}

		void printList()
		{
			struct node<T> *iter=head;
			while(iter!=NULL)
			{
				std::cout<<iter->data<<" ";
				iter=iter->next;
			}
		}
};

#endif //LINKEDLIST_H
