#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"

#include "magic/tpmparams_t.start.hpp"
namespace tag
{
    // [struct tagTPMPARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tpmparams_t                     
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                 
        _m00 uint32_t           cb_size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct tag::rect_t rc_exclude;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rcExclude
                                           
        SDK_MAGIC_PROPERTIES( "tagTPMPARAMS.$", 0x14, true, 0x1f70eaea0321f52b );           
        SDK_FIXED_SIZE( tpmparams_t, 0x14 );           
    };                                     
};
#include "magic/tpmparams_t.end.hpp"
SDK_VERIFY( struct tag::tpmparams_t, 0x14 );
