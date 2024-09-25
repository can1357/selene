#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/num_modes_t.start.hpp"
namespace video
{
    // [struct _VIDEO_NUM_MODES]
    // => WDK 10 (NV)
    //
    struct num_modes_t                        
    {                                         
        // WDK 10                             
        //                                    
        _m00 uint32_t num_modes;                //{ +0x0000    } | .NumModes
        _m01 uint32_t mode_information_length;  //{ +0x0004    } | .ModeInformationLength
                                              
        SDK_NONVOL_PROPERTIES( "_VIDEO_NUM_MODES.$", 0x0, false, 0x6875876588f86ab0 );                        
        SDK_FIXED_SIZE( num_modes_t, 0x8 );                        
    };                                        
};
#include "magic/num_modes_t.end.hpp"
SDK_VERIFY( struct video::num_modes_t, 0x8 );
