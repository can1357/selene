#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/pd_acquire_queues_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_acquire_queues_parameters_t        
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                       
        _m00 struct ndis::object_header_t header;  //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;   //{ +0x0004    +0x0004    +0x0004    } | .Flags
                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS.$", 0x8, true, 0x928f68c797b26989 );       
        SDK_FIXED_SIZE( pd_acquire_queues_parameters_t, 0x8 );       
    };                                           
};
#include "magic/pd_acquire_queues_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::pd_acquire_queues_parameters_t, 0x8 );
