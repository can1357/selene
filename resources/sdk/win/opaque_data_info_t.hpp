#pragma once
#include <sdkgen/support_library.hpp>

namespace tag { struct opaque_data_t; }

#include "magic/opaque_data_info_t.start.hpp"
namespace win
{
    struct i_serializable_parent_t;

    // [class OpaqueDataInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class opaque_data_info_t                                    
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                      
        _m00 struct win::i_serializable_parent_t* parent;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._parent
        _m01 int32_t                              un_serialized;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._unSerialized
        _m02 int32_t                              added;          //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._added
        _m03 uint32_t                             c_opaque_data;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._cOpaqueData
        _m04 uint32_t                             dw_coll_size;   //{ +0x0024    +0x0024    +0x0024    +0x0024    } | ._dwCollSize
        _m05 struct tag::opaque_data_t*           p_opaque_data;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._pOpaqueData
        _m06 void*                                p_act;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._pAct
                                                                
        SDK_MAGIC_PROPERTIES( "OpaqueDataInfo.$", 0x38, true, 0xf46d22b3e0dbee1c );              
        SDK_FIXED_SIZE( opaque_data_info_t, 0x38 );              
    };                                                          
};
#include "magic/opaque_data_info_t.end.hpp"
SDK_VERIFY( class win::opaque_data_info_t, 0x38 );
