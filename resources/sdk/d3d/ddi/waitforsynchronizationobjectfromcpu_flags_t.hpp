#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/waitforsynchronizationobjectfromcpu_flags_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS]
    // => WDK 10 (NV)
    //
    struct waitforsynchronizationobjectfromcpu_flags_t
    {                                                 
        // WDK 10              
        //                     
        _m00 uint1_t  wait_any;                         //{ +0x0000@0  } | .WaitAny
        _m01 uint32_t value;                            //{ +0x0000    } | .Value
                                                      
        SDK_NONVOL_PROPERTIES( "_D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS.$", 0x0, false, 0xd7dc74109b25aa5 );         
        SDK_FIXED_SIZE( waitforsynchronizationobjectfromcpu_flags_t, 0x4 );         
    };                                                
};
#include "magic/waitforsynchronizationobjectfromcpu_flags_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::waitforsynchronizationobjectfromcpu_flags_t, 0x4 );
