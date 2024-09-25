#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagBINDSTATUS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class bindstatus_t : int32_t                   
    {                                                   
        bindstatus_findingresource =            0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_connecting =                 0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_redirecting =                0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_begindownloaddata =          0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_downloadingdata =            0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_enddownloaddata =            0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_begindownloadcomponents =    0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_installingcomponents =       0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_enddownloadcomponents =      0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_usingcachedcopy =            0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_sendingrequest =             0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_classidavailable =           0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_mimetypeavailable =          0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_cachefilenameavailable =     0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_beginsyncoperation =         0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_endsyncoperation =           0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_beginuploaddata =            0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_uploadingdata =              0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_enduploaddata =              0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_protocolclassid =            0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_encoding =                   0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_verifiedmimetypeavailable =  0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_classinstalllocation =       0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_decoding =                   0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_loadingmimehandler =         0x19,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_contentdispositionattach =   0x1a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_filterreportmimetype =       0x1b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_clsidcaninstantiate =        0x1c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_iunknownavailable =          0x1d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_directbind =                 0x1e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_rawmimetype =                0x1f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_proxydetecting =             0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_acceptranges =               0x21,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_cookie_sent =                0x22,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_compact_policy_received =    0x23,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_cookie_suppressed =          0x24,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_cookie_state_unknown =       0x25,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_cookie_state_accept =        0x26,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_cookie_state_reject =        0x27,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_cookie_state_prompt =        0x28,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_cookie_state_leash =         0x29,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_cookie_state_downgrade =     0x2a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_policy_href =                0x2b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_p3p_header =                 0x2c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_session_cookie_received =    0x2d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_persistent_cookie_received = 0x2e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_session_cookies_allowed =    0x2f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_cachecontrol =               0x30,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_contentdispositionfilename = 0x31,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_mimetextplainmismatch =      0x32,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_publisheravailable =         0x33,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_displaynameavailable =       0x34,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_sslux_navblocked =           0x35,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_server_mimetypeavailable =   0x36,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_sniffed_classidavailable =   0x37,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_64bit_progress =             0x38,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_last =                       0x38,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_0 =                 0x39,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_1 =                 0x3a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_2 =                 0x3b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_3 =                 0x3c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_4 =                 0x3d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_5 =                 0x3e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_6 =                 0x3f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_7 =                 0x40,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_8 =                 0x41,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_9 =                 0x42,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_a =                 0x43,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_b =                 0x44,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_c =                 0x45,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_d =                 0x46,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_e =                 0x47,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_f =                 0x48,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_10 =                0x49,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //bindstatus_last_private =             0x4a,     // Windows 10 v1607
        bindstatus_reserved_11 =                0x4a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_reserved_12 =                0x4b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindstatus_last_private =               0x4c,     // Windows 10 v2004, Windows 10 v20H2
        bindstatus_reserved_13 =                0x4c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //bindstatus_last_private =             0x4d,     // Windows 11
        bindstatus_reserved_14 =                0x4d,     // Windows 11
    };                                                  
};
