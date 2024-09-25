#pragma once
#include <sdkgen/support_library.hpp>
#include "net_luid_lh_t.hpp"
#include "object_header_t.hpp"

#include "magic/filter_interface_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_FILTER_INTERFACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filter_interface_t                                  
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                     
        _m00 struct ndis::object_header_t header;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     filter_type;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FilterType
        _m03 uint32_t                     filter_run_type;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .FilterRunType
        _m04 uint32_t                     if_index;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IfIndex
        _m05 union ndis::net_luid_lh_t    net_luid;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NetLuid
        _m06 nt::unicode_view             filter_class;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FilterClass
        _m07 nt::unicode_view             filter_instance_name;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FilterInstanceName
                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_FILTER_INTERFACE.$", 0x40, true, 0x85d7d2af3cd7ce7 );                     
        SDK_FIXED_SIZE( filter_interface_t, 0x40 );                     
    };                                                         
};
#include "magic/filter_interface_t.end.hpp"
SDK_VERIFY( struct ndis::filter_interface_t, 0x40 );
