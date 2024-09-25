#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tape_wmi_operations_t.start.hpp"
namespace win
{
    // [struct _TAPE_WMI_OPERATIONS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct tape_wmi_operations_t       
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t method;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Method
        _m01 uint32_t data_buffer_size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DataBufferSize
        _m02 void*    data_buffer;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DataBuffer
                                       
        SDK_NONVOL_PROPERTIES( "_TAPE_WMI_OPERATIONS.$", 0x10, true, 0xbcfe4b1ed9722598 );                 
        SDK_FIXED_SIZE( tape_wmi_operations_t, 0x10 );                 
    };                                 
};
#include "magic/tape_wmi_operations_t.end.hpp"
SDK_VERIFY( struct win::tape_wmi_operations_t, 0x10 );
