#pragma once
#include <sdkgen/support_library.hpp>
#include "typedesc_t.hpp"
#include "safearraybound_t.hpp"

#include "magic/arraydesc_t.start.hpp"
namespace tag
{
    // [struct tagARRAYDESC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct arraydesc_t                                              
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                          
        _m00 struct tag::typedesc_t                      tdesc_elem;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .tdescElem
        _m01 uint16_t                                    c_dims;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cDims
        _m02 sdk::array<struct tag::safearraybound_t, 1> rgbounds;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .rgbounds
                                                                    
        SDK_MAGIC_PROPERTIES( "tagARRAYDESC.$", 0x20, true, 0xb71ed37bb7b14c9f );           
        SDK_FIXED_SIZE( arraydesc_t, 0x20 );                        
    };                                                              
};
#include "magic/arraydesc_t.end.hpp"
SDK_VERIFY( struct tag::arraydesc_t, 0x20 );
