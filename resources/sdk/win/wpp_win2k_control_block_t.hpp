#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/wpp_win2k_control_block_t.start.hpp"
namespace win
{
    // [struct _WPP_WIN2K_CONTROL_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wpp_win2k_control_block_t               
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                         
        _m00 uint64_t                 logger;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Logger
        _m01 uint32_t                 flags;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 uint32_t                 level;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Level
        _m03 const struct nt::guid_t* control_guid;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ControlGuid
                                                   
        SDK_MAGIC_PROPERTIES( "_WPP_WIN2K_CONTROL_BLOCK.$", 0x18, true, 0x6e68cea1a793f935 );             
        SDK_FIXED_SIZE( wpp_win2k_control_block_t, 0x18 );             
    };                                             
};
#include "magic/wpp_win2k_control_block_t.end.hpp"
SDK_VERIFY( struct win::wpp_win2k_control_block_t, 0x18 );
