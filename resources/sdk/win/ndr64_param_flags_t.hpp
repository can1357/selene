#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_param_flags_t.start.hpp"
namespace win
{
    // [struct _NDR64_PARAM_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_param_flags_t              
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                  
        _m00 uint1_t must_size;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MustSize
        _m01 uint1_t must_free;               //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .MustFree
        _m02 uint1_t is_pipe;                 //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .IsPipe
        _m03 uint1_t is_in;                   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .IsIn
        _m04 uint1_t is_out;                  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .IsOut
        _m05 uint1_t is_return;               //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .IsReturn
        _m06 uint1_t is_basetype;             //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .IsBasetype
        _m07 uint1_t is_by_value;             //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .IsByValue
        _m08 uint1_t is_simple_ref;           //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .IsSimpleRef
        _m09 uint1_t is_dont_call_free_inst;  //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .IsDontCallFreeInst
        _m10 uint1_t save_for_async_finish;   //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .SaveForAsyncFinish
        _m11 uint1_t is_partial_ignore;       //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .IsPartialIgnore
        _m12 uint1_t is_force_allocate;       //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .IsForceAllocate
        _m13 uint1_t use_cache;               //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .UseCache
                                            
        SDK_MAGIC_PROPERTIES( "_NDR64_PARAM_FLAGS.$", 0x2, true, 0x189dee63ea5546a3 );                       
        SDK_FIXED_SIZE( ndr64_param_flags_t, 0x2 );                       
    };                                      
};
#include "magic/ndr64_param_flags_t.end.hpp"
SDK_VERIFY( struct win::ndr64_param_flags_t, 0x2 );
