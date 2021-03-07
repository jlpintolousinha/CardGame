/*Card Class definition. A Card would have a value and an
associated suit*/

#pragma once

#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>

using namespace std;
using namespace cards;

struct Card {
	Suits suit;
	Values value;
};