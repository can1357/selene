#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/idldesc_t.start.hpp"
namespace tag
{
    // [struct tagIDLDESC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct idldesc_t              
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint64_t dw_reserved;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwReserved
        _m01 uint16_t w_idl_flags;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .wIDLFlags
                                  
        SDK_MAGIC_PROPERTIES( "tagIDLDESC.$", 0x10, true, 0xad67837bbcdb8fb6 );            
        SDK_FIXED_SIZE( idldesc_t, 0x10 );            
    };                            
};
#include "magic/idldesc_t.end.hpp"
SDK_VERIFY( struct tag::idldesc_t, 0x10 );
