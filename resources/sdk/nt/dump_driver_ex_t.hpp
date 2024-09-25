#pragma once
#include <sdkgen/support_library.hpp>
#include "ntscsi_unicode_string_t.hpp"

#include "magic/dump_driver_ex_t.start.hpp"
namespace nt
{
    // [struct _DUMP_DRIVER_EX]
    // => WDK 10 (NV)
    //
    struct dump_driver_ex_t                                      
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 void*                              dump_driver_list;  //{ +0x0000    } | .DumpDriverList
        _m01 sdk::array<wchar_t, 15>            driver_name;       //{ +0x0008    } | .DriverName
        _m02 sdk::array<wchar_t, 15>            base_name;         //{ +0x0026    } | .BaseName
        _m03 struct nt::ntscsi_unicode_string_t driver_full_path;  //{ +0x0048    } | .DriverFullPath
                                                                 
        SDK_NONVOL_PROPERTIES( "_DUMP_DRIVER_EX.$", 0x0, false, 0xda930b7b5cc376e4 );                 
        SDK_FIXED_SIZE( dump_driver_ex_t, 0x58 );                 
    };                                                           
};
#include "magic/dump_driver_ex_t.end.hpp"
SDK_VERIFY( struct nt::dump_driver_ex_t, 0x58 );
