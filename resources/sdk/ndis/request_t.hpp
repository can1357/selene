#pragma once
#include <sdkgen/support_library.hpp>
#include "request_type_t.hpp"

#include "magic/request_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_REQUEST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct request_t                                     
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                               
        _m00 sdk::array<uint8_t, 32>   mac_reserved;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MacReserved
        _m01 enum ndis::request_type_t request_type;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RequestType
        _m02 sdk::array<uint8_t, 72>   ndis_reserved;      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .NdisReserved
        _m03 sdk::array<uint8_t, 16>   call_mgr_reserved;  //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .CallMgrReserved
        _m04 sdk::array<uint8_t, 16>   protocol_reserved;  //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .ProtocolReserved
        _m05 sdk::array<uint8_t, 16>   miniport_reserved;  //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .MiniportReserved
                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_REQUEST.$", 0xb0, true, 0xe65940db5b23733a );                  
        SDK_FIXED_SIZE( request_t, 0xb0 );                  
    };                                                   
};
#include "magic/request_t.end.hpp"
SDK_VERIFY( struct ndis::request_t, 0xb0 );
