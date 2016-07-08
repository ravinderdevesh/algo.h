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
#include <iostream>
#include <string>
#include "linkedlist.h"
using namespace std;

int main()
{
	LinkedList<int> *ll=new LinkedList<int>();
	ll->addNode(1);
	ll->addNode(2);
	ll->printList();
	cout<<endl;
	LinkedList<string> *lls=new LinkedList<string>();
	return 0;
}

