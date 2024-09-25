#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ctxversion_t.start.hpp"
namespace tag
{
    // [struct tagCTXVERSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ctxversion_t           
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                        
        _m00 int16_t this_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThisVersion
        _m01 int16_t min_version;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MinVersion
                                  
        SDK_MAGIC_PROPERTIES( "tagCTXVERSION.$", 0x4, true, 0x35bf9884e5ca241b );             
        SDK_FIXED_SIZE( ctxversion_t, 0x4 );             
    };                            
};
#include "magic/ctxversion_t.end.hpp"
SDK_VERIFY( struct tag::ctxversion_t, 0x4 );
