#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }

#include "magic/device_object_t.start.hpp"
namespace mx
{
    // [class MxDeviceObject]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class device_object_t                                
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                               
        _m00 struct nt::device_object_t* m_device_object;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_DeviceObject
                                                         
        SDK_MAGIC_PROPERTIES( "MxDeviceObject.$", 0x8, true, 0x468d45abe2061895 );                
        SDK_FIXED_SIZE( device_object_t, 0x8 );                
    };                                                   
};
#include "magic/device_object_t.end.hpp"
SDK_VERIFY( class mx::device_object_t, 0x8 );
