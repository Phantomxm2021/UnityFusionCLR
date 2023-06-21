#pragma once

#include "../CommonDef.h"

namespace unityfusionclr
{
namespace metadata
{

    class Assembly
    {
    public:
        static void InitializePlaceHolderAssemblies();
        static Il2CppAssembly* LoadFromBytes(const void* assemblyData, uint64_t length, bool copyData);
    private:
        static Il2CppAssembly* Create(const byte* assemblyData, uint64_t length, bool copyData);
    };
}
}