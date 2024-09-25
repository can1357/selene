#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_hw_firmware_download_v2_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_HW_FIRMWARE_DOWNLOAD_V2]
    // => WDK 10 (NV)
    //
    struct storage_hw_firmware_download_v2_t     
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint32_t               version;       //{ +0x0000    } | .Version
        _m01 uint32_t               size;          //{ +0x0004    } | .Size
        _m02 uint32_t               flags;         //{ +0x0008    } | .Flags
        _m03 uint8_t                slot;          //{ +0x000c    } | .Slot
        _m04 uint64_t               offset;        //{ +0x0010    } | .Offset
        _m05 uint64_t               buffer_size;   //{ +0x0018    } | .BufferSize
        _m06 uint32_t               image_size;    //{ +0x0020    } | .ImageSize
        _m07 sdk::array<uint8_t, 1> image_buffer;  //{ +0x0028    } | .ImageBuffer
                                                 
        SDK_NONVOL_PROPERTIES( "_STORAGE_HW_FIRMWARE_DOWNLOAD_V2.$", 0x0, false, 0x4d2f51ca3523db2d );             
        SDK_FIXED_SIZE( storage_hw_firmware_download_v2_t, 0x30 );             
    };                                           
};
#include "magic/storage_hw_firmware_download_v2_t.end.hpp"
SDK_VERIFY( struct nt::storage_hw_firmware_download_v2_t, 0x30 );
