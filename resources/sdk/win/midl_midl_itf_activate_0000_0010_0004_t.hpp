#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"
#include "../nt/guid_t.hpp"
#include "midl_midl_itf_activate_0000_0010_0001_t.hpp"
#include "midl_midl_itf_activate_0000_0010_0002_t.hpp"

#include "magic/midl_midl_itf_activate_0000_0010_0004_t.start.hpp"
namespace win
{
    // [struct __MIDL___MIDL_itf_activate_0000_0010_0004]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_midl_itf_activate_0000_0010_0004_t        
    {                                                     
        using server_type_t =    enum win::midl_midl_itf_activate_0000_0010_0001_t;                      
        using server_id_type_t = enum win::midl_midl_itf_activate_0000_0010_0002_t;                      
                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint32_t               ul_num_classes;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulNumClasses
        _m01 struct nt::guid_t*     p_clsi_ds;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pCLSIDs
        _m02 uint32_t               pid_process;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pidProcess
        _m03 void*                  h_process;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hProcess
        _m04 void*                  h_impersonation_token;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .hImpersonationToken
        _m05 wchar_t*               pwsz_winsta_desktop;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pwszWinstaDesktop
        _m06 uint32_t               dw_state;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwState
        _m07 struct nt::guid_t      app_id;                 //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .AppId
        _m08 server_type_t          server_type;            //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .ServerType
        _m09 server_id_type_t       server_id;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ServerID
        _m10 struct win::filetime_t ft_created;             //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .ftCreated
                                                          
        SDK_MAGIC_PROPERTIES( "__MIDL___MIDL_itf_activate_0000_0010_0004.$", 0x58, true, 0x79bea06aeec82767 );                      
        SDK_FIXED_SIZE( midl_midl_itf_activate_0000_0010_0004_t, 0x58 );                      
    };                                                    
};
#include "magic/midl_midl_itf_activate_0000_0010_0004_t.end.hpp"
SDK_VERIFY( struct win::midl_midl_itf_activate_0000_0010_0004_t, 0x58 );
