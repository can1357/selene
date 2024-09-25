#pragma once
#include <sdkgen/support_library.hpp>
#include "msv1_0_profile_buffer_type_t.hpp"

#include "magic/msv1_0_interactive_profile_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_INTERACTIVE_PROFILE]
    // => WDK 10 (NV)
    //
    struct msv1_0_interactive_profile_t                                 
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 enum nt::msv1_0_profile_buffer_type_t message_type;          //{ +0x0000    } | .MessageType
        _m01 uint16_t                              logon_count;           //{ +0x0004    } | .LogonCount
        _m02 uint16_t                              bad_password_count;    //{ +0x0006    } | .BadPasswordCount
        _m03 int64_t                               logon_time;            //{ +0x0008    } | .LogonTime
        _m04 int64_t                               logoff_time;           //{ +0x0010    } | .LogoffTime
        _m05 int64_t                               kick_off_time;         //{ +0x0018    } | .KickOffTime
        _m06 int64_t                               password_last_set;     //{ +0x0020    } | .PasswordLastSet
        _m07 int64_t                               password_can_change;   //{ +0x0028    } | .PasswordCanChange
        _m08 int64_t                               password_must_change;  //{ +0x0030    } | .PasswordMustChange
        _m09 nt::unicode_view                      logon_script;          //{ +0x0038    } | .LogonScript
        _m10 nt::unicode_view                      home_directory;        //{ +0x0048    } | .HomeDirectory
        _m11 nt::unicode_view                      full_name;             //{ +0x0058    } | .FullName
        _m12 nt::unicode_view                      profile_path;          //{ +0x0068    } | .ProfilePath
        _m13 nt::unicode_view                      home_directory_drive;  //{ +0x0078    } | .HomeDirectoryDrive
        _m14 nt::unicode_view                      logon_server;          //{ +0x0088    } | .LogonServer
        _m15 uint32_t                              user_flags;            //{ +0x0098    } | .UserFlags
                                                                        
        SDK_NONVOL_PROPERTIES( "_MSV1_0_INTERACTIVE_PROFILE.$", 0x0, false, 0x18b7481f02f55408 );                     
        SDK_FIXED_SIZE( msv1_0_interactive_profile_t, 0xa0 );                     
    };                                                                  
};
#include "magic/msv1_0_interactive_profile_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_interactive_profile_t, 0xa0 );
