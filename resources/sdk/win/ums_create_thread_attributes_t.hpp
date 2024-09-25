#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl { struct ums_completion_list_t; }
namespace rtl { struct ums_context_t;         }

#include "magic/ums_create_thread_attributes_t.start.hpp"
namespace win
{
    // [struct _UMS_CREATE_THREAD_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ums_create_thread_attributes_t                               
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                              
        _m00 uint32_t                           ums_version;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UmsVersion
        _m01 struct rtl::ums_context_t*         rtl_ums_context;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RtlUmsContext
        _m02 void*                              ums_context;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UmsContext
        _m03 struct rtl::ums_completion_list_t* rtl_ums_completion_list;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RtlUmsCompletionList
        _m04 void*                              ums_completion_list;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UmsCompletionList
                                                                        
        SDK_MAGIC_PROPERTIES( "_UMS_CREATE_THREAD_ATTRIBUTES.$", 0x18, true, 0x45044b03b742b3f8 );                        
        SDK_FIXED_SIZE( ums_create_thread_attributes_t, 0x18 );                        
    };                                                                  
};
#include "magic/ums_create_thread_attributes_t.end.hpp"
SDK_VERIFY( struct win::ums_create_thread_attributes_t, 0x18 );
