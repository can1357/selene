#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/wpp_trace_control_block_t.start.hpp"
namespace pci
{
    struct wpp_trace_control_block_t;

    // [struct _WPP_TRACE_CONTROL_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wpp_trace_control_block_t                                             
    {                                                                            
        using callback_t = sdk::function<int32_t(uint8_t, void*, uint32_t, void*, void*, uint32_t*)>*;                             
                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                       
        _m00 callback_t                             callback;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Callback
        _m01 const struct nt::guid_t*               control_guid;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ControlGuid
        _m02 struct pci::wpp_trace_control_block_t* next;                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Next
        _m03 int64_t                                logger;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Logger
        _m04 nt::unicode_view*                      registry_path;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RegistryPath
        _m05 uint8_t                                flags_len;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FlagsLen
        _m06 uint8_t                                level;                         //{ +0x0029    +0x0029    +0x0029    +0x0029    } | .Level
        _m07 sdk::array<uint32_t, 1>                flags;                         //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Flags
        _m08 uint64_t                               reg_handle;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .RegHandle
        _m09 void*                                  auto_log_context;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .AutoLogContext
        _m10 uint16_t                               auto_log_verbose_enabled;      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .AutoLogVerboseEnabled
        _m11 uint16_t                               auto_log_attach_to_mini_dump;  //{ +0x004a    +0x004a    +0x004a    +0x004a    } | .AutoLogAttachToMiniDump
                                                                                 
        SDK_MAGIC_PROPERTIES( "_WPP_TRACE_CONTROL_BLOCK.$", 0x50, true, 0x99100843602671bd );                             
        SDK_FIXED_SIZE( wpp_trace_control_block_t, 0x50 );                             
    };                                                                           
};
#include "magic/wpp_trace_control_block_t.end.hpp"
SDK_VERIFY( struct pci::wpp_trace_control_block_t, 0x50 );
