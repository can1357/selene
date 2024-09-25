#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/deviceinfoflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DEVICEINFOFLAGS]
    // => WDK 10 (NV)
    //
    struct deviceinfoflags_t                         
    {                                                
        // WDK 10                                    
        //                                           
        _m00 uint1_t  guaranteed_dma_buffer_contract;  //{ +0x0000@0  } | .GuaranteedDmaBufferContract
        _m01 uint32_t value;                           //{ +0x0000    } | .Value
                                                     
        SDK_NONVOL_PROPERTIES( "_DXGK_DEVICEINFOFLAGS.$", 0x0, false, 0x315e7e0547ad96f0 );                               
        SDK_FIXED_SIZE( deviceinfoflags_t, 0x4 );                               
    };                                               
};
#include "magic/deviceinfoflags_t.end.hpp"
SDK_VERIFY( struct dxgk::deviceinfoflags_t, 0x4 );
