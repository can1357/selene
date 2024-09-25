#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/co_access_control_t.start.hpp"
namespace win
{
    // [class COAccessControl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class co_access_control_t 
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                    
        _m00 int32_t m_c_refs;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_cRefs
                              
        SDK_MAGIC_PROPERTIES( "COAccessControl.$", 0x18, true, 0x1a14aab66250a72a );         
        SDK_FIXED_SIZE( co_access_control_t, 0x18 );         
    };                        
};
#include "magic/co_access_control_t.end.hpp"
SDK_VERIFY( class win::co_access_control_t, 0x18 );
