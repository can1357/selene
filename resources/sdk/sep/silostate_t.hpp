#pragma once
#include <sdkgen/support_library.hpp>

namespace ci { struct ngen_paths_t; }

#include "magic/silostate_t.start.hpp"
namespace sep
{
    struct logon_session_references_t;

    // [struct _SEP_SILOSTATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct silostate_t                                                                 
    {                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                             
        _m00 struct sep::logon_session_references_t* system_logon_session;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SystemLogonSession
        _m01 struct sep::logon_session_references_t* anonymous_logon_session;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AnonymousLogonSession
        _m02 void*                                   anonymous_logon_token;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AnonymousLogonToken
        _m03 void*                                   anonymous_logon_token_no_everyone;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AnonymousLogonTokenNoEveryone
                                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                             
        _m04 nt::unicode_view*                       unc_system_paths;                   //{ +0x0020    +0x0020    +0x0020    } | .UncSystemPaths
        _m05 struct ci::ngen_paths_t*                ngen_paths;                         //{ +0x0028    +0x0028    +0x0028    } | .NgenPaths
                                                                                       
        SDK_MAGIC_PROPERTIES( "_SEP_SILOSTATE.$", 0x30, true, 0x9e3e1d515b1f721a );                                  
        SDK_DYNAMIC_SIZE( silostate_t );                                               
    };                                                                                 
};
#include "magic/silostate_t.end.hpp"
