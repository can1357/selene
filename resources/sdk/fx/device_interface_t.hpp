#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/single_list_entry_t.hpp"

#include "magic/device_interface_t.start.hpp"
namespace fx
{
    // [class FxDeviceInterface]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class device_interface_t                                             
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                               
        _m00 struct nt::guid_t              m_interface_class_guid;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_InterfaceClassGUID
        _m01 nt::unicode_view               m_reference_string;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_ReferenceString
        _m02 nt::unicode_view               m_symbolic_link_name;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_SymbolicLinkName
        _m03 struct nt::single_list_entry_t m_entry;                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_Entry
        _m04 uint8_t                        m_state;                       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .m_State
                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                               
        _m05 uint8_t                        m_auto_enable_on_first_start;  //{ +0x0039    +0x0039    +0x0039    } | .m_AutoEnableOnFirstStart
                                                                         
        SDK_MAGIC_PROPERTIES( "FxDeviceInterface.$", 0x40, true, 0x44cb14f8fcfbfdd0 );                             
        SDK_FIXED_SIZE( device_interface_t, 0x40 );                             
    };                                                                   
};
#include "magic/device_interface_t.end.hpp"
SDK_VERIFY( class fx::device_interface_t, 0x40 );
