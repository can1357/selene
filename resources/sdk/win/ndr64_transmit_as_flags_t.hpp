#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_transmit_as_flags_t.start.hpp"
namespace win
{
    // [struct _NDR64_TRANSMIT_AS_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_transmit_as_flags_t         
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                   
        _m00 uint1_t presented_type_is_array;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PresentedTypeIsArray
        _m01 uint1_t presented_type_align4;    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PresentedTypeAlign4
        _m02 uint1_t presented_type_align8;    //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .PresentedTypeAlign8
                                             
        SDK_MAGIC_PROPERTIES( "_NDR64_TRANSMIT_AS_FLAGS.$", 0x1, true, 0x1e58cfc62d02136d );                        
        SDK_FIXED_SIZE( ndr64_transmit_as_flags_t, 0x1 );                        
    };                                       
};
#include "magic/ndr64_transmit_as_flags_t.end.hpp"
SDK_VERIFY( struct win::ndr64_transmit_as_flags_t, 0x1 );
