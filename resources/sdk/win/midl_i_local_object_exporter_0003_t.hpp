#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_i_local_object_exporter_0003_t.start.hpp"
namespace win
{
    // [struct __MIDL_ILocalObjectExporter_0003]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_i_local_object_exporter_0003_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint64_t mid;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .mid
        _m01 uint64_t oxid;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .oxid
                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m02 uint64_t oid;                      //{ +0x0010    +0x0010    +0x0010    } | .oid
        _m03 uint32_t flags;                    //{ +0x0018    +0x0018    +0x0018    } | .flags
                                              
        // Windows 10 v1607      
        //                  
        _m04 uint32_t refs;                     //{ +0x0010    } | .refs
                                              
        SDK_MAGIC_PROPERTIES( "__MIDL_ILocalObjectExporter_0003.$", 0x20, true, 0xce9cb3d10105ec1a );      
        SDK_DYNAMIC_SIZE( midl_i_local_object_exporter_0003_t );      
    };                                        
};
#include "magic/midl_i_local_object_exporter_0003_t.end.hpp"
