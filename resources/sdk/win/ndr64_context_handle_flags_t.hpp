#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_context_handle_flags_t.start.hpp"
namespace win
{
    // [struct _NDR64_CONTEXT_HANDLE_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_context_handle_flags_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                          
        _m00 uint1_t cannot_be_null;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CannotBeNull
        _m01 uint1_t serialize;          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Serialize
        _m02 uint1_t no_serialize;       //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .NoSerialize
        _m03 uint1_t strict;             //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Strict
        _m04 uint1_t is_return;          //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .IsReturn
        _m05 uint1_t is_out;             //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .IsOut
        _m06 uint1_t is_in;              //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .IsIn
        _m07 uint1_t is_via_pointer;     //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .IsViaPointer
                                       
        SDK_MAGIC_PROPERTIES( "_NDR64_CONTEXT_HANDLE_FLAGS.$", 0x1, true, 0xd497b5402211ff24 );               
        SDK_FIXED_SIZE( ndr64_context_handle_flags_t, 0x1 );               
    };                                 
};
#include "magic/ndr64_context_handle_flags_t.end.hpp"
SDK_VERIFY( struct win::ndr64_context_handle_flags_t, 0x1 );
