#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fast_ref_t.start.hpp"
namespace ex
{
    // [struct _EX_FAST_REF]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fast_ref_t         
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 void*    object;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 uint4_t  ref_cnt;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .RefCnt
        _m02 uint64_t value;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                              
        SDK_MAGIC_PROPERTIES( "_EX_FAST_REF.$", 0x8, true, 0x7cdd4227f99bf8f8 );        
        SDK_FIXED_SIZE( fast_ref_t, 0x8 );        
    };                        
};
#include "magic/fast_ref_t.end.hpp"
SDK_VERIFY( struct ex::fast_ref_t, 0x8 );
