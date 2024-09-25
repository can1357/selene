#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dcom_container_protocol_types_midl_expr_format_string_t.start.hpp"
namespace win
{
    // [struct _DcomContainerProtocolTypes_MIDL_EXPR_FORMAT_STRING]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dcom_container_protocol_types_midl_expr_format_string_t
    {                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                  
        _m00 sdk::array<uint8_t, 57> format;                        //{ +0x0004    +0x0004    +0x0004    } | .Format
                                                                  
        SDK_MAGIC_PROPERTIES( "_DcomContainerProtocolTypes_MIDL_EXPR_FORMAT_STRING.$", 0x40, true, 0x4d81794333c738d4 );       
        SDK_FIXED_SIZE( dcom_container_protocol_types_midl_expr_format_string_t, 0x40 );       
    };                                                            
};
#include "magic/dcom_container_protocol_types_midl_expr_format_string_t.end.hpp"
SDK_VERIFY( struct win::dcom_container_protocol_types_midl_expr_format_string_t, 0x40 );
