#pragma once
#include <sdkgen/support_library.hpp>
#include "midl_xmit_defs_0006_t.hpp"

#include "magic/midl_xmit_defs_0007_t.start.hpp"
namespace win
{
    // [struct __MIDL_XmitDefs_0007]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_xmit_defs_0007_t                                          
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                
        _m00 enum win::midl_xmit_defs_0006_t point_of_failure;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pointOfFailure
        _m01 sdk::hresult                    hr_failure;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .hrFailure
        _m02 uint32_t                        size_of_marshaled_error_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .sizeOfMarshaledErrorInfo
        _m03 uint8_t*                        p_marshaled_error_info;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pMarshaledErrorInfo
                                                                          
        SDK_MAGIC_PROPERTIES( "__MIDL_XmitDefs_0007.$", 0x18, true, 0xdea144a299751a70 );                             
        SDK_FIXED_SIZE( midl_xmit_defs_0007_t, 0x18 );                             
    };                                                                    
};
#include "magic/midl_xmit_defs_0007_t.end.hpp"
SDK_VERIFY( struct win::midl_xmit_defs_0007_t, 0x18 );
