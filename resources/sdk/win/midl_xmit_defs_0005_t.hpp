#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_xmit_defs_0005_t.start.hpp"
namespace win
{
    // [struct __MIDL_XmitDefs_0005]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_xmit_defs_0005_t                
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint32_t size_of_marshaled_results;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .sizeOfMarshaledResults
        _m01 uint8_t* p_marshaled_results;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pMarshaledResults
                                                
        SDK_MAGIC_PROPERTIES( "__MIDL_XmitDefs_0005.$", 0x10, true, 0x245c6c8928e04799 );                          
        SDK_FIXED_SIZE( midl_xmit_defs_0005_t, 0x10 );                          
    };                                          
};
#include "magic/midl_xmit_defs_0005_t.end.hpp"
SDK_VERIFY( struct win::midl_xmit_defs_0005_t, 0x10 );
