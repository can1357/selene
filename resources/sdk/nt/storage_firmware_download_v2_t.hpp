#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_firmware_download_v2_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_FIRMWARE_DOWNLOAD_V2]
    // => WDK 10 (NV)
    //
    struct storage_firmware_download_v2_t     
    {                                         
        // WDK 10                             
        //                                    
        _m00 uint32_t            version;       //{ +0x0000    } | .Version
        _m01 uint32_t            size;          //{ +0x0004    } | .Size
        _m02 uint64_t            offset;        //{ +0x0008    } | .Offset
        _m03 uint64_t            buffer_size;   //{ +0x0010    } | .BufferSize
        _m04 uint8_t             slot;          //{ +0x0018    } | .Slot
        _m05 uint32_t            image_size;    //{ +0x001c    } | .ImageSize
        _m06 sdk::array<uint8_t> image_buffer;  //{ +0x0020    } | .ImageBuffer
                                              
        SDK_NONVOL_PROPERTIES( "_STORAGE_FIRMWARE_DOWNLOAD_V2.$", 0x0, false, 0x1bbb7a50700e5732 );             
        SDK_FIXED_SIZE( storage_firmware_download_v2_t, 0x20 );             
    };                                        
};
#include "magic/storage_firmware_download_v2_t.end.hpp"
SDK_VERIFY( struct nt::storage_firmware_download_v2_t, 0x20 );
