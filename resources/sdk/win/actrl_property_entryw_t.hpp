#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/actrl_property_entryw_t.start.hpp"
namespace win
{
    struct actrl_access_entry_listw_t;

    // [struct _ACTRL_PROPERTY_ENTRYW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct actrl_property_entryw_t                                       
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                               
        _m00 wchar_t*                                lp_property;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpProperty
        _m01 struct win::actrl_access_entry_listw_t* p_access_entry_list;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pAccessEntryList
        _m02 uint32_t                                f_list_flags;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .fListFlags
                                                                         
        SDK_MAGIC_PROPERTIES( "_ACTRL_PROPERTY_ENTRYW.$", 0x18, true, 0x71c171adcd4cd614 );                    
        SDK_FIXED_SIZE( actrl_property_entryw_t, 0x18 );                    
    };                                                                   
};
#include "magic/actrl_property_entryw_t.end.hpp"
SDK_VERIFY( struct win::actrl_property_entryw_t, 0x18 );
