#pragma once
#include <sdkgen/support_library.hpp>

namespace win { class c_std_marshal_t; }

#include "magic/std_release_data_t.start.hpp"
namespace tag
{
    struct objref_t;

    // [struct tagStdReleaseData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct std_release_data_t                       
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                          
        _m00 class win::c_std_marshal_t* p_std_mshl;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pStdMshl
        _m01 struct tag::objref_t*       p_obj_ref;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pObjRef
                                                    
        SDK_MAGIC_PROPERTIES( "tagStdReleaseData.$", 0x10, true, 0x10e9d837ce742c56 );           
        SDK_FIXED_SIZE( std_release_data_t, 0x10 );           
    };                                              
};
#include "magic/std_release_data_t.end.hpp"
SDK_VERIFY( struct tag::std_release_data_t, 0x10 );
