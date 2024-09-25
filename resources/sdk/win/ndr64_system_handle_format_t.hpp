#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_system_handle_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_SYSTEM_HANDLE_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_system_handle_format_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint8_t  format_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 uint8_t  handle_type;       //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .HandleType
        _m02 uint32_t desired_access;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DesiredAccess
                                       
        SDK_MAGIC_PROPERTIES( "_NDR64_SYSTEM_HANDLE_FORMAT.$", 0x8, true, 0x4e2533831bbc35b );               
        SDK_FIXED_SIZE( ndr64_system_handle_format_t, 0x8 );               
    };                                 
};
#include "magic/ndr64_system_handle_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_system_handle_format_t, 0x8 );
