#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_root_error_command_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_ROOT_ERROR_COMMAND]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_root_error_command_t                   
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                               
        _m00 uint1_t  correctable_error_reporting_enable;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CorrectableErrorReportingEnable
        _m01 uint1_t  non_fatal_error_reporting_enable;    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NonFatalErrorReportingEnable
        _m02 uint1_t  fatal_error_reporting_enable;        //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .FatalErrorReportingEnable
        _m03 uint32_t as_ulong;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                         
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_ROOT_ERROR_COMMAND.$", 0x4, true, 0xbaa3b0d8d447e69b );                                   
        SDK_FIXED_SIZE( express_root_error_command_t, 0x4 );                                   
    };                                                   
};
#include "magic/express_root_error_command_t.end.hpp"
SDK_VERIFY( union pci::express_root_error_command_t, 0x4 );
