#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/protocoldata_t.start.hpp"
namespace tag
{
    // [struct _tagPROTOCOLDATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct protocoldata_t       
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t grf_flags;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .grfFlags
        _m01 uint32_t dw_state;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwState
        _m02 void*    p_data;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pData
        _m03 uint32_t cb_data;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbData
                                
        SDK_MAGIC_PROPERTIES( "_tagPROTOCOLDATA.$", 0x18, true, 0xb9690783fc90eb2c );          
        SDK_FIXED_SIZE( protocoldata_t, 0x18 );          
    };                          
};
#include "magic/protocoldata_t.end.hpp"
SDK_VERIFY( struct tag::protocoldata_t, 0x18 );
