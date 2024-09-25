#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/midl_i_call_frame_0001_t.start.hpp"
namespace win
{
    // [struct __MIDL_ICallFrame_0001]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_i_call_frame_0001_t                      
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                               
        _m00 uint32_t          i_method;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .iMethod
        _m01 int32_t           f_has_in_values;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .fHasInValues
        _m02 int32_t           f_has_in_out_values;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .fHasInOutValues
        _m03 int32_t           f_has_out_values;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .fHasOutValues
        _m04 int32_t           f_derives_from_i_dispatch;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .fDerivesFromIDispatch
        _m05 int32_t           c_in_interfaces_max;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .cInInterfacesMax
        _m06 int32_t           c_in_out_interfaces_max;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cInOutInterfacesMax
        _m07 int32_t           c_out_interfaces_max;       //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .cOutInterfacesMax
        _m08 int32_t           c_top_level_in_interfaces;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cTopLevelInInterfaces
        _m09 struct nt::guid_t iid;                        //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .iid
        _m10 uint32_t          c_method;                   //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .cMethod
        _m11 uint32_t          c_params;                   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .cParams
                                                         
        SDK_MAGIC_PROPERTIES( "__MIDL_ICallFrame_0001.$", 0x3c, true, 0x2a593347147f1d9f );                          
        SDK_FIXED_SIZE( midl_i_call_frame_0001_t, 0x3c );                          
    };                                                   
};
#include "magic/midl_i_call_frame_0001_t.end.hpp"
SDK_VERIFY( struct win::midl_i_call_frame_0001_t, 0x3c );
