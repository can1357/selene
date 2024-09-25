#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_pointer_instance_header_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_pointer_instance_header_format_t
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t offset;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Offset
                                                 
        SDK_MAGIC_PROPERTIES( "_NDR64_POINTER_INSTANCE_HEADER_FORMAT.$", 0x8, true, 0x7841fdeb7cdb3155 );       
        SDK_FIXED_SIZE( ndr64_pointer_instance_header_format_t, 0x8 );       
    };                                           
};
#include "magic/ndr64_pointer_instance_header_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_pointer_instance_header_format_t, 0x8 );
