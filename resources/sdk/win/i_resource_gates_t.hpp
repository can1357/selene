#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IResourceGates]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_resource_gates_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IResourceGates.$", 0x8, true, 0x5e073dae94204b79 );
        SDK_FIXED_SIZE( i_resource_gates_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_resource_gates_t, 0x8 );
