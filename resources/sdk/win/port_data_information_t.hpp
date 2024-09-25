#pragma once
#include <sdkgen/support_library.hpp>
#include "port_data_entry_t.hpp"

#include "magic/port_data_information_t.start.hpp"
namespace win
{
    // [struct _PORT_DATA_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct port_data_information_t                                           
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                   
        _m00 uint32_t                                     count_data_entries;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CountDataEntries
        _m01 sdk::array<struct win::port_data_entry_t, 1> data_entries;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DataEntries
                                                                             
        SDK_MAGIC_PROPERTIES( "_PORT_DATA_INFORMATION.$", 0x18, true, 0xdb789906c4f92314 );                   
        SDK_FIXED_SIZE( port_data_information_t, 0x18 );                     
    };                                                                       
};
#include "magic/port_data_information_t.end.hpp"
SDK_VERIFY( struct win::port_data_information_t, 0x18 );
