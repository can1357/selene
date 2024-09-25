#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/i_enum_connections_t.start.hpp"
namespace win
{
    struct i_enum_connections_vtbl_t;

    // [struct IEnumConnections]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_enum_connections_t                             
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                                  
        _m00 struct win::i_enum_connections_vtbl_t* lp_vtbl;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpVtbl
                                                            
        SDK_MAGIC_PROPERTIES( "IEnumConnections.$", 0x8, true, 0xa96245130c545136 );        
        SDK_FIXED_SIZE( i_enum_connections_t, 0x8 );        
    };                                                      
};
#include "magic/i_enum_connections_t.end.hpp"
SDK_VERIFY( struct win::i_enum_connections_t, 0x8 );
