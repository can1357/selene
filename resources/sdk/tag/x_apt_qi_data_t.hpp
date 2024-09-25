#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;            }
namespace win { class c_remote_unknown_t; }

#include "magic/x_apt_qi_data_t.start.hpp"
namespace tag
{
    struct remqiresult_t;

    // [struct tagXAptQIData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct x_apt_qi_data_t                                
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                
        _m00 const struct nt::guid_t*       p_ipid;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pIPID
        _m01 uint32_t                       c_refs;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cRefs
        _m02 uint16_t                       c_iids;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cIids
        _m03 struct nt::guid_t*             iids;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .iids
        _m04 struct tag::remqiresult_t**    pp_qi_results;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ppQIResults
        _m05 class win::c_remote_unknown_t* p_rem_unk;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pRemUnk
                                                          
        SDK_MAGIC_PROPERTIES( "tagXAptQIData.$", 0x28, true, 0xc6bb33de94188d59 );              
        SDK_FIXED_SIZE( x_apt_qi_data_t, 0x28 );              
    };                                                    
};
#include "magic/x_apt_qi_data_t.end.hpp"
SDK_VERIFY( struct tag::x_apt_qi_data_t, 0x28 );
