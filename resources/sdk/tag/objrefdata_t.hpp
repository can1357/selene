#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/objrefdata_t.start.hpp"
namespace tag
{
    struct dataelement_t;

    // [struct tagOBJREFDATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct objrefdata_t                               
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                            
        _m00 uint32_t                    n_elms;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .nElms
        _m01 struct tag::dataelement_t** pp_elm_array;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ppElmArray
                                                      
        SDK_MAGIC_PROPERTIES( "tagOBJREFDATA.$", 0x10, true, 0xea88c9ecf90d3937 );             
        SDK_FIXED_SIZE( objrefdata_t, 0x10 );             
    };                                                
};
#include "magic/objrefdata_t.end.hpp"
SDK_VERIFY( struct tag::objrefdata_t, 0x10 );
