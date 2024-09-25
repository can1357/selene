#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/palette_data_t.start.hpp"
namespace video
{
    // [struct _VIDEO_PALETTE_DATA]
    // => WDK 10 (NV)
    //
    struct palette_data_t                        
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint16_t                num_entries;  //{ +0x0000    } | .NumEntries
        _m01 uint16_t                first_entry;  //{ +0x0002    } | .FirstEntry
        _m02 sdk::array<uint16_t, 1> colors;       //{ +0x0004    } | .Colors
                                                 
        SDK_NONVOL_PROPERTIES( "_VIDEO_PALETTE_DATA.$", 0x0, false, 0x7a9929bcf646e8b7 );            
        SDK_FIXED_SIZE( palette_data_t, 0x6 );            
    };                                           
};
#include "magic/palette_data_t.end.hpp"
SDK_VERIFY( struct video::palette_data_t, 0x6 );
