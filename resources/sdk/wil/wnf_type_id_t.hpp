#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/wnf_type_id_t.start.hpp"
namespace wil
{
    // [struct __WIL__WNF_TYPE_ID]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wnf_type_id_t               
    {                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                             
        _m00 struct nt::guid_t type_id;  //{ +0x0000    +0x0000    +0x0000    } | .TypeId
                                       
        SDK_MAGIC_PROPERTIES( "__WIL__WNF_TYPE_ID.$", 0x10, true, 0xece72af830aaa60a );        
        SDK_FIXED_SIZE( wnf_type_id_t, 0x10 );        
    };                                 
};
#include "magic/wnf_type_id_t.end.hpp"
SDK_VERIFY( struct wil::wnf_type_id_t, 0x10 );
