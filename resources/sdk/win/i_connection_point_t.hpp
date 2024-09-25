#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/i_connection_point_t.start.hpp"
namespace win
{
    struct i_connection_point_vtbl_t;

    // [struct IConnectionPoint]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_connection_point_t                             
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                                  
        _m00 struct win::i_connection_point_vtbl_t* lp_vtbl;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpVtbl
                                                            
        SDK_MAGIC_PROPERTIES( "IConnectionPoint.$", 0x8, true, 0x6c98dd55f6d9e632 );        
        SDK_FIXED_SIZE( i_connection_point_t, 0x8 );        
    };                                                      
};
#include "magic/i_connection_point_t.end.hpp"
SDK_VERIFY( struct win::i_connection_point_t, 0x8 );
