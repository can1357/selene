#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_context_handle_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_CONTEXT_HANDLE_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_context_handle_format_t   
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                 
        _m00 uint8_t format_code;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 uint8_t context_flags;          //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .ContextFlags
        _m02 uint8_t rundown_routine_index;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .RundownRoutineIndex
        _m03 uint8_t ordinal;                //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Ordinal
                                           
        SDK_MAGIC_PROPERTIES( "_NDR64_CONTEXT_HANDLE_FORMAT.$", 0x4, true, 0xe82a6bec44cc1aa7 );                      
        SDK_FIXED_SIZE( ndr64_context_handle_format_t, 0x4 );                      
    };                                     
};
#include "magic/ndr64_context_handle_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_context_handle_format_t, 0x4 );
