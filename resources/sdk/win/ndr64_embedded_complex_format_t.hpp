#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_embedded_complex_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_EMBEDDED_COMPLEX_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_embedded_complex_format_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                           
        _m00 uint8_t     format_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 uint8_t     reserve1;          //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Reserve1
        _m02 uint16_t    reserve2;          //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Reserve2
        _m03 const void* type;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
                                          
        SDK_MAGIC_PROPERTIES( "_NDR64_EMBEDDED_COMPLEX_FORMAT.$", 0x10, true, 0xb5814d9540add68 );            
        SDK_FIXED_SIZE( ndr64_embedded_complex_format_t, 0x10 );            
    };                                    
};
#include "magic/ndr64_embedded_complex_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_embedded_complex_format_t, 0x10 );
