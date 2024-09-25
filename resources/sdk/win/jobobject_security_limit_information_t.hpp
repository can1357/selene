#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct token_groups_t;     }
namespace nt { struct token_privileges_t; }

#include "magic/jobobject_security_limit_information_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_SECURITY_LIMIT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_security_limit_information_t                
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 uint32_t                       security_limit_flags;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SecurityLimitFlags
        _m01 void*                          job_token;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .JobToken
        _m02 struct nt::token_groups_t*     sids_to_disable;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SidsToDisable
        _m03 struct nt::token_privileges_t* privileges_to_delete;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PrivilegesToDelete
        _m04 struct nt::token_groups_t*     restricted_sids;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RestrictedSids
                                                                 
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_SECURITY_LIMIT_INFORMATION.$", 0x28, true, 0x4efde48ba62df5b6 );                     
        SDK_FIXED_SIZE( jobobject_security_limit_information_t, 0x28 );                     
    };                                                           
};
#include "magic/jobobject_security_limit_information_t.end.hpp"
SDK_VERIFY( struct win::jobobject_security_limit_information_t, 0x28 );
