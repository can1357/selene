#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct driver_object_t; }

#include "magic/driver_object_t.start.hpp"
namespace mx
{
    // [class MxDriverObject]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class driver_object_t                                
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                               
        _m00 struct nt::driver_object_t* m_driver_object;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_DriverObject
                                                         
        SDK_MAGIC_PROPERTIES( "MxDriverObject.$", 0x8, true, 0xeab1e99e5100eb09 );                
        SDK_FIXED_SIZE( driver_object_t, 0x8 );                
    };                                                   
};
#include "magic/driver_object_t.end.hpp"
SDK_VERIFY( class mx::driver_object_t, 0x8 );
