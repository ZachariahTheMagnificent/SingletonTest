#include <iostream>
#include "Singleton.h"
#include "Lib3.h"

namespace Lib3
{
	void UseSingleton ( )
	{
		++Singleton<int>::Get();
		std::cout << "Project3 value: " << Singleton<int>::Get ( ) << std::endl;
	}
}