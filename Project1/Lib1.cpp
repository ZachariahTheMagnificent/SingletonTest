#include <iostream>
#include "Singleton.h"
#include "Lib1.h"

namespace Lib1
{
	void UseSingleton ( )
	{
		++Singleton<int>::Get ( );
		std::cout << "Project1 value: " << Singleton<int>::Get ( ) << std::endl;
	}
}