#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_on_create_file_lx_information_t.start.hpp"
namespace nt
{
    // [struct _QUERY_ON_CREATE_FILE_LX_INFORMATION]
    // => WDK 10 (NV)
    //
    struct query_on_create_file_lx_information_t
    {                                           
        // WDK 10                        
        //                               
        _m00 uint32_t effective_access;           //{ +0x0000    } | .EffectiveAccess
        _m01 uint32_t lx_flags;                   //{ +0x0004    } | .LxFlags
        _m02 uint32_t lx_uid;                     //{ +0x0008    } | .LxUid
        _m03 uint32_t lx_gid;                     //{ +0x000c    } | .LxGid
        _m04 uint32_t lx_mode;                    //{ +0x0010    } | .LxMode
        _m05 uint32_t lx_device_id_major;         //{ +0x0014    } | .LxDeviceIdMajor
        _m06 uint32_t lx_device_id_minor;         //{ +0x0018    } | .LxDeviceIdMinor
                                                
        SDK_NONVOL_PROPERTIES( "_QUERY_ON_CREATE_FILE_LX_INFORMATION.$", 0x0, false, 0xa6c188f7c73861d9 );                   
        SDK_FIXED_SIZE( query_on_create_file_lx_information_t, 0x1c );                   
    };                                          
};
#include "magic/query_on_create_file_lx_information_t.end.hpp"
SDK_VERIFY( struct nt::query_on_create_file_lx_information_t, 0x1c );
