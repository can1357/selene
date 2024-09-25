#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/actrl_access_entry_listw_t.start.hpp"
namespace win
{
    struct actrl_access_entryw_t;

    // [struct _ACTRL_ACCESS_ENTRY_LISTW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct actrl_access_entry_listw_t                         
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                    
        _m00 uint32_t                           c_entries;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cEntries
        _m01 struct win::actrl_access_entryw_t* p_access_list;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pAccessList
                                                              
        SDK_MAGIC_PROPERTIES( "_ACTRL_ACCESS_ENTRY_LISTW.$", 0x10, true, 0xce6b89b75b9c5e7e );              
        SDK_FIXED_SIZE( actrl_access_entry_listw_t, 0x10 );              
    };                                                        
};
#include "magic/actrl_access_entry_listw_t.end.hpp"
SDK_VERIFY( struct win::actrl_access_entry_listw_t, 0x10 );
