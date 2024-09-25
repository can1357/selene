#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/i_connection_point_container_t.start.hpp"
namespace win
{
    struct i_connection_point_container_vtbl_t;

    // [struct IConnectionPointContainer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_connection_point_container_t                             
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                                            
        _m00 struct win::i_connection_point_container_vtbl_t* lp_vtbl;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpVtbl
                                                                      
        SDK_MAGIC_PROPERTIES( "IConnectionPointContainer.$", 0x8, true, 0xff7442a150adb94a );        
        SDK_FIXED_SIZE( i_connection_point_container_t, 0x8 );        
    };                                                                
};
#include "magic/i_connection_point_container_t.end.hpp"
SDK_VERIFY( struct win::i_connection_point_container_t, 0x8 );
