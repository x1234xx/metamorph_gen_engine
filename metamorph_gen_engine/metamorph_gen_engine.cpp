#include "pch.h"
#include <iostream>
#include "morph.h"
#include "config.h"

int main()
{
    std::cout << "Start test gen function\n\n";
    #define DECL(z, n, text) BOOST_PP_CAT(text, n) ();
	BOOST_PP_REPEAT_FROM_TO(START_MORPH_CODE, END_MORPH_CODE, DECL, function)
	std::cout << "End test gen function\n\n";
	while (1);
}