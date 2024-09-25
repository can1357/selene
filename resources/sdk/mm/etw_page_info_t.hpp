#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/mmpfn_identity_t.hpp"

#include "magic/etw_page_info_t.start.hpp"
namespace mm
{
    // [struct _MM_ETW_PAGE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct etw_page_info_t                             
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                             
        _m00 struct win::mmpfn_identity_t pfn_identity;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PfnIdentity
                                                       
        SDK_MAGIC_PROPERTIES( "_MM_ETW_PAGE_INFO.$", 0x18, true, 0x3b433c6f14a94e64 );             
        SDK_FIXED_SIZE( etw_page_info_t, 0x18 );             
    };                                                 
};
#include "magic/etw_page_info_t.end.hpp"
SDK_VERIFY( struct mm::etw_page_info_t, 0x18 );
