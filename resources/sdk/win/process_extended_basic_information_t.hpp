#pragma once
#include <sdkgen/support_library.hpp>
#include "process_basic_information_t.hpp"

#include "magic/process_extended_basic_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_EXTENDED_BASIC_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_extended_basic_information_t                              
    {                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                   
        _m00 uint64_t                                size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 struct win::process_basic_information_t basic_info;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .BasicInfo
        _m02 uint32_t                                flags;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .Flags
        _m03 uint1_t                                 is_protected_process;     //{ +0x0038@0  +0x0038@0  +0x0038@0  +0x0038@0  +0x0038@0  } | .IsProtectedProcess
        _m04 uint1_t                                 is_wow64_process;         //{ +0x0038@1  +0x0038@1  +0x0038@1  +0x0038@1  +0x0038@1  } | .IsWow64Process
        _m05 uint1_t                                 is_process_deleting;      //{ +0x0038@2  +0x0038@2  +0x0038@2  +0x0038@2  +0x0038@2  } | .IsProcessDeleting
        _m06 uint1_t                                 is_cross_session_create;  //{ +0x0038@3  +0x0038@3  +0x0038@3  +0x0038@3  +0x0038@3  } | .IsCrossSessionCreate
        _m07 uint1_t                                 is_frozen;                //{ +0x0038@4  +0x0038@4  +0x0038@4  +0x0038@4  +0x0038@4  } | .IsFrozen
        _m08 uint1_t                                 is_background;            //{ +0x0038@5  +0x0038@5  +0x0038@5  +0x0038@5  +0x0038@5  } | .IsBackground
        _m09 uint1_t                                 is_strongly_named;        //{ +0x0038@6  +0x0038@6  +0x0038@6  +0x0038@6  +0x0038@6  } | .IsStronglyNamed
        _m10 uint1_t                                 is_secure_process;        //{ +0x0038@7  +0x0038@7  +0x0038@7  +0x0038@7  +0x0038@7  } | .IsSecureProcess
                                                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                   
        _m11 uint1_t                                 is_subsystem_process;     //{ +0x0038@8  +0x0038@8  +0x0038@8  +0x0038@8  } | .IsSubsystemProcess
                                                                             
        // Windows 10 v1607                                                  
        //                                                                   
        _m12 uint1_t                                 is_pico_process;          //{ +0x0038@8  } | .IsPicoProcess
                                                                             
        SDK_NONVOL_PROPERTIES( "_PROCESS_EXTENDED_BASIC_INFORMATION.$", 0x40, true, 0xc9f9a7c7496334f8 );                        
        SDK_FIXED_SIZE( process_extended_basic_information_t, 0x40 );                        
    };                                                                       
};
#include "magic/process_extended_basic_information_t.end.hpp"
SDK_VERIFY( struct win::process_extended_basic_information_t, 0x40 );
