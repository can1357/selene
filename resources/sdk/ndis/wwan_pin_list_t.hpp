#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../wwan/pin_list_t.hpp"

#include "magic/wwan_pin_list_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WWAN_PIN_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wwan_pin_list_t                         
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                         
        _m00 struct ndis::object_header_t header;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     u_status;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uStatus
        _m02 struct wwan::pin_list_t      pin_list;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PinList
                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_WWAN_PIN_LIST.$", 0xa8, true, 0x73194f0790f96092 );         
        SDK_FIXED_SIZE( wwan_pin_list_t, 0xa8 );         
    };                                             
};
#include "magic/wwan_pin_list_t.end.hpp"
SDK_VERIFY( struct ndis::wwan_pin_list_t, 0xa8 );
