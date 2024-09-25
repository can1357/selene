#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/storage_diagnostic_data_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DIAGNOSTIC_DATA]
    // => WDK 10 (NV)
    //
    struct storage_diagnostic_data_t                       
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 uint32_t               version;                 //{ +0x0000    } | .Version
        _m01 uint32_t               size;                    //{ +0x0004    } | .Size
        _m02 struct nt::guid_t      provider_id;             //{ +0x0008    } | .ProviderId
        _m03 uint32_t               buffer_size;             //{ +0x0018    } | .BufferSize
        _m04 sdk::array<uint8_t, 1> diagnostic_data_buffer;  //{ +0x0020    } | .DiagnosticDataBuffer
                                                           
        SDK_NONVOL_PROPERTIES( "_STORAGE_DIAGNOSTIC_DATA.$", 0x0, false, 0xb189fbe75df5fca0 );                       
        SDK_FIXED_SIZE( storage_diagnostic_data_t, 0x24 );                       
    };                                                     
};
#include "magic/storage_diagnostic_data_t.end.hpp"
SDK_VERIFY( struct nt::storage_diagnostic_data_t, 0x24 );
