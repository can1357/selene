#pragma once
#include <sdkgen/support_library.hpp>
#include "track_data_t.hpp"

#include "magic/cdrom_toc_t.start.hpp"
namespace nt
{
    // [struct _CDROM_TOC]
    // => WDK 10 (NV)
    //
    struct cdrom_toc_t                                            
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 sdk::array<uint8_t, 2>                   length;       //{ +0x0000    } | .Length
        _m01 uint8_t                                  first_track;  //{ +0x0002    } | .FirstTrack
        _m02 uint8_t                                  last_track;   //{ +0x0003    } | .LastTrack
        _m03 sdk::array<struct nt::track_data_t, 100> track_data;   //{ +0x0004    } | .TrackData
                                                                  
        SDK_NONVOL_PROPERTIES( "_CDROM_TOC.$", 0x0, false, 0x38fbf4fcd02ff7e );            
        SDK_FIXED_SIZE( cdrom_toc_t, 0x324 );                     
    };                                                            
};
#include "magic/cdrom_toc_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_toc_t, 0x324 );
