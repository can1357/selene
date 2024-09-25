#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/knonvolatile_context_pointers_arm64_t.start.hpp"
namespace win
{
    // [struct _KNONVOLATILE_CONTEXT_POINTERS_ARM64]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct knonvolatile_context_pointers_arm64_t
    {                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                 
        _m00 uint64_t* x19;                       //{ +0x0000    +0x0000    +0x0000    } | .X19
        _m01 uint64_t* x20;                       //{ +0x0008    +0x0008    +0x0008    } | .X20
        _m02 uint64_t* x21;                       //{ +0x0010    +0x0010    +0x0010    } | .X21
        _m03 uint64_t* x22;                       //{ +0x0018    +0x0018    +0x0018    } | .X22
        _m04 uint64_t* x23;                       //{ +0x0020    +0x0020    +0x0020    } | .X23
        _m05 uint64_t* x24;                       //{ +0x0028    +0x0028    +0x0028    } | .X24
        _m06 uint64_t* x25;                       //{ +0x0030    +0x0030    +0x0030    } | .X25
        _m07 uint64_t* x26;                       //{ +0x0038    +0x0038    +0x0038    } | .X26
        _m08 uint64_t* x27;                       //{ +0x0040    +0x0040    +0x0040    } | .X27
        _m09 uint64_t* x28;                       //{ +0x0048    +0x0048    +0x0048    } | .X28
        _m10 uint64_t* fp;                        //{ +0x0050    +0x0050    +0x0050    } | .Fp
        _m11 uint64_t* lr;                        //{ +0x0058    +0x0058    +0x0058    } | .Lr
        _m12 uint64_t* d8;                        //{ +0x0060    +0x0060    +0x0060    } | .D8
        _m13 uint64_t* d9;                        //{ +0x0068    +0x0068    +0x0068    } | .D9
        _m14 uint64_t* d10;                       //{ +0x0070    +0x0070    +0x0070    } | .D10
        _m15 uint64_t* d11;                       //{ +0x0078    +0x0078    +0x0078    } | .D11
        _m16 uint64_t* d12;                       //{ +0x0080    +0x0080    +0x0080    } | .D12
        _m17 uint64_t* d13;                       //{ +0x0088    +0x0088    +0x0088    } | .D13
        _m18 uint64_t* d14;                       //{ +0x0090    +0x0090    +0x0090    } | .D14
        _m19 uint64_t* d15;                       //{ +0x0098    +0x0098    +0x0098    } | .D15
                                                
        SDK_MAGIC_PROPERTIES( "_KNONVOLATILE_CONTEXT_POINTERS_ARM64.$", 0xa0, true, 0xeaad0c506dc6faad );    
        SDK_FIXED_SIZE( knonvolatile_context_pointers_arm64_t, 0xa0 );    
    };                                          
};
#include "magic/knonvolatile_context_pointers_arm64_t.end.hpp"
SDK_VERIFY( struct win::knonvolatile_context_pointers_arm64_t, 0xa0 );
