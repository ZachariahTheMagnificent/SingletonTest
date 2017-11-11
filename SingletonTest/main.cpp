#include <cstdlib>
#include <iostream>
#include "Singleton.h"
#include "Lib1.h"
#include "Lib2.h"
#include "Lib3.h"

#pragma comment(lib, "Project1.lib")
#pragma comment(lib, "Project2.lib")
#pragma comment(lib, "Project3.lib")

void UseSingleton ( )
{
	++Singleton<int>::Get ( );
	std::cout << "Main project value: " << Singleton<int>::Get() << std::endl;
}

void main ( )
{
	Lib1::UseSingleton ( );
	Lib2::UseSingleton ( );
	Lib3::UseSingleton ( );
	UseSingleton ( );

	system ( "pause" );
}