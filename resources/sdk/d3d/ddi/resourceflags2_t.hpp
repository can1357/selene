#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resourceflags2_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_RESOURCEFLAGS2]
    // => WDK 10 (NV)
    //
    struct resourceflags2_t          
    {                                
        // WDK 10                    
        //                           
        _m00 uint1_t  video_encoder;   //{ +0x0000@0  } | .VideoEncoder
        _m01 uint1_t  user_memory;     //{ +0x0000@1  } | .UserMemory
        _m02 uint1_t  cross_adapter;   //{ +0x0000@2  } | .CrossAdapter
        _m03 uint1_t  is_displayable;  //{ +0x0000@3  } | .IsDisplayable
        _m04 uint32_t value;           //{ +0x0000    } | .Value
                                     
        SDK_NONVOL_PROPERTIES( "_D3DDDI_RESOURCEFLAGS2.$", 0x0, false, 0x39200a67320fae9a );               
        SDK_FIXED_SIZE( resourceflags2_t, 0x4 );               
    };                               
};
#include "magic/resourceflags2_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::resourceflags2_t, 0x4 );
