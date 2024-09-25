#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/run_once_t.hpp"

namespace ntdll { struct segment_heap_t; }

#include "magic/hp_metadata_heap_ctx_t.start.hpp"
namespace rtlp
{
    // [struct _RTLP_HP_METADATA_HEAP_CTX]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hp_metadata_heap_ctx_t                    
    {                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                           
        _m00 struct ntdll::segment_heap_t* heap;       //{ +0x0000    +0x0000    +0x0000    } | .Heap
        _m01 union rtl::run_once_t         init_once;  //{ +0x0008    +0x0008    +0x0008    } | .InitOnce
                                                     
        SDK_MAGIC_PROPERTIES( "_RTLP_HP_METADATA_HEAP_CTX.$", 0x10, true, 0xdce169cf61e24fc9 );          
        SDK_FIXED_SIZE( hp_metadata_heap_ctx_t, 0x10 );          
    };                                               
};
#include "magic/hp_metadata_heap_ctx_t.end.hpp"
SDK_VERIFY( struct rtlp::hp_metadata_heap_ctx_t, 0x10 );
