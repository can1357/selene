#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/polldisplaychildren_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_POLLDISPLAYCHILDREN]
    // => WDK 10 (NV)
    //
    struct polldisplaychildren_t           
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint32_t h_adapter;             //{ +0x0000    } | .hAdapter
        _m01 uint1_t  non_destructive_only;  //{ +0x0004@0  } | .NonDestructiveOnly
        _m02 uint1_t  synchronous_polling;   //{ +0x0004@1  } | .SynchronousPolling
        _m03 uint1_t  disable_mode_reset;    //{ +0x0004@2  } | .DisableModeReset
        _m04 uint1_t  poll_all_adapters;     //{ +0x0004@3  } | .PollAllAdapters
        _m05 uint1_t  poll_interruptible;    //{ +0x0004@4  } | .PollInterruptible
                                           
        SDK_NONVOL_PROPERTIES( "_D3DKMT_POLLDISPLAYCHILDREN.$", 0x0, false, 0xf688de3bfb502447 );                     
        SDK_FIXED_SIZE( polldisplaychildren_t, 0x8 );                     
    };                                     
};
#include "magic/polldisplaychildren_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::polldisplaychildren_t, 0x8 );
