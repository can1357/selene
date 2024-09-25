#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct kaffinity_ex_t; }

#include "magic/kaffinity_enumeration_context_t.start.hpp"
namespace win
{
    // [struct _KAFFINITY_ENUMERATION_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kaffinity_enumeration_context_t            
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                            
        _m00 struct nt::kaffinity_ex_t* affinity;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Affinity
        _m01 uint64_t                   current_mask;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentMask
        _m02 uint16_t                   current_index;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CurrentIndex
                                                      
        SDK_MAGIC_PROPERTIES( "_KAFFINITY_ENUMERATION_CONTEXT.$", 0x18, true, 0x524408a1826f9fc7 );              
        SDK_FIXED_SIZE( kaffinity_enumeration_context_t, 0x18 );              
    };                                                
};
#include "magic/kaffinity_enumeration_context_t.end.hpp"
SDK_VERIFY( struct win::kaffinity_enumeration_context_t, 0x18 );
