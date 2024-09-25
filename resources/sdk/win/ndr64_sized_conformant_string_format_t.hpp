#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr64_string_header_format_t.hpp"

#include "magic/ndr64_sized_conformant_string_format_t.start.hpp"
namespace win
{
    // [struct NDR64_SIZED_CONFORMANT_STRING_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_sized_conformant_string_format_t                      
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                             
        _m00 struct win::ndr64_string_header_format_t header;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 const void*                              size_description;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SizeDescription
                                                                       
        SDK_MAGIC_PROPERTIES( "NDR64_SIZED_CONFORMANT_STRING_FORMAT.$", 0x10, true, 0x28ed9d10aadc9ba5 );                 
        SDK_FIXED_SIZE( ndr64_sized_conformant_string_format_t, 0x10 );                 
    };                                                                 
};
#include "magic/ndr64_sized_conformant_string_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_sized_conformant_string_format_t, 0x10 );
