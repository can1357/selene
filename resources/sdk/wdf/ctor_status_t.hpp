#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ctor_status_t.start.hpp"
namespace wdf
{
    // [class WdfCtorStatus]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ctor_status_t                   
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                
        _m00 int32_t m_constructor_status;  //{ +0x0000    +0x0000    +0x0000    } | .m_ConstructorStatus
                                          
        SDK_MAGIC_PROPERTIES( "WdfCtorStatus.$", 0x4, true, 0xa72b4b6457eb54a3 );                     
        SDK_FIXED_SIZE( ctor_status_t, 0x4 );                     
    };                                    
};
#include "magic/ctor_status_t.end.hpp"
SDK_VERIFY( class wdf::ctor_status_t, 0x4 );
