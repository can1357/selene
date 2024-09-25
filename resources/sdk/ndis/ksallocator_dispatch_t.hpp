#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksallocator_dispatch_t.start.hpp"
namespace ndis
{
    struct kspin_t;
    struct ksallocator_framing_t;

    // [struct _KSALLOCATOR_DISPATCH]
    // => Windows 10 v1607
    //
    struct ksallocator_dispatch_t                                    
    {                                                                
        using initialize_allocator_t = sdk::function<int32_t(struct ndis::kspin_t*, struct ndis::ksallocator_framing_t*, void**)>*;                     
                                                                     
        // Windows 10 v1607                                          
        //                                                           
        _m00 initialize_allocator_t             initialize_allocator;  //{ +0x0000    } | .InitializeAllocator
        _m01 sdk::function<void(void*)>*        delete_allocator;      //{ +0x0008    } | .DeleteAllocator
        _m02 sdk::function<void*(void*)>*       allocate;              //{ +0x0010    } | .Allocate
        _m03 sdk::function<void(void*, void*)>* free;                  //{ +0x0018    } | .Free
                                                                     
        SDK_MAGIC_PROPERTIES( "_KSALLOCATOR_DISPATCH.$", 0x0, false, 0xc711f8ad71d82fb4 );                     
        SDK_FIXED_SIZE( ksallocator_dispatch_t, 0x20 );                     
    };                                                               
};
#include "magic/ksallocator_dispatch_t.end.hpp"
SDK_VERIFY( struct ndis::ksallocator_dispatch_t, 0x20 );
