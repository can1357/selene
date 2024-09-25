#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_winrt_type_serialization_info_t.start.hpp"
namespace win
{
    struct midl_stub_desc_t;

    // [struct _MIDL_WINRT_TYPE_SERIALIZATION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_winrt_type_serialization_info_t                     
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                          
        _m00 uint32_t                            version;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 const uint8_t*                      type_format_string;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TypeFormatString
        _m02 uint16_t                            format_string_size;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FormatStringSize
        _m03 uint16_t                            type_offset;         //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .TypeOffset
        _m04 const struct win::midl_stub_desc_t* stub_desc;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StubDesc
                                                                    
        SDK_MAGIC_PROPERTIES( "_MIDL_WINRT_TYPE_SERIALIZATION_INFO.$", 0x20, true, 0xff86689252a6ae0f );                   
        SDK_FIXED_SIZE( midl_winrt_type_serialization_info_t, 0x20 );                   
    };                                                              
};
#include "magic/midl_winrt_type_serialization_info_t.end.hpp"
SDK_VERIFY( struct win::midl_winrt_type_serialization_info_t, 0x20 );
