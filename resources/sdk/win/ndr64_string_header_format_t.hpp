#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr64_string_flags_t.hpp"

#include "magic/ndr64_string_header_format_t.start.hpp"
namespace win
{
    // [struct NDR64_STRING_HEADER_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_string_header_format_t                    
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                 
        _m00 uint8_t                          format_code;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 struct win::ndr64_string_flags_t flags;         //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Flags
        _m02 uint16_t                         element_size;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ElementSize
                                                           
        SDK_MAGIC_PROPERTIES( "NDR64_STRING_HEADER_FORMAT.$", 0x4, true, 0xc4a97fbab4258a13 );             
        SDK_FIXED_SIZE( ndr64_string_header_format_t, 0x4 );             
    };                                                     
};
#include "magic/ndr64_string_header_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_string_header_format_t, 0x4 );
