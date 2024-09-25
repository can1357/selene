#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/signalevent_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_SIGNALEVENT]
    // => WDK 10 (NV)
    //
    struct signalevent_t             
    {                                
        // WDK 10                    
        //                           
        _m00 void*    h_dxgk_process;  //{ +0x0000    } | .hDxgkProcess
        _m01 void*    h_event;         //{ +0x0008    } | .hEvent
        _m02 uint32_t flags;           //{ +0x0010    } | .Flags
                                     
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_SIGNALEVENT.$", 0x0, false, 0x4cb22ddd20911bf6 );               
        SDK_FIXED_SIZE( signalevent_t, 0x18 );               
    };                               
};
#include "magic/signalevent_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::signalevent_t, 0x18 );
