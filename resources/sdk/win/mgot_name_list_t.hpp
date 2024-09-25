#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mgot_name_list_t.start.hpp"
namespace win
{
    struct mnk_eq_buf_t;

    // [struct _MgotNameList]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mgot_name_list_t                                               
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                
        _m00 uint32_t                                 dw_size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 sdk::array<struct win::mnk_eq_buf_t*, 1> a_name_list_entries;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .aNameListEntries
                                                                          
        SDK_MAGIC_PROPERTIES( "_MgotNameList.$", 0x10, true, 0xa81f28b842a4e20 );                    
        SDK_FIXED_SIZE( mgot_name_list_t, 0x10 );                         
    };                                                                    
};
#include "magic/mgot_name_list_t.end.hpp"
SDK_VERIFY( struct win::mgot_name_list_t, 0x10 );
