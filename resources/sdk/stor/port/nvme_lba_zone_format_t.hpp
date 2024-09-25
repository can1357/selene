#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_lba_zone_format_t.start.hpp"
namespace stor::port
{
    // [struct NVME_LBA_ZONE_FORMAT]
    // => Windows 11
    //
    struct nvme_lba_zone_format_t
    {                            
        // Windows 11           
        //                      
        _m00 uint64_t zone_size;   //{ +0x0000    } | .ZoneSize
        _m01 uint8_t  zdes;        //{ +0x0008    } | .ZDES
                                 
        SDK_MAGIC_PROPERTIES( "NVME_LBA_ZONE_FORMAT.$", 0x0, false, 0x8e17d3a8325720be );          
        SDK_FIXED_SIZE( nvme_lba_zone_format_t, 0x10 );          
    };                           
};
#include "magic/nvme_lba_zone_format_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_lba_zone_format_t, 0x10 );
