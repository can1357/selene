#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct general_lookaside_t; }

#include "magic/lookaside_list_t.start.hpp"
namespace pp
{
    // [struct _PP_LOOKASIDE_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lookaside_list_t                    
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //                                     
        _m00 struct nt::general_lookaside_t* p;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .P
        _m01 struct nt::general_lookaside_t* l;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .L
                                               
        SDK_MAGIC_PROPERTIES( "_PP_LOOKASIDE_LIST.$", 0x10, true, 0xa2be67d50dbc593a );  
        SDK_FIXED_SIZE( lookaside_list_t, 0x10 );  
    };                                         
};
#include "magic/lookaside_list_t.end.hpp"
SDK_VERIFY( struct pp::lookaside_list_t, 0x10 );
