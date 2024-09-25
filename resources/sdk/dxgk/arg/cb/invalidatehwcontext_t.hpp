#pragma once
#include <sdkgen/support_library.hpp>
#include "../../invalidatehwcontextflags_t.hpp"

#include "magic/invalidatehwcontext_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_INVALIDATEHWCONTEXT]
    // => WDK 10 (NV)
    //
    struct invalidatehwcontext_t                                  
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 void*                                   h_adapter;     //{ +0x0000    } | .hAdapter
        _m01 void*                                   h_hw_context;  //{ +0x0008    } | .hHwContext
        _m02 struct dxgk::invalidatehwcontextflags_t flags;         //{ +0x0010    } | .Flags
                                                                  
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_INVALIDATEHWCONTEXT.$", 0x0, false, 0x10b7a5c7b5a58c21 );             
        SDK_FIXED_SIZE( invalidatehwcontext_t, 0x18 );             
    };                                                            
};
#include "magic/invalidatehwcontext_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::invalidatehwcontext_t, 0x18 );
