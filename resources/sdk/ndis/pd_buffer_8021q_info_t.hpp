#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pd_buffer_8021q_info_t.start.hpp"
namespace ndis
{
    // [struct _PD_BUFFER_8021Q_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_buffer_8021q_info_t         
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint3_t  user_priority;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .UserPriority
        _m01 uint1_t  canonical_format_id;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .CanonicalFormatId
        _m02 uint12_t vlan_id;              //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .VlanId
                                          
        SDK_MAGIC_PROPERTIES( "_PD_BUFFER_8021Q_INFO.$", 0x2, true, 0x57008b72c11b3a80 );                    
        SDK_FIXED_SIZE( pd_buffer_8021q_info_t, 0x2 );                    
    };                                    
};
#include "magic/pd_buffer_8021q_info_t.end.hpp"
SDK_VERIFY( struct ndis::pd_buffer_8021q_info_t, 0x2 );
