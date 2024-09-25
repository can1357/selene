#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagBINDSTRING]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class bindstring_t : int32_t   
    {                                   
        headers =               0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        accept_mimes =          0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        extra_url =             0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        language =              0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        username =              0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        password =              0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ua_pixels =             0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ua_color =              0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        os =                    0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_agent =            0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        accept_encodings =      0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        post_cookie =           0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        post_data_mime =        0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        url =                   0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iid =                   0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        flag_bind_to_object =   0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ptr_bind_context =      0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        xdr_origin =            0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        downloadpath =          0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rootdoc_url =           0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initial_filename =      0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        proxy_username =        0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        proxy_password =        0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enterprise_id =         0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        doc_url =               0x19,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        samesite_cookie_level = 0x1a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
