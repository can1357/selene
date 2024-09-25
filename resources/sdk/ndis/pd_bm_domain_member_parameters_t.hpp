#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/pd_bm_domain_member_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_bm_domain_member_parameters_t                        
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                         
        _m00 struct ndis::object_header_t header;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 void*                        miniport_adapter_context;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MiniportAdapterContext
                                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS.$", 0x10, true, 0xf68f20b49c8f8b9b );                         
        SDK_FIXED_SIZE( pd_bm_domain_member_parameters_t, 0x10 );                         
    };                                                             
};
#include "magic/pd_bm_domain_member_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::pd_bm_domain_member_parameters_t, 0x10 );
