#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_protocol_type_t.hpp"

#include "magic/storage_protocol_specific_data_ext_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_PROTOCOL_SPECIFIC_DATA_EXT]
    // => WDK 10 (NV)
    //
    struct storage_protocol_specific_data_ext_t                          
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 enum nt::storage_protocol_type_t protocol_type;               //{ +0x0000    } | .ProtocolType
        _m01 uint32_t                         data_type;                   //{ +0x0004    } | .DataType
        _m02 uint32_t                         protocol_data_value;         //{ +0x0008    } | .ProtocolDataValue
        _m03 uint32_t                         protocol_data_sub_value;     //{ +0x000c    } | .ProtocolDataSubValue
        _m04 uint32_t                         protocol_data_offset;        //{ +0x0010    } | .ProtocolDataOffset
        _m05 uint32_t                         protocol_data_length;        //{ +0x0014    } | .ProtocolDataLength
        _m06 uint32_t                         fixed_protocol_return_data;  //{ +0x0018    } | .FixedProtocolReturnData
        _m07 uint32_t                         protocol_data_sub_value2;    //{ +0x001c    } | .ProtocolDataSubValue2
        _m08 uint32_t                         protocol_data_sub_value3;    //{ +0x0020    } | .ProtocolDataSubValue3
        _m09 uint32_t                         protocol_data_sub_value4;    //{ +0x0024    } | .ProtocolDataSubValue4
        _m10 uint32_t                         protocol_data_sub_value5;    //{ +0x0028    } | .ProtocolDataSubValue5
                                                                         
        SDK_NONVOL_PROPERTIES( "_STORAGE_PROTOCOL_SPECIFIC_DATA_EXT.$", 0x0, false, 0x3f7d2351aed7a64d );                           
        SDK_FIXED_SIZE( storage_protocol_specific_data_ext_t, 0x40 );                           
    };                                                                   
};
#include "magic/storage_protocol_specific_data_ext_t.end.hpp"
SDK_VERIFY( struct nt::storage_protocol_specific_data_ext_t, 0x40 );
