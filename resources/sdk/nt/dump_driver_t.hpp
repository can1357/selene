#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dump_driver_t.start.hpp"
namespace nt
{
    // [struct _DUMP_DRIVER]
    // => WDK 10 (NV)
    //
    struct dump_driver_t                              
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 void*                   dump_driver_list;  //{ +0x0000    } | .DumpDriverList
        _m01 sdk::array<wchar_t, 15> driver_name;       //{ +0x0008    } | .DriverName
        _m02 sdk::array<wchar_t, 15> base_name;         //{ +0x0026    } | .BaseName
                                                      
        SDK_NONVOL_PROPERTIES( "_DUMP_DRIVER.$", 0x0, false, 0xe542773cea9b039e );                 
        SDK_FIXED_SIZE( dump_driver_t, 0x48 );                 
    };                                                
};
#include "magic/dump_driver_t.end.hpp"
SDK_VERIFY( struct nt::dump_driver_t, 0x48 );
