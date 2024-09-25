#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_protocol_specific_data_t.hpp"

#include "magic/storage_protocol_data_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_PROTOCOL_DATA_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_protocol_data_descriptor_t                                   
    {                                                                           
        // WDK 10                                                               
        //                                                                      
        _m00 uint32_t                                    version;                 //{ +0x0000    } | .Version
        _m01 uint32_t                                    size;                    //{ +0x0004    } | .Size
        _m02 struct nt::storage_protocol_specific_data_t protocol_specific_data;  //{ +0x0008    } | .ProtocolSpecificData
                                                                                
        SDK_NONVOL_PROPERTIES( "_STORAGE_PROTOCOL_DATA_DESCRIPTOR.$", 0x0, false, 0x35c78e83ee45803f );                       
        SDK_FIXED_SIZE( storage_protocol_data_descriptor_t, 0x30 );                       
    };                                                                          
};
#include "magic/storage_protocol_data_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_protocol_data_descriptor_t, 0x30 );
