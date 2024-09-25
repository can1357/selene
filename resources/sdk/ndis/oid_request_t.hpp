#pragma once
#include <sdkgen/support_library.hpp>
#include "request_type_t.hpp"
#include "object_header_t.hpp"

#include "magic/oid_request_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_OID_REQUEST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct oid_request_t                                     
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                   
        _m00 struct ndis::object_header_t header;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 enum ndis::request_type_t    request_type;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .RequestType
        _m02 uint32_t                     port_number;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PortNumber
        _m03 uint32_t                     timeout;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Timeout
        _m04 void*                        request_id;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RequestId
        _m05 void*                        request_handle;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RequestHandle
        _m06 sdk::array<uint8_t, 128>     ndis_reserved;       //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .NdisReserved
        _m07 sdk::array<uint8_t, 16>      miniport_reserved;   //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .MiniportReserved
        _m08 sdk::array<uint8_t, 16>      source_reserved;     //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .SourceReserved
        _m09 uint8_t                      supported_revision;  //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .SupportedRevision
        _m10 uint32_t                     switch_id;           //{ +0x00ec    +0x00ec    +0x00ec    +0x00ec    } | .SwitchId
        _m11 uint32_t                     v_port_id;           //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .VPortId
        _m12 uint32_t                     flags;               //{ +0x00f4    +0x00f4    +0x00f4    +0x00f4    } | .Flags
                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_OID_REQUEST.$", 0xf8, true, 0xe12a85e9d21b636c );                   
        SDK_FIXED_SIZE( oid_request_t, 0xf8 );                   
    };                                                       
};
#include "magic/oid_request_t.end.hpp"
SDK_VERIFY( struct ndis::oid_request_t, 0xf8 );
