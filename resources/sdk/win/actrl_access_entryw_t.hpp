#pragma once
#include <sdkgen/support_library.hpp>
#include "trustee_w_t.hpp"

#include "magic/actrl_access_entryw_t.start.hpp"
namespace win
{
    // [struct _ACTRL_ACCESS_ENTRYW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct actrl_access_entryw_t                          
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                
        _m00 struct win::trustee_w_t trustee;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Trustee
        _m01 uint32_t                f_access_flags;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .fAccessFlags
        _m02 uint32_t                access;                //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Access
        _m03 uint32_t                prov_specific_access;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ProvSpecificAccess
        _m04 uint32_t                inheritance;           //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Inheritance
        _m05 wchar_t*                lp_inherit_property;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .lpInheritProperty
                                                          
        SDK_MAGIC_PROPERTIES( "_ACTRL_ACCESS_ENTRYW.$", 0x38, true, 0x981e026a3c61f9fd );                     
        SDK_FIXED_SIZE( actrl_access_entryw_t, 0x38 );                     
    };                                                    
};
#include "magic/actrl_access_entryw_t.end.hpp"
SDK_VERIFY( struct win::actrl_access_entryw_t, 0x38 );
