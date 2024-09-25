#pragma once
#include <sdkgen/support_library.hpp>
#include "file_ea_information_t.hpp"
#include "file_mode_information_t.hpp"
#include "file_name_information_t.hpp"
#include "file_access_information_t.hpp"
#include "file_internal_information_t.hpp"
#include "file_position_information_t.hpp"
#include "file_alignment_information_t.hpp"
#include "../nt/file_basic_information_t.hpp"
#include "../nt/file_standard_information_t.hpp"

#include "magic/file_all_information_t.start.hpp"
namespace win
{
    // [struct _FILE_ALL_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_all_information_t                                           
    {                                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                  
        _m00 struct nt::file_basic_information_t      basic_information;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BasicInformation
        _m01 struct nt::file_standard_information_t   standard_information;   //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .StandardInformation
        _m02 struct win::file_internal_information_t  internal_information;   //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .InternalInformation
        _m03 struct win::file_ea_information_t        ea_information;         //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .EaInformation
        _m04 struct win::file_access_information_t    access_information;     //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .AccessInformation
        _m05 struct win::file_position_information_t  position_information;   //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .PositionInformation
        _m06 struct win::file_mode_information_t      mode_information;       //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .ModeInformation
        _m07 struct win::file_alignment_information_t alignment_information;  //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .AlignmentInformation
        _m08 struct win::file_name_information_t      name_information;       //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .NameInformation
                                                                            
        SDK_NONVOL_PROPERTIES( "_FILE_ALL_INFORMATION.$", 0x68, true, 0xde4bcef78e0c0c1b );                      
        SDK_FIXED_SIZE( file_all_information_t, 0x68 );                      
    };                                                                      
};
#include "magic/file_all_information_t.end.hpp"
SDK_VERIFY( struct win::file_all_information_t, 0x68 );
