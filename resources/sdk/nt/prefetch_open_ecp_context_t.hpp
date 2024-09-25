#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/prefetch_open_ecp_context_t.start.hpp"
namespace nt
{
    // [struct _PREFETCH_OPEN_ECP_CONTEXT]
    // => WDK 10 (NV)
    //
    struct prefetch_open_ecp_context_t
    {                                 
        // WDK 10          
        //                 
        _m00 void* context;             //{ +0x0000    } | .Context
                                      
        SDK_NONVOL_PROPERTIES( "_PREFETCH_OPEN_ECP_CONTEXT.$", 0x0, false, 0xb8cc1a5bf466446d );        
        SDK_FIXED_SIZE( prefetch_open_ecp_context_t, 0x8 );        
    };                                
};
#include "magic/prefetch_open_ecp_context_t.end.hpp"
SDK_VERIFY( struct nt::prefetch_open_ecp_context_t, 0x8 );
