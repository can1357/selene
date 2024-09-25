#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_i_local_object_exporter_0005_t.start.hpp"
namespace win
{
    // [struct __MIDL_ILocalObjectExporter_0005]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_i_local_object_exporter_0005_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t mid;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .mid
        _m01 uint64_t oid;                      //{ +0x0010    +0x0008    +0x0008    +0x0008    } | .oid
                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m02 uint32_t unmarshal_count;          //{ +0x0010    +0x0010    +0x0010    } | .unmarshalCount
                                              
        // Windows 10 v1607                
        //                            
        _m03 uint64_t oxid;                     //{ +0x0008    } | .oxid
                                              
        SDK_MAGIC_PROPERTIES( "__MIDL_ILocalObjectExporter_0005.$", 0x18, true, 0x70efae433c27947e );                
        SDK_FIXED_SIZE( midl_i_local_object_exporter_0005_t, 0x18 );                
    };                                        
};
#include "magic/midl_i_local_object_exporter_0005_t.end.hpp"
SDK_VERIFY( struct win::midl_i_local_object_exporter_0005_t, 0x18 );
