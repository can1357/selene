#pragma once
#include <sdkgen/support_library.hpp>
#include "vamgr_vaspace_t.hpp"
#include "vamgr_allocator_t.hpp"

#include "magic/vamgr_ctx_t.start.hpp"
namespace heap
{
    // [struct _HEAP_VAMGR_CTX]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vamgr_ctx_t                                                       
    {                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                   
        _m00 struct heap::vamgr_vaspace_t                    va_space;         //{ +0x0000    +0x0000    +0x0000    } | .VaSpace
        _m01 uint64_t                                        allocator_lock;   //{ +0x0860    +0x0860    +0x0860    } | .AllocatorLock
        _m02 uint32_t                                        allocator_count;  //{ +0x0868    +0x0868    +0x0868    } | .AllocatorCount
        _m03 sdk::array<struct heap::vamgr_allocator_t, 255> allocators;       //{ +0x0870    +0x0870    +0x0870    } | .Allocators
                                                                             
        SDK_MAGIC_PROPERTIES( "_HEAP_VAMGR_CTX.$", 0x3840, true, 0x237def64ecf8d8c3 );                
        SDK_FIXED_SIZE( vamgr_ctx_t, 0x3840 );                               
    };                                                                       
};
#include "magic/vamgr_ctx_t.end.hpp"
SDK_VERIFY( struct heap::vamgr_ctx_t, 0x3840 );
