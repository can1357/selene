#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_media_serial_number_data_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_MEDIA_SERIAL_NUMBER_DATA]
    // => WDK 10 (NV)
    //
    struct storage_media_serial_number_data_t         
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint16_t            serial_number_length;  //{ +0x0002    } | .SerialNumberLength
        _m01 sdk::array<uint8_t> serial_number;         //{ +0x0004    } | .SerialNumber
                                                      
        SDK_NONVOL_PROPERTIES( "_STORAGE_MEDIA_SERIAL_NUMBER_DATA.$", 0x0, false, 0x2e2ae6e8f42c936 );                     
        SDK_FIXED_SIZE( storage_media_serial_number_data_t, 0x4 );                     
    };                                                
};
#include "magic/storage_media_serial_number_data_t.end.hpp"
SDK_VERIFY( struct nt::storage_media_serial_number_data_t, 0x4 );
