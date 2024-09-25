#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/props_out_info_t.start.hpp"
namespace tag
{
    struct m_interface_pointer_t;

    // [struct tagPropsOutInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct props_out_info_t                                   
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                    
        _m00 uint32_t                            c_ifs;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cIfs
        _m01 struct nt::guid_t*                  piid;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .piid
        _m02 sdk::hresult*                       phresults;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .phresults
        _m03 struct tag::m_interface_pointer_t** pp_intf_data;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ppIntfData
                                                              
        SDK_MAGIC_PROPERTIES( "tagPropsOutInfo.$", 0x20, true, 0x23e41f6de84b2283 );             
        SDK_FIXED_SIZE( props_out_info_t, 0x20 );             
    };                                                        
};
#include "magic/props_out_info_t.end.hpp"
SDK_VERIFY( struct tag::props_out_info_t, 0x20 );
