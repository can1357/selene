#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_manage_data_set_attributes_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_MANAGE_DATA_SET_ATTRIBUTES]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_manage_data_set_attributes_t
    {                                         
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t action;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Action
        _m02 uint32_t flags;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 uint32_t parameter_block_offset;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ParameterBlockOffset
        _m04 uint32_t parameter_block_length;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ParameterBlockLength
        _m05 uint32_t data_set_ranges_offset;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .DataSetRangesOffset
        _m06 uint32_t data_set_ranges_length;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DataSetRangesLength
                                              
        SDK_NONVOL_PROPERTIES( "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES.$", 0x1c, true, 0x7d0aaa12346af066 );                       
        SDK_FIXED_SIZE( device_manage_data_set_attributes_t, 0x1c );                       
    };                                        
};
#include "magic/device_manage_data_set_attributes_t.end.hpp"
SDK_VERIFY( struct nt::device_manage_data_set_attributes_t, 0x1c );
