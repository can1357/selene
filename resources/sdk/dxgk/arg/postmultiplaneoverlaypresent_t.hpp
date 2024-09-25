#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/postmultiplaneoverlaypresent_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_POSTMULTIPLANEOVERLAYPRESENT]
    // => WDK 10 (NV)
    //
    struct postmultiplaneoverlaypresent_t   
    {                                       
        // WDK 10                           
        //                                  
        _m00 uint32_t vid_pn_target_id;       //{ +0x0000    } | .VidPnTargetId
        _m01 uint32_t physical_adapter_mask;  //{ +0x0004    } | .PhysicalAdapterMask
        _m02 uint32_t layer_index;            //{ +0x0008    } | .LayerIndex
        _m03 uint64_t present_id;             //{ +0x0010    } | .PresentID
                                            
        SDK_NONVOL_PROPERTIES( "_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT.$", 0x0, false, 0xe38e8bb9add4a25a );                      
        SDK_FIXED_SIZE( postmultiplaneoverlaypresent_t, 0x18 );                      
    };                                      
};
#include "magic/postmultiplaneoverlaypresent_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::postmultiplaneoverlaypresent_t, 0x18 );
