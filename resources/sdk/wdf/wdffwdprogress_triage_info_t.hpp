#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdffwdprogress_triage_info_t.start.hpp"
namespace wdf
{
    // [struct _WDFFWDPROGRESS_TRIAGE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdffwdprogress_triage_info_t            
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint32_t reserved_request_list;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReservedRequestList
        _m01 uint32_t reserved_request_in_use_list;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ReservedRequestInUseList
        _m02 uint32_t pended_irp_list;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PendedIrpList
                                                   
        SDK_MAGIC_PROPERTIES( "_WDFFWDPROGRESS_TRIAGE_INFO.$", 0xc, true, 0xdb5354669155433e );                             
        SDK_FIXED_SIZE( wdffwdprogress_triage_info_t, 0xc );                             
    };                                             
};
#include "magic/wdffwdprogress_triage_info_t.end.hpp"
SDK_VERIFY( struct wdf::wdffwdprogress_triage_info_t, 0xc );
