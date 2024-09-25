#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rxact_context_t.start.hpp"
namespace rtl
{
    struct rxact_log_t;

    // [struct _RTL_RXACT_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rxact_context_t                              
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                              
        _m00 void*                    root_registry_key;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RootRegistryKey
        _m01 void*                    r_xact_key;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RXactKey
        _m02 uint8_t                  handles_valid;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HandlesValid
        _m03 struct rtl::rxact_log_t* r_xact_log;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RXactLog
                                                        
        SDK_MAGIC_PROPERTIES( "_RTL_RXACT_CONTEXT.$", 0x20, true, 0xb992fe45bf9032c );                  
        SDK_FIXED_SIZE( rxact_context_t, 0x20 );                  
    };                                                  
};
#include "magic/rxact_context_t.end.hpp"
SDK_VERIFY( struct rtl::rxact_context_t, 0x20 );
