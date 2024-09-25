#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_type_strict_context_handle_t.start.hpp"
namespace win
{
    // [struct _NDR64_TYPE_STRICT_CONTEXT_HANDLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_type_strict_context_handle_t
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                
        _m00 uint8_t     format_code;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 uint8_t     real_format_code;     //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .RealFormatCode
        _m02 const void* type;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
        _m03 uint32_t    ctxt_flags;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CtxtFlags
        _m04 uint32_t    ctxt_id;              //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .CtxtID
                                             
        SDK_MAGIC_PROPERTIES( "_NDR64_TYPE_STRICT_CONTEXT_HANDLE.$", 0x18, true, 0x2e58239c02660dec );                 
        SDK_FIXED_SIZE( ndr64_type_strict_context_handle_t, 0x18 );                 
    };                                       
};
#include "magic/ndr64_type_strict_context_handle_t.end.hpp"
SDK_VERIFY( struct win::ndr64_type_strict_context_handle_t, 0x18 );
