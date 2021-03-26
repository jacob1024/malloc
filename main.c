/**
******************************************************************************
* Last updated for version 1.0
* Copyright (C) 2005-2019 Quantum Leaps, LLC. All rights reserved.
*
* This program is open source software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published
* by the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* Alternatively, this program may be distributed and modified under the
* terms of Quantum Leaps commercial licenses, which expressly supersede
* the GNU General Public License and are specifically designed for
* licensees interested in retaining the proprietary status of their code.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <www.gnu.org/licenses>.
*
* auth:lsc
******************************************************************************
* @endcond
*/

#include "malloc.h"

extern pthread_mutex_t global_malloc_lock;
//extern void *malloc(size_t size);
//extern void free(void *block);
void main()
{
	pthread_mutex_init(&global_malloc_lock, NULL);
	char * test = (char*)mallocV1(1024);

	getchar();
	freeV1(test);
	getchar();

	return 0;
}



