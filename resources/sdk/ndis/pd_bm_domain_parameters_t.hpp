#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/pd_bm_domain_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PD_BM_DOMAIN_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_bm_domain_parameters_t             
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                       
        _m00 struct ndis::object_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_BM_DOMAIN_PARAMETERS.$", 0x8, true, 0x1e8e862aa82fed30 );       
        SDK_FIXED_SIZE( pd_bm_domain_parameters_t, 0x8 );       
    };                                           
};
#include "magic/pd_bm_domain_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::pd_bm_domain_parameters_t, 0x8 );
