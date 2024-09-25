#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_user_marshal_flags_t.start.hpp"
namespace win
{
    // [struct _NDR64_USER_MARSHAL_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_user_marshal_flags_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                          
        _m00 uint1_t iid;              //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .IID
        _m01 uint1_t ref_pointer;      //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .RefPointer
        _m02 uint1_t unique_pointer;   //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .UniquePointer
                                     
        SDK_MAGIC_PROPERTIES( "_NDR64_USER_MARSHAL_FLAGS.$", 0x1, true, 0xdb30b4d49ce3cfb2 );               
        SDK_FIXED_SIZE( ndr64_user_marshal_flags_t, 0x1 );               
    };                               
};
#include "magic/ndr64_user_marshal_flags_t.end.hpp"
SDK_VERIFY( struct win::ndr64_user_marshal_flags_t, 0x1 );
