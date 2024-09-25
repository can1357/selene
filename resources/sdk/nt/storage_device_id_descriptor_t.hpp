#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_device_id_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DEVICE_ID_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_device_id_descriptor_t                 
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 uint32_t               version;                //{ +0x0000    } | .Version
        _m01 uint32_t               size;                   //{ +0x0004    } | .Size
        _m02 uint32_t               number_of_identifiers;  //{ +0x0008    } | .NumberOfIdentifiers
        _m03 sdk::array<uint8_t, 1> identifiers;            //{ +0x000c    } | .Identifiers
                                                          
        SDK_NONVOL_PROPERTIES( "_STORAGE_DEVICE_ID_DESCRIPTOR.$", 0x0, false, 0xd63bb628b133b79b );                      
        SDK_FIXED_SIZE( storage_device_id_descriptor_t, 0x10 );                      
    };                                                    
};
#include "magic/storage_device_id_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_device_id_descriptor_t, 0x10 );
