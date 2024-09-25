#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/facs_t.start.hpp"
namespace nt
{
    // [struct _FACS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct facs_t                              
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t signature;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t length;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m02 uint32_t hardware_signature;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HardwareSignature
        _m03 uint32_t p_firmware_waking_vector;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .pFirmwareWakingVector
        _m04 uint32_t global_lock;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .GlobalLock
        _m05 uint32_t flags;                     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Flags
        _m06 int64_t  x_firmware_waking_vector;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .x_FirmwareWakingVector
        _m07 uint8_t  version;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .version
                                               
        SDK_MAGIC_PROPERTIES( "_FACS.$", 0x40, true, 0x74808b57d3d38c4c );                         
        SDK_FIXED_SIZE( facs_t, 0x40 );                         
    };                                         
};
#include "magic/facs_t.end.hpp"
SDK_VERIFY( struct nt::facs_t, 0x40 );
