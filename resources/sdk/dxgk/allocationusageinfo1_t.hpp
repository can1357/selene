#pragma once
#include <sdkgen/support_library.hpp>
#include "../kuser/d3dddiformat_t.hpp"

#include "magic/allocationusageinfo1_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_ALLOCATIONUSAGEINFO1]
    // => WDK 10 (NV)
    //
    struct allocationusageinfo1_t                        
    {                                                    
        union u0_flags_t                                 
        {                                                
            // WDK 10                                    
            //                                           
            _m00 uint1_t  private_format;                  //{ +0x0000@0  } | .PrivateFormat
            _m01 uint1_t  swizzled;                        //{ +0x0000@1  } | .Swizzled
            _m02 uint1_t  mip_map;                         //{ +0x0000@2  } | .MipMap
            _m03 uint1_t  cube;                            //{ +0x0000@3  } | .Cube
            _m04 uint1_t  volume;                          //{ +0x0000@4  } | .Volume
            _m05 uint1_t  vertex;                          //{ +0x0000@5  } | .Vertex
            _m06 uint1_t  index;                           //{ +0x0000@6  } | .Index
            _m07 uint32_t value;                           //{ +0x0000    } | .Value
                                                         
            SDK_NONVOL_PROPERTIES( "_DXGK_ALLOCATIONUSAGEINFO1.Flags.$", 0x0, false, 0x9d41915b83132b7c );                               
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                               
        };                                               
                                                         
        // WDK 10                                        
        //                                               
        _m08 u0_flags_t                  flags;            //{ +0x0000    } | .Flags
        _m09 enum kuser::d3dddiformat_t  format;           //{ +0x0004    } | .Format
        _m10 uint32_t                    private_format;   //{ +0x0004    } | .PrivateFormat
        _m11 uint32_t                    swizzled_format;  //{ +0x0008    } | .SwizzledFormat
        _m12 uint32_t                    byte_offset;      //{ +0x000c    } | .ByteOffset
        _m13 uint32_t                    width;            //{ +0x0010    } | .Width
        _m14 uint32_t                    height;           //{ +0x0014    } | .Height
        _m15 uint32_t                    pitch;            //{ +0x0018    } | .Pitch
        _m16 uint32_t                    depth;            //{ +0x001c    } | .Depth
        _m17 uint32_t                    slice_pitch;      //{ +0x0020    } | .SlicePitch
                                                         
        SDK_NONVOL_PROPERTIES( "_DXGK_ALLOCATIONUSAGEINFO1.$", 0x0, false, 0x33b497db8f67ba80 );                
        SDK_FIXED_SIZE( allocationusageinfo1_t, 0x24 );                
    };                                                   
};
#include "magic/allocationusageinfo1_t.end.hpp"
SDK_VERIFY( union dxgk::allocationusageinfo1_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct dxgk::allocationusageinfo1_t, 0x24 );
