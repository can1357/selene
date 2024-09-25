#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_i_local_object_exporter_0004_t.start.hpp"
namespace win
{
    // [struct __MIDL_ILocalObjectExporter_0004]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_i_local_object_exporter_0004_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                 
        _m00 uint64_t mid;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .mid
                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                 
        _m01 uint64_t oxid;                     //{ +0x0008    +0x0008    +0x0008    } | .oxid
        _m02 uint32_t refs;                     //{ +0x0010    +0x0010    +0x0010    } | .refs
                                              
        // Windows 10 v1607     
        //                 
        _m03 uint64_t oid;                      //{ +0x0008    } | .oid
                                              
        SDK_MAGIC_PROPERTIES( "__MIDL_ILocalObjectExporter_0004.$", 0x18, true, 0xf6fa11c52ec0edd9 );     
        SDK_DYNAMIC_SIZE( midl_i_local_object_exporter_0004_t );     
    };                                        
};
#include "magic/midl_i_local_object_exporter_0004_t.end.hpp"
