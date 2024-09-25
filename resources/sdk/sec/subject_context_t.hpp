#pragma once
#include <sdkgen/support_library.hpp>
#include "impersonation_level_t.hpp"

#include "magic/subject_context_t.start.hpp"
namespace sec
{
    // [struct _SECURITY_SUBJECT_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct subject_context_t                                     
    {                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                       
        _m00 void*                           client_token;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ClientToken
        _m01 enum sec::impersonation_level_t impersonation_level;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ImpersonationLevel
        _m02 void*                           primary_token;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .PrimaryToken
        _m03 void*                           process_audit_id;     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ProcessAuditId
                                                                 
        SDK_NONVOL_PROPERTIES( "_SECURITY_SUBJECT_CONTEXT.$", 0x20, true, 0x65be2f54163ebb18 );                    
        SDK_FIXED_SIZE( subject_context_t, 0x20 );                    
    };                                                           
};
#include "magic/subject_context_t.end.hpp"
SDK_VERIFY( struct sec::subject_context_t, 0x20 );
