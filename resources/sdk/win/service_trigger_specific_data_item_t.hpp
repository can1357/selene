#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_trigger_specific_data_item_t.start.hpp"
namespace win
{
    // [struct _SERVICE_TRIGGER_SPECIFIC_DATA_ITEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_trigger_specific_data_item_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t dw_data_type;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwDataType
        _m01 uint32_t cb_data;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cbData
        _m02 uint8_t* p_data;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pData
                                               
        SDK_MAGIC_PROPERTIES( "_SERVICE_TRIGGER_SPECIFIC_DATA_ITEM.$", 0x10, true, 0x34744c7800360e4c );             
        SDK_FIXED_SIZE( service_trigger_specific_data_item_t, 0x10 );             
    };                                         
};
#include "magic/service_trigger_specific_data_item_t.end.hpp"
SDK_VERIFY( struct win::service_trigger_specific_data_item_t, 0x10 );
