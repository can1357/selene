#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cf_access_control_t.start.hpp"
namespace win
{
    // [class CFAccessControl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class cf_access_control_t 
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                    
        _m00 int32_t m_c_refs;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_cRefs
                              
        SDK_MAGIC_PROPERTIES( "CFAccessControl.$", 0x10, true, 0xf38e3a58573a81d3 );         
        SDK_FIXED_SIZE( cf_access_control_t, 0x10 );         
    };                        
};
#include "magic/cf_access_control_t.end.hpp"
SDK_VERIFY( class win::cf_access_control_t, 0x10 );
