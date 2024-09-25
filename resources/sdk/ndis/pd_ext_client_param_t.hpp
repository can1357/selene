#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pd_ext_client_param_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PD_EXT_CLIENT_PARAM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_ext_client_param_t                         
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                               
        _m00 uint32_t pd_ext_client_buffer_context_size;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PDExtClientBufferContextSize
        _m01 uint32_t pd_ext_client_buffer_backfill_size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PDExtClientBufferBackfillSize
                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_EXT_CLIENT_PARAM.$", 0x8, true, 0x7ba9913411a419ed );                                   
        SDK_FIXED_SIZE( pd_ext_client_param_t, 0x8 );                                   
    };                                                   
};
#include "magic/pd_ext_client_param_t.end.hpp"
SDK_VERIFY( struct ndis::pd_ext_client_param_t, 0x8 );
