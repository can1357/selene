#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rem_stgmedium_t.start.hpp"
namespace tag
{
    // [struct tagRemSTGMEDIUM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rem_stgmedium_t                            
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint32_t               tymed;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .tymed
        _m01 uint32_t               dw_handle_type;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwHandleType
        _m02 uint32_t               p_data;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pData
        _m03 uint32_t               p_unk_for_release;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .pUnkForRelease
        _m04 uint32_t               cb_data;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbData
        _m05 sdk::array<uint8_t, 1> data;               //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .data
                                                      
        SDK_MAGIC_PROPERTIES( "tagRemSTGMEDIUM.$", 0x18, true, 0x14cfba1d8a28b4fa );                  
        SDK_FIXED_SIZE( rem_stgmedium_t, 0x18 );                  
    };                                                
};
#include "magic/rem_stgmedium_t.end.hpp"
SDK_VERIFY( struct tag::rem_stgmedium_t, 0x18 );
