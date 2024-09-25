#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/instance_info_data_t.start.hpp"
namespace tag
{
    struct m_interface_pointer_t;

    // [struct tagInstanceInfoData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct instance_info_data_t                           
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                
        _m00 wchar_t*                           file_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fileName
        _m01 uint32_t                           mode;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .mode
        _m02 struct tag::m_interface_pointer_t* ifd_rot;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ifdROT
        _m03 struct tag::m_interface_pointer_t* ifd_stg;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ifdStg
                                                          
        SDK_MAGIC_PROPERTIES( "tagInstanceInfoData.$", 0x20, true, 0x1618e33cff9b0d99 );          
        SDK_FIXED_SIZE( instance_info_data_t, 0x20 );          
    };                                                    
};
#include "magic/instance_info_data_t.end.hpp"
SDK_VERIFY( struct tag::instance_info_data_t, 0x20 );
