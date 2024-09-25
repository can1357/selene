#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "pd_counter_type_t.hpp"

#include "magic/pd_counter_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PD_COUNTER_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_counter_parameters_t                     
    {                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                             
        _m00 struct ndis::object_header_t header;        //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;         //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 const wchar_t*               counter_name;  //{ +0x0008    +0x0008    +0x0008    } | .CounterName
        _m03 enum ndis::pd_counter_type_t type;          //{ +0x0010    +0x0010    +0x0010    } | .Type
                                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_COUNTER_PARAMETERS.$", 0x18, true, 0xf57b985a234684b7 );             
        SDK_FIXED_SIZE( pd_counter_parameters_t, 0x18 );             
    };                                                 
};
#include "magic/pd_counter_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::pd_counter_parameters_t, 0x18 );
