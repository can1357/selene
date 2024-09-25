#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/sriov_vf_config_state_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_SRIOV_VF_CONFIG_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sriov_vf_config_state_t                 
    {                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                         
        _m00 struct ndis::object_header_t header;    //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint16_t                     vf_id;     //{ +0x0004    +0x0004    +0x0004    } | .VFId
        _m02 uint32_t                     block_id;  //{ +0x0008    +0x0008    +0x0008    } | .BlockId
        _m03 uint32_t                     length;    //{ +0x000c    +0x000c    +0x000c    } | .Length
                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_SRIOV_VF_CONFIG_STATE.$", 0x10, true, 0x3e57a0abeb6bc18c );         
        SDK_FIXED_SIZE( sriov_vf_config_state_t, 0x10 );         
    };                                             
};
#include "magic/sriov_vf_config_state_t.end.hpp"
SDK_VERIFY( struct ndis::sriov_vf_config_state_t, 0x10 );
