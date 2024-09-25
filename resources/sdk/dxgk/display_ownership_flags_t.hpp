#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/display_ownership_flags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DISPLAY_OWNERSHIP_FLAGS]
    // => WDK 10 (NV)
    //
    struct display_ownership_flags_t     
    {                                    
        // WDK 10                        
        //                               
        _m00 int4_t   frame_buffer_state;  //{ +0x0000@0  } | .FrameBufferState
        _m01 uint32_t value;               //{ +0x0000    } | .Value
                                         
        SDK_NONVOL_PROPERTIES( "_DXGK_DISPLAY_OWNERSHIP_FLAGS.$", 0x0, false, 0xfe002cc7719620ef );                   
        SDK_FIXED_SIZE( display_ownership_flags_t, 0x4 );                   
    };                                   
};
#include "magic/display_ownership_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::display_ownership_flags_t, 0x4 );
