#pragma once
#include <sdkgen/support_library.hpp>
#include "medium_t.hpp"
#include "net_luid_lh_t.hpp"
#include "object_header_t.hpp"
#include "physical_medium_t.hpp"

#include "magic/filter_restart_parameters_t.start.hpp"
namespace ndis
{
    struct restart_attributes_t;

    // [struct _NDIS_FILTER_RESTART_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filter_restart_parameters_t                                       
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                   
        _m00 struct ndis::object_header_t       header;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 enum ndis::medium_t                miniport_media_type;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MiniportMediaType
        _m02 enum ndis::physical_medium_t       miniport_physical_media_type;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MiniportPhysicalMediaType
        _m03 struct ndis::restart_attributes_t* restart_attributes;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RestartAttributes
        _m04 uint32_t                           lower_if_index;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LowerIfIndex
        _m05 union ndis::net_luid_lh_t          lower_if_net_luid;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LowerIfNetLuid
        _m06 uint32_t                           flags;                         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Flags
                                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_FILTER_RESTART_PARAMETERS.$", 0x30, true, 0x9102f011b04ae366 );                             
        SDK_FIXED_SIZE( filter_restart_parameters_t, 0x30 );                             
    };                                                                       
};
#include "magic/filter_restart_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::filter_restart_parameters_t, 0x30 );
