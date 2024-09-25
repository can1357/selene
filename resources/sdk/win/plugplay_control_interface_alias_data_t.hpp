#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/plugplay_control_interface_alias_data_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_INTERFACE_ALIAS_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_interface_alias_data_t              
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                      
        _m00 nt::unicode_view   symbolic_link_name;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SymbolicLinkName
        _m01 struct nt::guid_t* alias_class_guid;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AliasClassGuid
        _m02 wchar_t*           alias_symbolic_link_name;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AliasSymbolicLinkName
        _m03 uint32_t           alias_symbolic_link_name_length;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .AliasSymbolicLinkNameLength
                                                                
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_INTERFACE_ALIAS_DATA.$", 0x28, true, 0xf9511cf610ccf8f0 );                                
        SDK_FIXED_SIZE( plugplay_control_interface_alias_data_t, 0x28 );                                
    };                                                          
};
#include "magic/plugplay_control_interface_alias_data_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_interface_alias_data_t, 0x28 );
