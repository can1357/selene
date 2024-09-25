#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/d3dddicb_signalflags_t.start.hpp"
namespace nt
{
    // [struct _D3DDDICB_SIGNALFLAGS]
    // => WDK 10 (NV)
    //
    struct d3dddicb_signalflags_t                
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint1_t  signal_at_submission;        //{ +0x0000@0  } | .SignalAtSubmission
        _m01 uint1_t  enqueue_cpu_event;           //{ +0x0000@1  } | .EnqueueCpuEvent
        _m02 uint1_t  allow_fence_rewind;          //{ +0x0000@2  } | .AllowFenceRewind
        _m03 uint1_t  dxgk_signal_flag_internal0;  //{ +0x0000@31 } | .DXGK_SIGNAL_FLAG_INTERNAL0
        _m04 uint32_t value;                       //{ +0x0000    } | .Value
                                                 
        SDK_NONVOL_PROPERTIES( "_D3DDDICB_SIGNALFLAGS.$", 0x0, false, 0xc779bd760dd144fc );                           
        SDK_FIXED_SIZE( d3dddicb_signalflags_t, 0x4 );                           
    };                                           
};
#include "magic/d3dddicb_signalflags_t.end.hpp"
SDK_VERIFY( struct nt::d3dddicb_signalflags_t, 0x4 );
