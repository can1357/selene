#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/luid_t.hpp"

namespace nt { struct luid_and_attributes_t; }
namespace nt { struct sid_and_attributes_t;  }

#include "magic/token_groups_and_privileges_t.start.hpp"
namespace win
{
    // [struct _TOKEN_GROUPS_AND_PRIVILEGES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_groups_and_privileges_t                             
    {                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                           
        _m00 uint32_t                          sid_count;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SidCount
        _m01 uint32_t                          sid_length;             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SidLength
        _m02 struct nt::sid_and_attributes_t*  sids;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Sids
        _m03 uint32_t                          restricted_sid_count;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .RestrictedSidCount
        _m04 uint32_t                          restricted_sid_length;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .RestrictedSidLength
        _m05 struct nt::sid_and_attributes_t*  restricted_sids;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .RestrictedSids
        _m06 uint32_t                          privilege_count;        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .PrivilegeCount
        _m07 uint32_t                          privilege_length;       //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .PrivilegeLength
        _m08 struct nt::luid_and_attributes_t* privileges;             //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Privileges
        _m09 struct nt::luid_t                 authentication_id;      //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .AuthenticationId
                                                                     
        SDK_NONVOL_PROPERTIES( "_TOKEN_GROUPS_AND_PRIVILEGES.$", 0x38, true, 0x9dcfe888f388adf8 );                      
        SDK_FIXED_SIZE( token_groups_and_privileges_t, 0x38 );                      
    };                                                               
};
#include "magic/token_groups_and_privileges_t.end.hpp"
SDK_VERIFY( struct win::token_groups_and_privileges_t, 0x38 );
