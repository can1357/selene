#pragma once
#include <sdkgen/support_library.hpp>
#include "list_header_t.hpp"
#include "ready_state_t.hpp"
#include "emergency_mode_t.hpp"

#include "magic/ready_info_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_READY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ready_info_t                                      
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                   
        _m00 enum wwan::ready_state_t    ready_state;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReadyState
        _m01 enum wwan::emergency_mode_t emergency_mode;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EmergencyMode
        _m02 sdk::array<wchar_t, 16>     subscriber_id;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SubscriberId
        _m03 sdk::array<wchar_t, 21>     sim_icc_id;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SimIccId
        _m04 uint8_t                     cdma_short_msg_size;  //{ +0x0052    +0x0052    +0x0052    +0x0052    } | .CdmaShortMsgSize
        _m05 struct wwan::list_header_t  tn_list_header;       //{ +0x0054    +0x0058    +0x0058    +0x0058    } | .TNListHeader
                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                   
        _m06 uint32_t                    status_flags;         //{ +0x0054    +0x0054    +0x0054    } | .StatusFlags
                                                             
        SDK_MAGIC_PROPERTIES( "_WWAN_READY_INFO.$", 0x60, true, 0x5f5dec47d014a613 );                    
        SDK_DYNAMIC_SIZE( ready_info_t );                    
    };                                                       
};
#include "magic/ready_info_t.end.hpp"
