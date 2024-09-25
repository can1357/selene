#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../tag/instantiation_info_data_t.hpp"

#include "magic/instantiation_info_t.start.hpp"
namespace win
{
    struct i_serializable_parent_t;

    // [class InstantiationInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class instantiation_info_t                                             
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                 
        _m00 struct win::i_serializable_parent_t*  parent;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._parent
        _m01 int32_t                               un_serialized;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._unSerialized
        _m02 int32_t                               added;                    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._added
        _m03 struct tag::instantiation_info_data_t instantiation_info_data;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._instantiationInfoData
        _m04 sdk::array<struct nt::guid_t, 10>     p_ii_ds;                  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | ._pIIDs
                                                                           
        SDK_MAGIC_PROPERTIES( "InstantiationInfo.$", 0xf8, true, 0xdf6dba0e8ce54fb6 );                        
        SDK_FIXED_SIZE( instantiation_info_t, 0xf8 );                        
    };                                                                     
};
#include "magic/instantiation_info_t.end.hpp"
SDK_VERIFY( class win::instantiation_info_t, 0xf8 );
