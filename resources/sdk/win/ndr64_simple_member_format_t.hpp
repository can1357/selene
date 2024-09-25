#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_simple_member_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_SIMPLE_MEMBER_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_simple_member_format_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                       
        _m00 uint8_t format_code;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
                                       
        SDK_MAGIC_PROPERTIES( "_NDR64_SIMPLE_MEMBER_FORMAT.$", 0x8, true, 0xebb4472c2693ae4d );            
        SDK_FIXED_SIZE( ndr64_simple_member_format_t, 0x8 );            
    };                                 
};
#include "magic/ndr64_simple_member_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_simple_member_format_t, 0x8 );
