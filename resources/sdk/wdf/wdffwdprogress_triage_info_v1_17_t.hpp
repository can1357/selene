#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdffwdprogress_triage_info_v1_17_t.start.hpp"
namespace wdf
{
    // [struct _WDFFWDPROGRESS_TRIAGE_INFO_V1_17]
    // => Windows 10 v1607
    //
    struct wdffwdprogress_triage_info_v1_17_t      
    {                                              
        // Windows 10 v1607                             
        //                                         
        _m00 uint32_t reserved_request_list;         //{ +0x0000    } | .ReservedRequestList
        _m01 uint32_t reserved_request_in_use_list;  //{ +0x0004    } | .ReservedRequestInUseList
        _m02 uint32_t pended_irp_list;               //{ +0x0008    } | .PendedIrpList
                                                   
        SDK_MAGIC_PROPERTIES( "_WDFFWDPROGRESS_TRIAGE_INFO_V1_17.$", 0x0, false, 0xd3ba34eb5f7afb22 );                             
        SDK_FIXED_SIZE( wdffwdprogress_triage_info_v1_17_t, 0xc );                             
    };                                             
};
#include "magic/wdffwdprogress_triage_info_v1_17_t.end.hpp"
SDK_VERIFY( struct wdf::wdffwdprogress_triage_info_v1_17_t, 0xc );
