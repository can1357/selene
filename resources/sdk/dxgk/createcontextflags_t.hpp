#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/createcontextflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_CREATECONTEXTFLAGS]
    // => WDK 10 (NV)
    //
    struct createcontextflags_t                
    {                                          
        // WDK 10                              
        //                                     
        _m00 uint1_t  system_context;            //{ +0x0000@0  } | .SystemContext
        _m01 uint1_t  gdi_context;               //{ +0x0000@1  } | .GdiContext
        _m02 uint1_t  virtual_addressing;        //{ +0x0000@2  } | .VirtualAddressing
        _m03 uint1_t  system_protected_context;  //{ +0x0000@3  } | .SystemProtectedContext
        _m04 uint1_t  hw_queue_supported;        //{ +0x0000@4  } | .HwQueueSupported
        _m05 uint32_t value;                     //{ +0x0000    } | .Value
                                               
        SDK_NONVOL_PROPERTIES( "_DXGK_CREATECONTEXTFLAGS.$", 0x0, false, 0x85b9372e6ef9f3bc );                         
        SDK_FIXED_SIZE( createcontextflags_t, 0x4 );                         
    };                                         
};
#include "magic/createcontextflags_t.end.hpp"
SDK_VERIFY( struct dxgk::createcontextflags_t, 0x4 );
