#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_802_11_STATUS_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class _802_11_status_type_t : int32_t
    {                                         
        type_authentication =       0x0,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_media_stream_mode =    0x1,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_pmkid_candidate_list = 0x2,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_max =                  0x3,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
