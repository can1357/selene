#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/location_info_data_t.hpp"

#include "magic/server_location_info_t.start.hpp"
namespace win
{
    class c_object_context_t;
    struct i_serializable_parent_t;
    struct i_special_system_properties_t;

    // [class ServerLocationInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class server_location_info_t                                           
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                 
        _m00 struct win::i_serializable_parent_t*       parent;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._parent
        _m01 int32_t                                    un_serialized;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._unSerialized
        _m02 int32_t                                    added;               //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._added
        _m03 struct tag::location_info_data_t           location_info_data;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._locationInfoData
        _m04 class win::c_object_context_t*             p_object_context;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._pObjectContext
        _m05 struct win::i_special_system_properties_t* p_issp;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._pISSP
                                                                           
        SDK_MAGIC_PROPERTIES( "ServerLocationInfo.$", 0x48, true, 0xc5bcc4500bd4239 );                   
        SDK_FIXED_SIZE( server_location_info_t, 0x48 );                    
    };                                                                     
};
#include "magic/server_location_info_t.end.hpp"
SDK_VERIFY( class win::server_location_info_t, 0x48 );
