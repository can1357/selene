#pragma once
#include <sdkgen/support_library.hpp>
#include "outputdupl_pointer_position_t.hpp"

#include "magic/outputdupl_frameinfo_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OUTPUTDUPL_FRAMEINFO]
    // => WDK 10 (NV)
    //
    struct outputdupl_frameinfo_t                                                        
    {                                                                                    
        // WDK 10                                                                        
        //                                                                               
        _m00 int64_t                                        last_present_time;             //{ +0x0000    } | .LastPresentTime
        _m01 int64_t                                        last_mouse_update_time;        //{ +0x0008    } | .LastMouseUpdateTime
        _m02 uint32_t                                       accumulated_frames;            //{ +0x0010    } | .AccumulatedFrames
        _m03 int32_t                                        rects_coalesced;               //{ +0x0014    } | .RectsCoalesced
        _m04 int32_t                                        protected_content_masked_out;  //{ +0x0018    } | .ProtectedContentMaskedOut
        _m05 struct d3dk::mt::outputdupl_pointer_position_t pointer_position;              //{ +0x001c    } | .PointerPosition
        _m06 uint32_t                                       total_metadata_buffer_size;    //{ +0x0028    } | .TotalMetadataBufferSize
        _m07 uint32_t                                       pointer_shape_buffer_size;     //{ +0x002c    } | .PointerShapeBufferSize
                                                                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OUTPUTDUPL_FRAMEINFO.$", 0x0, false, 0x575710c7a3315393 );                             
        SDK_FIXED_SIZE( outputdupl_frameinfo_t, 0x30 );                                  
    };                                                                                   
};
#include "magic/outputdupl_frameinfo_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::outputdupl_frameinfo_t, 0x30 );
