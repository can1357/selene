#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/queryprocessofferinfo_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERYPROCESSOFFERINFO]
    // => WDK 10 (NV)
    //
    struct queryprocessofferinfo_t        
    {                                     
        // WDK 10                         
        //                                
        _m00 uint32_t cb_size;              //{ +0x0000    } | .cbSize
        _m01 void*    h_process;            //{ +0x0008    } | .hProcess
        _m02 uint64_t decommit_uniqueness;  //{ +0x0010    } | .DecommitUniqueness
        _m03 uint64_t decommittable_bytes;  //{ +0x0018    } | .DecommittableBytes
                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERYPROCESSOFFERINFO.$", 0x0, false, 0xf2354613364ebf1a );                    
        SDK_FIXED_SIZE( queryprocessofferinfo_t, 0x20 );                    
    };                                    
};
#include "magic/queryprocessofferinfo_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::queryprocessofferinfo_t, 0x20 );
