#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_root_error_status_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_ROOT_ERROR_STATUS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_root_error_status_t                         
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                    
        _m00 uint1_t  correctable_error_received;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CorrectableErrorReceived
        _m01 uint1_t  multiple_correctable_errors_received;     //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .MultipleCorrectableErrorsReceived
        _m02 uint1_t  uncorrectable_error_received;             //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .UncorrectableErrorReceived
        _m03 uint1_t  multiple_uncorrectable_errors_received;   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .MultipleUncorrectableErrorsReceived
        _m04 uint1_t  first_uncorrectable_fatal;                //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .FirstUncorrectableFatal
        _m05 uint1_t  non_fatal_error_messages_received;        //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .NonFatalErrorMessagesReceived
        _m06 uint1_t  fatal_error_messages_received;            //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .FatalErrorMessagesReceived
        _m07 uint5_t  advanced_error_interrupt_message_number;  //{ +0x0000@27 +0x0000@27 +0x0000@27 +0x0000@27 +0x0000@27 } | .AdvancedErrorInterruptMessageNumber
        _m08 uint32_t as_ulong;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                              
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_ROOT_ERROR_STATUS.$", 0x4, true, 0xc3483396b8e4b65f );                                        
        SDK_FIXED_SIZE( express_root_error_status_t, 0x4 );                                        
    };                                                        
};
#include "magic/express_root_error_status_t.end.hpp"
SDK_VERIFY( union pci::express_root_error_status_t, 0x4 );
