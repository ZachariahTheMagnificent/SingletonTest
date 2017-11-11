#pragma once

template<class Type>
struct Singleton
{
	static int& Get ( )
	{
		static int value;

		return value;
	}
};