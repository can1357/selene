#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SAM_OPERATION_OBJCHG_INPUT]
    // => WDK 10
    //
    struct sam_operation_objchg_input_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "_SAM_OPERATION_OBJCHG_INPUT.$", 0x0, false, 0xd4fc4b3ad8ff2fc0 );
        SDK_FIXED_SIZE( sam_operation_objchg_input_t, 0x0 );
    };                                 
};
SDK_VERIFY( struct nt::sam_operation_objchg_input_t, 0x0 );
