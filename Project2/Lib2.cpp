#include <iostream>
#include "Singleton.h"
#include "Lib2.h"

namespace Lib2
{
	void UseSingleton ( )
	{
		++Singleton<int>::Get ( );
		std::cout << "Project2 value: " << Singleton<int>::Get ( ) << std::endl;
	}
}