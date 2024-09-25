#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/instance_info_data_t.hpp"

#include "magic/instance_info_t.start.hpp"
namespace win
{
    struct i_storage_t;
    struct i_serializable_parent_t;

    // [class InstanceInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class instance_info_t                                            
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                           
        _m00 struct win::i_serializable_parent_t* parent;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._parent
        _m01 int32_t                              un_serialized;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._unSerialized
        _m02 int32_t                              added;               //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._added
        _m03 struct tag::instance_info_data_t     instance_info_data;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._instanceInfoData
        _m04 struct win::i_storage_t*             pstg;                //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._pstg
                                                                     
        SDK_MAGIC_PROPERTIES( "InstanceInfo.$", 0x48, true, 0xb798e34f9363949f );                   
        SDK_FIXED_SIZE( instance_info_t, 0x48 );                     
    };                                                               
};
#include "magic/instance_info_t.end.hpp"
SDK_VERIFY( class win::instance_info_t, 0x48 );
