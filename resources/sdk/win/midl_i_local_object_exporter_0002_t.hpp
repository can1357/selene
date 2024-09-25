#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_i_local_object_exporter_0002_t.start.hpp"
namespace win
{
    // [struct __MIDL_ILocalObjectExporter_0002]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_i_local_object_exporter_0002_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 wchar_t* p_name;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pName
        _m01 uint16_t w_id;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .wId
                                              
        SDK_MAGIC_PROPERTIES( "__MIDL_ILocalObjectExporter_0002.$", 0x10, true, 0x8f00eb80a311003a );       
        SDK_FIXED_SIZE( midl_i_local_object_exporter_0002_t, 0x10 );       
    };                                        
};
#include "magic/midl_i_local_object_exporter_0002_t.end.hpp"
SDK_VERIFY( struct win::midl_i_local_object_exporter_0002_t, 0x10 );
