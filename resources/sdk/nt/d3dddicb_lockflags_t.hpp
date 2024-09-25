#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/d3dddicb_lockflags_t.start.hpp"
namespace nt
{
    // [struct _D3DDDICB_LOCKFLAGS]
    // => WDK 10 (NV)
    //
    struct d3dddicb_lockflags_t             
    {                                       
        // WDK 10                           
        //                                  
        _m00 uint1_t  read_only;              //{ +0x0000@0  } | .ReadOnly
        _m01 uint1_t  write_only;             //{ +0x0000@1  } | .WriteOnly
        _m02 uint1_t  donot_wait;             //{ +0x0000@2  } | .DonotWait
        _m03 uint1_t  ignore_sync;            //{ +0x0000@3  } | .IgnoreSync
        _m04 uint1_t  lock_entire;            //{ +0x0000@4  } | .LockEntire
        _m05 uint1_t  donot_evict;            //{ +0x0000@5  } | .DonotEvict
        _m06 uint1_t  acquire_aperture;       //{ +0x0000@6  } | .AcquireAperture
        _m07 uint1_t  discard;                //{ +0x0000@7  } | .Discard
        _m08 uint1_t  no_existing_reference;  //{ +0x0000@8  } | .NoExistingReference
        _m09 uint1_t  use_alternate_va;       //{ +0x0000@9  } | .UseAlternateVA
        _m10 uint1_t  ignore_read_sync;       //{ +0x0000@10 } | .IgnoreReadSync
        _m11 uint32_t value;                  //{ +0x0000    } | .Value
                                            
        SDK_NONVOL_PROPERTIES( "_D3DDDICB_LOCKFLAGS.$", 0x0, false, 0x31e7f99139bc0feb );                      
        SDK_FIXED_SIZE( d3dddicb_lockflags_t, 0x4 );                      
    };                                      
};
#include "magic/d3dddicb_lockflags_t.end.hpp"
SDK_VERIFY( struct nt::d3dddicb_lockflags_t, 0x4 );
