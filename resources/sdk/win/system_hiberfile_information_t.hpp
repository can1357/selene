#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_hiberfile_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_HIBERFILE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_hiberfile_information_t               
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 uint32_t               number_of_mcb_pairs;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfMcbPairs
        _m01 sdk::array<int64_t, 1> mcb;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Mcb
                                                        
        SDK_MAGIC_PROPERTIES( "_SYSTEM_HIBERFILE_INFORMATION.$", 0x10, true, 0x4ec462f5664f58d8 );                    
        SDK_FIXED_SIZE( system_hiberfile_information_t, 0x10 );                    
    };                                                  
};
#include "magic/system_hiberfile_information_t.end.hpp"
SDK_VERIFY( struct win::system_hiberfile_information_t, 0x10 );
