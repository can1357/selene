#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_adapter_serial_number_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_ADAPTER_SERIAL_NUMBER]
    // => WDK 10 (NV)
    //
    struct storage_adapter_serial_number_t          
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint32_t                 version;        //{ +0x0000    } | .Version
        _m01 uint32_t                 size;           //{ +0x0004    } | .Size
        _m02 sdk::array<wchar_t, 128> serial_number;  //{ +0x0008    } | .SerialNumber
                                                    
        SDK_NONVOL_PROPERTIES( "_STORAGE_ADAPTER_SERIAL_NUMBER.$", 0x0, false, 0xaba57a6c9cd653d );              
        SDK_FIXED_SIZE( storage_adapter_serial_number_t, 0x108 );              
    };                                              
};
#include "magic/storage_adapter_serial_number_t.end.hpp"
SDK_VERIFY( struct nt::storage_adapter_serial_number_t, 0x108 );
