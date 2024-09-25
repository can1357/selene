#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdfcontext_triage_info_t.start.hpp"
namespace wdf
{
    // [struct _WDFCONTEXT_TRIAGE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfcontext_triage_info_t 
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t header_size;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HeaderSize
        _m01 uint32_t next_header;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NextHeader
        _m02 uint32_t object;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Object
        _m03 uint32_t type_info_ptr;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TypeInfoPtr
        _m04 uint32_t context;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Context
                                    
        SDK_MAGIC_PROPERTIES( "_WDFCONTEXT_TRIAGE_INFO.$", 0x14, true, 0x5f1bae275561bcec );              
        SDK_FIXED_SIZE( wdfcontext_triage_info_t, 0x14 );              
    };                              
};
#include "magic/wdfcontext_triage_info_t.end.hpp"
SDK_VERIFY( struct wdf::wdfcontext_triage_info_t, 0x14 );
