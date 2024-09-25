#pragma once
#include <sdkgen/support_library.hpp>
#include "etw_page_info_t.hpp"
#include "etw_page_extra_info_t.hpp"

#include "magic/etw_page_info_ex_t.start.hpp"
namespace mm
{
    // [struct _MM_ETW_PAGE_INFO_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct etw_page_info_ex_t                          
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                             
        _m00 struct mm::etw_page_info_t      page_info;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PageInfo
        _m01 union mm::etw_page_extra_info_t info;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Info
                                                       
        SDK_MAGIC_PROPERTIES( "_MM_ETW_PAGE_INFO_EX.$", 0x20, true, 0xf14049c277b0db41 );          
        SDK_FIXED_SIZE( etw_page_info_ex_t, 0x20 );          
    };                                                 
};
#include "magic/etw_page_info_ex_t.end.hpp"
SDK_VERIFY( struct mm::etw_page_info_ex_t, 0x20 );
