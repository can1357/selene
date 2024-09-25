#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/allocate_context_header_t.start.hpp"
namespace fltmgr
{
    struct flt_filter_t;
    struct allocate_context_header_t;

    // [struct _ALLOCATE_CONTEXT_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct allocate_context_header_t                                            
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                      
        _m00 struct fltmgr::flt_filter_t*              filter;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Filter
        _m01 sdk::function<void(void*, uint16_t)>*     context_cleanup_callback;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ContextCleanupCallback
        _m02 struct fltmgr::allocate_context_header_t* next;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Next
        _m03 uint16_t                                  context_type;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ContextType
        _m04 uint8_t                                   flags;                     //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .Flags
        _m05 uint8_t                                   allocation_type;           //{ +0x001b    +0x001b    +0x001b    +0x001b    } | .AllocationType
                                                                                
        SDK_MAGIC_PROPERTIES( "_ALLOCATE_CONTEXT_HEADER.$", 0x20, true, 0xeba40045d2b1789c );                         
        SDK_FIXED_SIZE( allocate_context_header_t, 0x20 );                         
    };                                                                          
};
#include "magic/allocate_context_header_t.end.hpp"
SDK_VERIFY( struct fltmgr::allocate_context_header_t, 0x20 );
