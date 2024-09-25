#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/paged_lookaside_list_t.hpp"
#include "../nt/npaged_lookaside_list_t.hpp"

#include "magic/allocate_context_lookaside_t.start.hpp"
namespace fltmgr
{
    struct flt_filter_t;
    struct allocate_context_header_t;

    // [struct _ALLOCATE_CONTEXT_LOOKASIDE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct allocate_context_lookaside_t                                         
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                      
        _m00 struct fltmgr::flt_filter_t*              filter;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Filter
        _m01 sdk::function<void(void*, uint16_t)>*     context_cleanup_callback;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ContextCleanupCallback
        _m02 struct fltmgr::allocate_context_header_t* next;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Next
        _m03 uint16_t                                  context_type;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ContextType
        _m04 uint8_t                                   flags;                     //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .Flags
        _m05 uint8_t                                   allocation_type;           //{ +0x001b    +0x001b    +0x001b    +0x001b    } | .AllocationType
        _m06 struct nt::npaged_lookaside_list_t        non_paged;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NonPaged
        _m07 struct nt::paged_lookaside_list_t         paged;                     //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .Paged
                                                                                
        SDK_MAGIC_PROPERTIES( "_ALLOCATE_CONTEXT_LOOKASIDE.$", 0x140, true, 0x6fb50329ea1f722a );                         
        SDK_FIXED_SIZE( allocate_context_lookaside_t, 0x140 );                         
    };                                                                          
};
#include "magic/allocate_context_lookaside_t.end.hpp"
SDK_VERIFY( struct fltmgr::allocate_context_lookaside_t, 0x140 );
