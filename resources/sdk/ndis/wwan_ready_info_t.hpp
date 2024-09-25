#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../wwan/ready_info_t.hpp"

#include "magic/wwan_ready_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WWAN_READY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wwan_ready_info_t                         
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 struct ndis::object_header_t header;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct wwan::ready_info_t    ready_info;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ReadyInfo
                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_WWAN_READY_INFO.$", 0x64, true, 0xfda9ff3e15289f9f );           
        SDK_DYNAMIC_SIZE( wwan_ready_info_t );           
    };                                               
};
#include "magic/wwan_ready_info_t.end.hpp"
