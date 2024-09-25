#pragma once
#include <sdkgen/support_library.hpp>
#include "sense_data_t.hpp"
#include "descriptor_sense_data_t.hpp"

#include "magic/sense_data_ex_t.start.hpp"
namespace stor::port
{
    // [union _SENSE_DATA_EX]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union sense_data_ex_t                                               
    {                                                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                              
        _m00 struct stor::port::sense_data_t            fixed_data;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FixedData
        _m01 struct stor::port::descriptor_sense_data_t descriptor_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DescriptorData
                                                                        
        SDK_NONVOL_PROPERTIES( "_SENSE_DATA_EX.$", 0x12, true, 0xb1a01d63c99dfcda );                
        SDK_FIXED_SIZE( sense_data_ex_t, 0x12 );                        
    };                                                                  
};
#include "magic/sense_data_ex_t.end.hpp"
SDK_VERIFY( union stor::port::sense_data_ex_t, 0x12 );
