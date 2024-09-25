#pragma once
#include <sdkgen/support_library.hpp>
#include "track_mode_type_t.hpp"

#include "magic/raw_read_info_t.start.hpp"
namespace nt
{
    // [struct __RAW_READ_INFO]
    // => WDK 10 (NV)
    //
    struct raw_read_info_t                           
    {                                                
        // WDK 10                                    
        //                                           
        _m00 int64_t                    disk_offset;   //{ +0x0000    } | .DiskOffset
        _m01 uint32_t                   sector_count;  //{ +0x0008    } | .SectorCount
        _m02 enum nt::track_mode_type_t track_mode;    //{ +0x000c    } | .TrackMode
                                                     
        SDK_NONVOL_PROPERTIES( "__RAW_READ_INFO.$", 0x0, false, 0x4b470b8c68f0c809 );             
        SDK_FIXED_SIZE( raw_read_info_t, 0x10 );             
    };                                               
};
#include "magic/raw_read_info_t.end.hpp"
SDK_VERIFY( struct nt::raw_read_info_t, 0x10 );
