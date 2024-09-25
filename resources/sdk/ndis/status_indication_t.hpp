#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "object_header_t.hpp"

#include "magic/status_indication_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_STATUS_INDICATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct status_indication_t                               
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                   
        _m00 struct ndis::object_header_t header;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                        source_handle;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SourceHandle
        _m02 uint32_t                     port_number;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PortNumber
        _m03 int32_t                      status_code;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .StatusCode
        _m04 uint32_t                     flags;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
        _m05 void*                        destination_handle;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DestinationHandle
        _m06 void*                        request_id;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .RequestId
        _m07 void*                        status_buffer;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .StatusBuffer
        _m08 uint32_t                     status_buffer_size;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .StatusBufferSize
        _m09 struct nt::guid_t            guid;                //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .Guid
        _m10 sdk::array<void*, 4>         ndis_reserved;       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .NdisReserved
                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_STATUS_INDICATION.$", 0x70, true, 0xc28c57ceb0ca502 );                   
        SDK_FIXED_SIZE( status_indication_t, 0x70 );                   
    };                                                       
};
#include "magic/status_indication_t.end.hpp"
SDK_VERIFY( struct ndis::status_indication_t, 0x70 );
