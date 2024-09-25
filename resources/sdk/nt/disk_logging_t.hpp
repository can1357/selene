#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/disk_logging_t.start.hpp"
namespace nt
{
    // [struct _DISK_LOGGING]
    // => WDK 10 (NV)
    //
    struct disk_logging_t            
    {                                
        // WDK 10                    
        //                           
        _m00 uint8_t  function;        //{ +0x0000    } | .Function
        _m01 void*    buffer_address;  //{ +0x0008    } | .BufferAddress
        _m02 uint32_t buffer_size;     //{ +0x0010    } | .BufferSize
                                     
        SDK_NONVOL_PROPERTIES( "_DISK_LOGGING.$", 0x0, false, 0x1d20d480b5f7356c );               
        SDK_FIXED_SIZE( disk_logging_t, 0x18 );               
    };                               
};
#include "magic/disk_logging_t.end.hpp"
SDK_VERIFY( struct nt::disk_logging_t, 0x18 );
