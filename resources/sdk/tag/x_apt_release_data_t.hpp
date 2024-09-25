#pragma once
#include <sdkgen/support_library.hpp>

namespace win { class c_remote_unknown_t; }

#include "magic/x_apt_release_data_t.start.hpp"
namespace tag
{
    struct reminterfaceref_t;

    // [struct tagXAptReleaseData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct x_apt_release_data_t                       
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                            
        _m00 uint16_t                       c_ifs;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cIfs
        _m01 struct tag::reminterfaceref_t* p_if_refs;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pIfRefs
        _m02 class win::c_remote_unknown_t* p_rem_unk;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pRemUnk
                                                      
        SDK_MAGIC_PROPERTIES( "tagXAptReleaseData.$", 0x18, true, 0x54e88fd4064f7c76 );          
        SDK_FIXED_SIZE( x_apt_release_data_t, 0x18 );          
    };                                                
};
#include "magic/x_apt_release_data_t.end.hpp"
SDK_VERIFY( struct tag::x_apt_release_data_t, 0x18 );
