#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cmc_status_info_t.start.hpp"
namespace win
{
    struct cmc_pend_info_t;

    // [struct _CMC_STATUS_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmc_status_info_t                                   
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                     
        _m00 uint32_t                     dw_status;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwStatus
        _m01 uint32_t                     c_body_list;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cBodyList
        _m02 uint32_t*                    rgdw_body_list;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgdwBodyList
        _m03 wchar_t*                     pwsz_status_string;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pwszStatusString
        _m04 uint32_t                     dw_other_info_choice;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwOtherInfoChoice
        _m05 uint32_t                     dw_fail_info;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwFailInfo
        _m06 struct win::cmc_pend_info_t* p_pend_info;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pPendInfo
                                                               
        SDK_MAGIC_PROPERTIES( "_CMC_STATUS_INFO.$", 0x28, true, 0xe77adb00839b3c51 );                     
        SDK_FIXED_SIZE( cmc_status_info_t, 0x28 );                     
    };                                                         
};
#include "magic/cmc_status_info_t.end.hpp"
SDK_VERIFY( struct win::cmc_status_info_t, 0x28 );
