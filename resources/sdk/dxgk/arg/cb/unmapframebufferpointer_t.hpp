#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unmapframebufferpointer_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_UNMAPFRAMEBUFFERPOINTER]
    // => WDK 10 (NV)
    //
    struct unmapframebufferpointer_t         
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
        _m01 void*    p_base_address;          //{ +0x0008    } | .pBaseAddress
                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_UNMAPFRAMEBUFFERPOINTER.$", 0x0, false, 0x3f1be26f2510b1e1 );                       
        SDK_FIXED_SIZE( unmapframebufferpointer_t, 0x10 );                       
    };                                       
};
#include "magic/unmapframebufferpointer_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::unmapframebufferpointer_t, 0x10 );
