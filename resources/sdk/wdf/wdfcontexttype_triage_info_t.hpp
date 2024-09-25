#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdfcontexttype_triage_info_t.start.hpp"
namespace wdf
{
    // [struct _WDFCONTEXTTYPE_TRIAGE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfcontexttype_triage_info_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t type_info_size;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TypeInfoSize
        _m01 uint32_t context_size;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ContextSize
        _m02 uint32_t context_name;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ContextName
                                       
        SDK_MAGIC_PROPERTIES( "_WDFCONTEXTTYPE_TRIAGE_INFO.$", 0xc, true, 0x7fc27ceaaaee5c5f );               
        SDK_FIXED_SIZE( wdfcontexttype_triage_info_t, 0xc );               
    };                                 
};
#include "magic/wdfcontexttype_triage_info_t.end.hpp"
SDK_VERIFY( struct wdf::wdfcontexttype_triage_info_t, 0xc );
