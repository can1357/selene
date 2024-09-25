#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/wpp_registration_block_t.start.hpp"
namespace wdf
{
    struct wpp_registration_block_t;

    // [struct _WPP_REGISTRATION_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wpp_registration_block_t                              
    {                                                            
        using callback_t = sdk::function<int32_t(uint8_t, void*, uint32_t, void*, void*, uint32_t*)>*;              
                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                       
        _m00 callback_t                            callback;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Callback
        _m01 const struct nt::guid_t*              control_guid;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ControlGuid
        _m02 struct wdf::wpp_registration_block_t* next;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Next
        _m03 uint64_t                              logger;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Logger
        _m04 const wchar_t*                        friendly_name;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FriendlyName
        _m05 const wchar_t*                        bit_names;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .BitNames
        _m06 nt::unicode_view*                     registry_path;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .RegistryPath
        _m07 uint8_t                               flags_len;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .FlagsLen
        _m08 uint8_t                               reg_block_len;  //{ +0x0039    +0x0039    +0x0039    +0x0039    } | .RegBlockLen
                                                                 
        SDK_MAGIC_PROPERTIES( "_WPP_REGISTRATION_BLOCK.$", 0x40, true, 0x4b18fc2dc7eafb69 );              
        SDK_FIXED_SIZE( wpp_registration_block_t, 0x40 );              
    };                                                           
};
#include "magic/wpp_registration_block_t.end.hpp"
SDK_VERIFY( struct wdf::wpp_registration_block_t, 0x40 );
