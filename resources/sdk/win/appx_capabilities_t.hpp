#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum APPX_CAPABILITIES]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class appx_capabilities_t : int32_t     
    {                                            
        internet_client =               0x1,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internet_client_server =        0x2,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        private_network_client_server = 0x4,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        documents_library =             0x8,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pictures_library =              0x10,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        videos_library =                0x20,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        music_library =                 0x40,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enterprise_authentication =     0x80,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        shared_user_certificates =      0x100,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        removable_storage =             0x200,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        appointments =                  0x400,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        contacts =                      0x800,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
