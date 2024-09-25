#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr64_array_flags_t.hpp"

#include "magic/ndr64_bogus_array_header_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_BOGUS_ARRAY_HEADER_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_bogus_array_header_format_t                 
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                   
        _m00 uint8_t                         format_code;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 uint8_t                         alignment;        //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Alignment
        _m02 struct win::ndr64_array_flags_t flags;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m03 uint8_t                         number_dims;      //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .NumberDims
        _m04 uint32_t                        number_elements;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberElements
        _m05 const void*                     element;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Element
                                                             
        SDK_MAGIC_PROPERTIES( "_NDR64_BOGUS_ARRAY_HEADER_FORMAT.$", 0x10, true, 0x222530f292989da9 );                
        SDK_FIXED_SIZE( ndr64_bogus_array_header_format_t, 0x10 );                
    };                                                       
};
#include "magic/ndr64_bogus_array_header_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_bogus_array_header_format_t, 0x10 );
