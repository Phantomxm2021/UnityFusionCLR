#pragma once

#include "InterpreterDefs.h"

namespace unityfusionclr
{

namespace interpreter
{

	class Interpreter
	{
	public:

		static void Execute(const MethodInfo* methodInfo, StackObject* args, void* ret);

	};

}
}

