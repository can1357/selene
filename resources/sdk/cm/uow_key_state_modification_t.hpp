#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/uow_key_state_modification_t.start.hpp"
namespace cm
{
    // [struct _CM_UOW_KEY_STATE_MODIFICATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct uow_key_state_modification_t                 
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                              
        _m00 uint32_t                ref_count;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RefCount
        _m01 sdk::array<uint32_t, 2> sub_key_list_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SubKeyListCount
        _m02 sdk::array<uint32_t, 2> new_sub_key_list;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NewSubKeyList
                                                        
        SDK_MAGIC_PROPERTIES( "_CM_UOW_KEY_STATE_MODIFICATION.$", 0x14, true, 0xff81ad50c466e8de );                   
        SDK_FIXED_SIZE( uow_key_state_modification_t, 0x14 );                   
    };                                                  
};
#include "magic/uow_key_state_modification_t.end.hpp"
SDK_VERIFY( struct cm::uow_key_state_modification_t, 0x14 );
