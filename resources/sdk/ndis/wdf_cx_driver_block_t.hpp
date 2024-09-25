#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "wdf_cx_driver_state_t.hpp"
#include "wdf_cx_characteristics_t.hpp"

namespace nt { struct driver_object_t; }

#include "magic/wdf_cx_driver_block_t.start.hpp"
namespace ndis
{
    struct wdf_cx_driver_context_t;

    // [struct _NDIS_WDF_CX_DRIVER_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdf_cx_driver_block_t                                     
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                           
        _m00 struct ndis::object_header_t          header;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct nt::driver_object_t*           driver_object;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DriverObject
        _m02 nt::unicode_view*                     registry_path;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RegistryPath
        _m03 struct ndis::wdf_cx_driver_context_t* cx_driver_context;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CxDriverContext
        _m04 struct ndis::wdf_cx_characteristics_t chars;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Chars
        _m05 uint32_t                              client_count;       //{ +0x0060    +0x00a0    +0x0098    +0x00a0    } | .ClientCount
        _m06 enum ndis::wdf_cx_driver_state_t      state;              //{ +0x0064    +0x00a4    +0x009c    +0x00a4    } | .State
                                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_WDF_CX_DRIVER_BLOCK.$", 0xa8, true, 0x8246f825a777d96d );                  
        SDK_DYNAMIC_SIZE( wdf_cx_driver_block_t );                   
    };                                                               
};
#include "magic/wdf_cx_driver_block_t.end.hpp"
