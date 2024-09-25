#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/miniport_add_device_registration_attributes_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_MINIPORT_ADD_DEVICE_REGISTRATION_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_add_device_registration_attributes_t              
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                            
        _m00 struct ndis::object_header_t header;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                        miniport_add_device_context;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MiniportAddDeviceContext
        _m02 uint32_t                     flags;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_ADD_DEVICE_REGISTRATION_ATTRIBUTES.$", 0x18, true, 0x95c6a0f4d0bf63c );                            
        SDK_FIXED_SIZE( miniport_add_device_registration_attributes_t, 0x18 );                            
    };                                                                
};
#include "magic/miniport_add_device_registration_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_add_device_registration_attributes_t, 0x18 );
