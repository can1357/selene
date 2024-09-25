#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unpinframebufferforsave_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_UNPINFRAMEBUFFERFORSAVE]
    // => WDK 10 (NV)
    //
    struct unpinframebufferforsave_t         
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_UNPINFRAMEBUFFERFORSAVE.$", 0x0, false, 0x1de4cdb55372caaa );                       
        SDK_FIXED_SIZE( unpinframebufferforsave_t, 0x4 );                       
    };                                       
};
#include "magic/unpinframebufferforsave_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::unpinframebufferforsave_t, 0x4 );
