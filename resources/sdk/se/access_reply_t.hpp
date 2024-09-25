#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct access_reasons_t; }
namespace nt { struct privilege_set_t;  }

#include "magic/access_reply_t.start.hpp"
namespace se
{
    // [struct _SE_ACCESS_REPLY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct access_reply_t                                   
    {                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                  
        _m00 uint32_t                     size;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                     result_list_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ResultListCount
        _m02 uint32_t*                    granted_access;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .GrantedAccess
        _m03 int32_t*                     access_status;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .AccessStatus
        _m04 struct nt::access_reasons_t* access_reason;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .AccessReason
        _m05 struct nt::privilege_set_t** privileges;         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Privileges
                                                            
        SDK_NONVOL_PROPERTIES( "_SE_ACCESS_REPLY.$", 0x28, true, 0xea08e13022ccb234 );                  
        SDK_FIXED_SIZE( access_reply_t, 0x28 );                  
    };                                                      
};
#include "magic/access_reply_t.end.hpp"
SDK_VERIFY( struct se::access_reply_t, 0x28 );
