#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/luid_t.hpp"
#include "../nt/token_type_t.hpp"
#include "../sec/impersonation_level_t.hpp"

#include "magic/token_statistics_t.start.hpp"
namespace win
{
    // [struct _TOKEN_STATISTICS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_statistics_t                                    
    {                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                       
        _m00 struct nt::luid_t               token_id;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TokenId
        _m01 struct nt::luid_t               authentication_id;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AuthenticationId
        _m02 int64_t                         expiration_time;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ExpirationTime
        _m03 enum nt::token_type_t           token_type;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .TokenType
        _m04 enum sec::impersonation_level_t impersonation_level;  //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .ImpersonationLevel
        _m05 uint32_t                        dynamic_charged;      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .DynamicCharged
        _m06 uint32_t                        dynamic_available;    //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .DynamicAvailable
        _m07 uint32_t                        group_count;          //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .GroupCount
        _m08 uint32_t                        privilege_count;      //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .PrivilegeCount
        _m09 struct nt::luid_t               modified_id;          //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .ModifiedId
                                                                 
        SDK_NONVOL_PROPERTIES( "_TOKEN_STATISTICS.$", 0x38, true, 0x81a552ff460a24aa );                    
        SDK_FIXED_SIZE( token_statistics_t, 0x38 );                    
    };                                                           
};
#include "magic/token_statistics_t.end.hpp"
SDK_VERIFY( struct win::token_statistics_t, 0x38 );
