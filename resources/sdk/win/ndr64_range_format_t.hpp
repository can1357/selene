#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_range_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_RANGE_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_range_format_t  
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                       
        _m00 uint8_t format_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 uint8_t range_type;   //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .RangeType
        _m02 int64_t min_value;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MinValue
        _m03 int64_t max_value;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaxValue
                                 
        SDK_MAGIC_PROPERTIES( "_NDR64_RANGE_FORMAT.$", 0x18, true, 0x7fb3b39dfef3e710 );            
        SDK_FIXED_SIZE( ndr64_range_format_t, 0x18 );            
    };                           
};
#include "magic/ndr64_range_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_range_format_t, 0x18 );
