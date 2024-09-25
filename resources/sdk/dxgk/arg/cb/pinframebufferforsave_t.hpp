#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct mdl_t; }

#include "magic/pinframebufferforsave_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_PINFRAMEBUFFERFORSAVE]
    // => WDK 10 (NV)
    //
    struct pinframebufferforsave_t                    
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint32_t          physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
        _m01 uint64_t          commit_size;             //{ +0x0008    } | .CommitSize
        _m02 struct nt::mdl_t* p_mdl;                   //{ +0x0010    } | .pMdl
                                                      
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_PINFRAMEBUFFERFORSAVE.$", 0x0, false, 0x94ef5892de21e760 );                       
        SDK_FIXED_SIZE( pinframebufferforsave_t, 0x18 );                       
    };                                                
};
#include "magic/pinframebufferforsave_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::pinframebufferforsave_t, 0x18 );
