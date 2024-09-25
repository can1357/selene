#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/sl_hwid_device_info_t.start.hpp"
namespace win
{
    // [struct _SL_HWID_DEVICE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sl_hwid_device_info_t                          
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint32_t               size_bytes;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SizeBytes
        _m01 uint8_t                type;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m02 uint8_t                device_removal_policy;  //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .DeviceRemovalPolicy
        _m03 uint8_t                authentication_status;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .AuthenticationStatus
        _m04 uint8_t                disposition;            //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .Disposition
        _m05 uint32_t               device_node_level;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceNodeLevel
        _m06 struct nt::guid_t      guid;                   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Guid
        _m07 sdk::array<uint8_t, 1> data;                   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Data
                                                          
        SDK_MAGIC_PROPERTIES( "_SL_HWID_DEVICE_INFO.$", 0x20, true, 0x42fbdd7a4816c558 );                      
        SDK_FIXED_SIZE( sl_hwid_device_info_t, 0x20 );                      
    };                                                    
};
#include "magic/sl_hwid_device_info_t.end.hpp"
SDK_VERIFY( struct win::sl_hwid_device_info_t, 0x20 );
