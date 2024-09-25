#pragma once
#include <sdkgen/support_library.hpp>

namespace win { class c_remote_unknown_t; }

#include "magic/x_apt_add_ref_data_t.start.hpp"
namespace tag
{
    struct reminterfaceref_t;

    // [struct tagXAptAddRefData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct x_apt_add_ref_data_t                       
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                            
        _m00 uint16_t                       c_ifs;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cIfs
        _m01 struct tag::reminterfaceref_t* p_if_refs;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pIfRefs
        _m02 sdk::hresult*                  p_results;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pResults
        _m03 class win::c_remote_unknown_t* p_rem_unk;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pRemUnk
                                                      
        SDK_MAGIC_PROPERTIES( "tagXAptAddRefData.$", 0x20, true, 0x8c638a31585871c4 );          
        SDK_FIXED_SIZE( x_apt_add_ref_data_t, 0x20 );          
    };                                                
};
#include "magic/x_apt_add_ref_data_t.end.hpp"
SDK_VERIFY( struct tag::x_apt_add_ref_data_t, 0x20 );
