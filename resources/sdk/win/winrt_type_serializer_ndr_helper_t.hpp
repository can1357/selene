#pragma once
#include <sdkgen/support_library.hpp>
#include "midl_stub_desc_t.hpp"

#include "magic/winrt_type_serializer_ndr_helper_t.start.hpp"
namespace win
{
    // [class WinrtTypeSerializerNdrHelper]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class winrt_type_serializer_ndr_helper_t                   
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                     
        _m00 const uint8_t const*         p_type_format_string;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._pTypeFormatString
        _m01 uint16_t                     format_string_size;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._formatStringSize
        _m02 uint16_t                     type_offset;           //{ +0x000a    +0x000a    +0x000a    +0x000a    } | ._typeOffset
        _m03 struct win::midl_stub_desc_t stub_desc;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._stubDesc
                                                               
        SDK_MAGIC_PROPERTIES( "WinrtTypeSerializerNdrHelper.$", 0xa8, true, 0x3666e31bfa5ec9d5 );                     
        SDK_FIXED_SIZE( winrt_type_serializer_ndr_helper_t, 0xa8 );                     
    };                                                         
};
#include "magic/winrt_type_serializer_ndr_helper_t.end.hpp"
SDK_VERIFY( class win::winrt_type_serializer_ndr_helper_t, 0xa8 );
