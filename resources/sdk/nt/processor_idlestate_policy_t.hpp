#pragma once
#include <sdkgen/support_library.hpp>
#include "processor_idlestate_info_t.hpp"

#include "magic/processor_idlestate_policy_t.start.hpp"
namespace nt
{
    // [struct PROCESSOR_IDLESTATE_POLICY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_idlestate_policy_t              
    {                                                
        union u0_flags_t                             
        {                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                       
            _m01 uint16_t as_ushort;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
            _m02 uint1_t  allow_scaling;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .AllowScaling
            _m03 uint1_t  disabled;                    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Disabled
                                                     
            SDK_MAGIC_PROPERTIES( "PROCESSOR_IDLESTATE_POLICY.Flags.$", 0x2, true, 0xd465a57a709d6d27 );                           
            SDK_FIXED_SIZE( u0_flags_t, 0x2 );                           
        };                                           
                                                     
        using policy_t = sdk::array<struct nt::processor_idlestate_info_t, 3>;             
                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                           
        _m00 uint16_t                   revision;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Revision
        _m04 u0_flags_t                 flags;         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m05 uint32_t                   policy_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PolicyCount
        _m06 policy_t                   policy;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Policy
                                                     
        SDK_MAGIC_PROPERTIES( "PROCESSOR_IDLESTATE_POLICY.$", 0x20, true, 0x19a3b161a9733dc4 );             
        SDK_FIXED_SIZE( processor_idlestate_policy_t, 0x20 );             
    };                                               
};
#include "magic/processor_idlestate_policy_t.end.hpp"
SDK_VERIFY( union nt::processor_idlestate_policy_t::u0_flags_t, 0x2 );
SDK_VERIFY( struct nt::processor_idlestate_policy_t, 0x20 );
