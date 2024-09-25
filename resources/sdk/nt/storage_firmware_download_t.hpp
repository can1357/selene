#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_firmware_download_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_FIRMWARE_DOWNLOAD]
    // => WDK 10 (NV)
    //
    struct storage_firmware_download_t        
    {                                         
        // WDK 10                             
        //                                    
        _m00 uint32_t            version;       //{ +0x0000    } | .Version
        _m01 uint32_t            size;          //{ +0x0004    } | .Size
        _m02 uint64_t            offset;        //{ +0x0008    } | .Offset
        _m03 uint64_t            buffer_size;   //{ +0x0010    } | .BufferSize
        _m04 sdk::array<uint8_t> image_buffer;  //{ +0x0018    } | .ImageBuffer
                                              
        SDK_NONVOL_PROPERTIES( "_STORAGE_FIRMWARE_DOWNLOAD.$", 0x0, false, 0x994d293c36b485ce );             
        SDK_FIXED_SIZE( storage_firmware_download_t, 0x18 );             
    };                                        
};
#include "magic/storage_firmware_download_t.end.hpp"
SDK_VERIFY( struct nt::storage_firmware_download_t, 0x18 );
