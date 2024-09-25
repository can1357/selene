#pragma once
#include <sdkgen/support_library.hpp>
#include "wake_source_header_t.hpp"

#include "magic/wake_source_device_t.start.hpp"
namespace po
{
    // [struct _PO_WAKE_SOURCE_DEVICE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wake_source_device_t                            
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                 
        _m00 struct po::wake_source_header_t header;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::array<wchar_t, 1>          instance_path;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InstancePath
                                                           
        SDK_MAGIC_PROPERTIES( "_PO_WAKE_SOURCE_DEVICE.$", 0xc, true, 0x2c2d51d85ba8ac );              
        SDK_FIXED_SIZE( wake_source_device_t, 0xc );              
    };                                                     
};
#include "magic/wake_source_device_t.end.hpp"
SDK_VERIFY( struct po::wake_source_device_t, 0xc );
