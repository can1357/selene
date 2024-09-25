#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/d3dddicb_destroyallocation2flags_t.start.hpp"
namespace nt
{
    // [struct _D3DDDICB_DESTROYALLOCATION2FLAGS]
    // => WDK 10 (NV)
    //
    struct d3dddicb_destroyallocation2flags_t
    {                                        
        // WDK 10                         
        //                                
        _m00 uint1_t  assume_not_in_use;       //{ +0x0000@0  } | .AssumeNotInUse
        _m01 uint1_t  synchronous_destroy;     //{ +0x0000@1  } | .SynchronousDestroy
        _m02 uint1_t  system_use_only;         //{ +0x0000@31 } | .SystemUseOnly
        _m03 uint32_t value;                   //{ +0x0000    } | .Value
                                             
        SDK_NONVOL_PROPERTIES( "_D3DDDICB_DESTROYALLOCATION2FLAGS.$", 0x0, false, 0xa358ea406a7bd995 );                    
        SDK_FIXED_SIZE( d3dddicb_destroyallocation2flags_t, 0x4 );                    
    };                                       
};
#include "magic/d3dddicb_destroyallocation2flags_t.end.hpp"
SDK_VERIFY( struct nt::d3dddicb_destroyallocation2flags_t, 0x4 );
