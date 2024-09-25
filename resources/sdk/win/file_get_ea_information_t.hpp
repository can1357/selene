#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_get_ea_information_t.start.hpp"
namespace win
{
    // [struct _FILE_GET_EA_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_get_ea_information_t               
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                         
        _m00 uint32_t            next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 uint8_t             ea_name_length;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .EaNameLength
        _m02 sdk::array<char, 1> ea_name;            //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .EaName
                                                   
        SDK_NONVOL_PROPERTIES( "_FILE_GET_EA_INFORMATION.$", 0x8, true, 0xedf3414c6fdfe8b1 );                  
        SDK_FIXED_SIZE( file_get_ea_information_t, 0x8 );                  
    };                                             
};
#include "magic/file_get_ea_information_t.end.hpp"
SDK_VERIFY( struct win::file_get_ea_information_t, 0x8 );
