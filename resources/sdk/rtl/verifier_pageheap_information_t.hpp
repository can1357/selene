#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/verifier_pageheap_information_t.start.hpp"
namespace rtl
{
    // [struct _RTL_VERIFIER_PAGEHEAP_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct verifier_pageheap_information_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t size;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t flags;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t heap_flags;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HeapFlags
        _m03 uint32_t extra_flags;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ExtraFlags
        _m04 uint64_t heap_handle;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HeapHandle
                                          
        SDK_MAGIC_PROPERTIES( "_RTL_VERIFIER_PAGEHEAP_INFORMATION.$", 0x18, true, 0x1c884e4a2395d2a );            
        SDK_FIXED_SIZE( verifier_pageheap_information_t, 0x18 );            
    };                                    
};
#include "magic/verifier_pageheap_information_t.end.hpp"
SDK_VERIFY( struct rtl::verifier_pageheap_information_t, 0x18 );
