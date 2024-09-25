#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/ksfilter_dispatch_t.start.hpp"
namespace ndis
{
    struct ksfilter_t;
    struct ksprocesspin_indexentry_t;

    // [struct _KSFILTER_DISPATCH]
    // => Windows 10 v1607
    //
    struct ksfilter_dispatch_t  
    {                           
        using create_t =  sdk::function<int32_t(struct ndis::ksfilter_t*, struct nt::irp_t*)>*;        
        using close_t =   sdk::function<int32_t(struct ndis::ksfilter_t*, struct nt::irp_t*)>*;        
        using process_t = sdk::function<int32_t(struct ndis::ksfilter_t*, struct ndis::ksprocesspin_indexentry_t*)>*;        
        using reset_t =   sdk::function<int32_t(struct ndis::ksfilter_t*)>*;        
                                
        // Windows 10 v1607        
        //                      
        _m00 create_t   create;   //{ +0x0000    } | .Create
        _m01 close_t    close;    //{ +0x0008    } | .Close
        _m02 process_t  process;  //{ +0x0010    } | .Process
        _m03 reset_t    reset;    //{ +0x0018    } | .Reset
                                
        SDK_MAGIC_PROPERTIES( "_KSFILTER_DISPATCH.$", 0x0, false, 0xed3a8f29464ea2a0 );        
        SDK_FIXED_SIZE( ksfilter_dispatch_t, 0x20 );        
    };                          
};
#include "magic/ksfilter_dispatch_t.end.hpp"
SDK_VERIFY( struct ndis::ksfilter_dispatch_t, 0x20 );
