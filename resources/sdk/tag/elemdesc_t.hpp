#pragma once
#include <sdkgen/support_library.hpp>
#include "idldesc_t.hpp"
#include "typedesc_t.hpp"
#include "paramdesc_t.hpp"

#include "magic/elemdesc_t.start.hpp"
namespace tag
{
    // [struct tagELEMDESC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct elemdesc_t                          
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                     
        _m00 struct tag::typedesc_t  tdesc;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .tdesc
        _m01 struct tag::idldesc_t   idldesc;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .idldesc
        _m02 struct tag::paramdesc_t paramdesc;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .paramdesc
                                               
        SDK_MAGIC_PROPERTIES( "tagELEMDESC.$", 0x20, true, 0xd63e35b7e96233c6 );          
        SDK_FIXED_SIZE( elemdesc_t, 0x20 );          
    };                                         
};
#include "magic/elemdesc_t.end.hpp"
SDK_VERIFY( struct tag::elemdesc_t, 0x20 );
