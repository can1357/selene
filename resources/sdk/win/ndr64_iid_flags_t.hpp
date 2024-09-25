#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_iid_flags_t.start.hpp"
namespace win
{
    // [struct _NDR64_IID_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_iid_flags_t      
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                        
        _m00 uint1_t constant_iid;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ConstantIID
                                  
        SDK_MAGIC_PROPERTIES( "_NDR64_IID_FLAGS.$", 0x1, true, 0x422f2c98f076a6dc );             
        SDK_FIXED_SIZE( ndr64_iid_flags_t, 0x1 );             
    };                            
};
#include "magic/ndr64_iid_flags_t.end.hpp"
SDK_VERIFY( struct win::ndr64_iid_flags_t, 0x1 );
