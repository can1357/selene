#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/version_t.hpp"

#include "magic/dump_driver_info_entry_t.start.hpp"
namespace fx
{
    struct driver_globals_t;

    // [struct _FX_DUMP_DRIVER_INFO_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dump_driver_info_entry_t                         
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                  
        _m00 struct fx::driver_globals_t* fx_driver_globals;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FxDriverGlobals
        _m01 struct wdf::version_t        version;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Version
        _m02 sdk::array<char, 32>         driver_name;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .DriverName
                                                            
        SDK_MAGIC_PROPERTIES( "_FX_DUMP_DRIVER_INFO_ENTRY.$", 0x38, true, 0x95264d6e5160688a );                  
        SDK_FIXED_SIZE( dump_driver_info_entry_t, 0x38 );                  
    };                                                      
};
#include "magic/dump_driver_info_entry_t.end.hpp"
SDK_VERIFY( struct fx::dump_driver_info_entry_t, 0x38 );
