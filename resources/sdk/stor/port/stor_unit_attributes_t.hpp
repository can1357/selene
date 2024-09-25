#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_unit_attributes_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_UNIT_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_unit_attributes_t                 
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                        
        _m00 uint1_t device_attention_supported;    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DeviceAttentionSupported
        _m01 uint1_t async_notification_supported;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .AsyncNotificationSupported
        _m02 uint1_t d3_cold_not_supported;         //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .D3ColdNotSupported
                                                  
        SDK_MAGIC_PROPERTIES( "_STOR_UNIT_ATTRIBUTES.$", 0x4, true, 0xc9450b9b5cbf1a87 );                             
        SDK_FIXED_SIZE( stor_unit_attributes_t, 0x4 );                             
    };                                            
};
#include "magic/stor_unit_attributes_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_unit_attributes_t, 0x4 );
