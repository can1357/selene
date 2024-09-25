#pragma once
#include <sdkgen/support_library.hpp>
#include "eisa_memory_type_t.hpp"

#include "magic/eisa_memory_configuration_t.start.hpp"
namespace win
{
    // [struct _EISA_MEMORY_CONFIGURATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct eisa_memory_configuration_t                         
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m00 struct win::eisa_memory_type_t configuration_byte;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ConfigurationByte
        _m01 uint8_t                        data_size;           //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .DataSize
        _m02 uint16_t                       address_low_word;    //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .AddressLowWord
        _m03 uint8_t                        address_high_byte;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .AddressHighByte
        _m04 uint16_t                       memory_size;         //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .MemorySize
                                                               
        SDK_NONVOL_PROPERTIES( "_EISA_MEMORY_CONFIGURATION.$", 0x7, true, 0xb722bcb633836811 );                   
        SDK_FIXED_SIZE( eisa_memory_configuration_t, 0x7 );                   
    };                                                         
};
#include "magic/eisa_memory_configuration_t.end.hpp"
SDK_VERIFY( struct win::eisa_memory_configuration_t, 0x7 );
