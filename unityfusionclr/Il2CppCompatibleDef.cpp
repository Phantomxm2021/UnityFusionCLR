#include "Il2CppCompatibleDef.h"

#include "metadata/MetadataModule.h"
#include "interpreter/InterpreterModule.h"


namespace unityfusionclr
{
	Il2CppMethodPointer InitAndGetInterpreterDirectlyCallMethodPointerSlow(MethodInfo* method)
	{
		IL2CPP_ASSERT(!method->initInterpCallMethodPointer);
		method->initInterpCallMethodPointer = true;
		bool isAdjustorThunkMethod = IS_CLASS_VALUE_TYPE(method->klass) && unityfusionclr::metadata::IsInstanceMethod(method);
		if (unityfusionclr::metadata::MetadataModule::IsImplementedByInterpreter(method))
		{
			method->methodPointerCallByInterp = interpreter::InterpreterModule::GetMethodPointer(method);
			if (isAdjustorThunkMethod)
			{
				method->virtualMethodPointerCallByInterp = interpreter::InterpreterModule::GetAdjustThunkMethodPointer(method);
			}
			else
			{
				method->virtualMethodPointerCallByInterp = method->methodPointerCallByInterp;
			}
			if (method->invoker_method == nullptr)
			{
				method->invoker_method = unityfusionclr::interpreter::InterpreterModule::GetMethodInvoker(method);
			}
#if UNITYFUSIONCLR_UNITY_2021_OR_NEW
			if (method->methodPointer == nullptr)
			{
				method->methodPointer = method->methodPointerCallByInterp;
			}
			if (method->virtualMethodPointer == nullptr)
			{
				method->virtualMethodPointer = method->virtualMethodPointerCallByInterp;
			}
#else
			if (method->methodPointer == nullptr)
			{
				method->methodPointer = method->virtualMethodPointerCallByInterp;
			}
#endif
			method->isInterpterImpl = true;
		}
		return method->methodPointerCallByInterp;
	}
}