#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SAM_OPERATION_OBJCHG_OUTPUT]
    // => WDK 10
    //
    struct sam_operation_objchg_output_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "_SAM_OPERATION_OBJCHG_OUTPUT.$", 0x0, false, 0xdfb62e0b499ff796 );
        SDK_FIXED_SIZE( sam_operation_objchg_output_t, 0x0 );
    };                                  
};
SDK_VERIFY( struct nt::sam_operation_objchg_output_t, 0x0 );
