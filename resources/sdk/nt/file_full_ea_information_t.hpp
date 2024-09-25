#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_full_ea_information_t.start.hpp"
namespace nt
{
    // [struct _FILE_FULL_EA_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_full_ea_information_t              
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                         
        _m00 uint32_t            next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 uint8_t             flags;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint8_t             ea_name_length;     //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .EaNameLength
        _m03 uint16_t            ea_value_length;    //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .EaValueLength
        _m04 sdk::array<char, 1> ea_name;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .EaName
                                                   
        SDK_NONVOL_PROPERTIES( "_FILE_FULL_EA_INFORMATION.$", 0xc, true, 0x85c1db28e48ee8f8 );                  
        SDK_FIXED_SIZE( file_full_ea_information_t, 0xc );                  
    };                                             
};
#include "magic/file_full_ea_information_t.end.hpp"
SDK_VERIFY( struct nt::file_full_ea_information_t, 0xc );
