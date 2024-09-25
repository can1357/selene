#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dcom_container_protocol_types_midl_type_format_string_t.start.hpp"
namespace win
{
    // [struct _DcomContainerProtocolTypes_MIDL_TYPE_FORMAT_STRING]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dcom_container_protocol_types_midl_type_format_string_t
    {                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 sdk::array<uint8_t, 239> format;                       //{ +0x0002    +0x0002    +0x0002    } | .Format
                                                                  
        SDK_MAGIC_PROPERTIES( "_DcomContainerProtocolTypes_MIDL_TYPE_FORMAT_STRING.$", 0xf2, true, 0x7fd6ce01bf45493d );       
        SDK_FIXED_SIZE( dcom_container_protocol_types_midl_type_format_string_t, 0xf2 );       
    };                                                            
};
#include "magic/dcom_container_protocol_types_midl_type_format_string_t.end.hpp"
SDK_VERIFY( struct win::dcom_container_protocol_types_midl_type_format_string_t, 0xf2 );
