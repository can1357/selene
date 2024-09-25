#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/plugplay_control_class_association_data_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_CLASS_ASSOCIATION_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_class_association_data_t
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                      
        _m00 nt::unicode_view   device_instance;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceInstance
        _m01 struct nt::guid_t* interface_guid;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceGuid
        _m02 nt::unicode_view   reference;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Reference
        _m03 uint8_t            _register;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Register
        _m04 wchar_t*           sym_link;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SymLink
        _m05 uint32_t           sym_link_length;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SymLinkLength
                                                    
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_CLASS_ASSOCIATION_DATA.$", 0x40, true, 0x7662a845822779a8 );                
        SDK_FIXED_SIZE( plugplay_control_class_association_data_t, 0x40 );                
    };                                              
};
#include "magic/plugplay_control_class_association_data_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_class_association_data_t, 0x40 );
