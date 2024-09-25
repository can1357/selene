#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct generic_mapping_t;  }
namespace nt { struct object_type_list_t; }

#include "magic/access_request_t.start.hpp"
namespace se
{
    struct security_descriptor_t;

    // [struct _SE_ACCESS_REQUEST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct access_request_t                                              
    {                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                               
        _m00 uint32_t                          size;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 struct se::security_descriptor_t* se_security_descriptor;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SeSecurityDescriptor
        _m02 uint32_t                          desired_access;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DesiredAccess
        _m03 uint32_t                          previously_granted_access;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .PreviouslyGrantedAccess
        _m04 void*                             principal_self_sid;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .PrincipalSelfSid
        _m05 struct nt::generic_mapping_t*     generic_mapping;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .GenericMapping
        _m06 uint32_t                          object_type_list_count;     //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ObjectTypeListCount
        _m07 struct nt::object_type_list_t*    object_type_list;           //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .ObjectTypeList
                                                                         
        SDK_NONVOL_PROPERTIES( "_SE_ACCESS_REQUEST.$", 0x38, true, 0xe33e8f1ee3320d63 );                          
        SDK_FIXED_SIZE( access_request_t, 0x38 );                          
    };                                                                   
};
#include "magic/access_request_t.end.hpp"
SDK_VERIFY( struct se::access_request_t, 0x38 );
