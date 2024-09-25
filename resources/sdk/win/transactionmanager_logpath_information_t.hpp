#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/transactionmanager_logpath_information_t.start.hpp"
namespace win
{
    // [struct _TRANSACTIONMANAGER_LOGPATH_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transactionmanager_logpath_information_t 
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                          
        _m00 uint32_t               log_path_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LogPathLength
        _m01 sdk::array<wchar_t, 1> log_path;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .LogPath
                                                    
        SDK_NONVOL_PROPERTIES( "_TRANSACTIONMANAGER_LOGPATH_INFORMATION.$", 0x8, true, 0xd68413087990d18 );                
        SDK_FIXED_SIZE( transactionmanager_logpath_information_t, 0x8 );                
    };                                              
};
#include "magic/transactionmanager_logpath_information_t.end.hpp"
SDK_VERIFY( struct win::transactionmanager_logpath_information_t, 0x8 );
