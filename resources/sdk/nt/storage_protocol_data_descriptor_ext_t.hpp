#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_protocol_specific_data_ext_t.hpp"

#include "magic/storage_protocol_data_descriptor_ext_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_PROTOCOL_DATA_DESCRIPTOR_EXT]
    // => WDK 10 (NV)
    //
    struct storage_protocol_data_descriptor_ext_t                                   
    {                                                                               
        // WDK 10                                                                   
        //                                                                          
        _m00 uint32_t                                        version;                 //{ +0x0000    } | .Version
        _m01 uint32_t                                        size;                    //{ +0x0004    } | .Size
        _m02 struct nt::storage_protocol_specific_data_ext_t protocol_specific_data;  //{ +0x0008    } | .ProtocolSpecificData
                                                                                    
        SDK_NONVOL_PROPERTIES( "_STORAGE_PROTOCOL_DATA_DESCRIPTOR_EXT.$", 0x0, false, 0xba7ea2928c3a4c6 );                       
        SDK_FIXED_SIZE( storage_protocol_data_descriptor_ext_t, 0x48 );                       
    };                                                                              
};
#include "magic/storage_protocol_data_descriptor_ext_t.end.hpp"
SDK_VERIFY( struct nt::storage_protocol_data_descriptor_ext_t, 0x48 );
