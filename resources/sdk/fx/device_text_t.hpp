#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/single_list_entry_t.hpp"

#include "magic/device_text_t.start.hpp"
namespace fx
{
    // [struct FxDeviceText]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_text_t                                           
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                         
        _m00 struct nt::single_list_entry_t m_entry;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Entry
        _m01 wchar_t*                       m_description;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Description
        _m02 wchar_t*                       m_location_information;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_LocationInformation
        _m03 uint32_t                       m_locale_id;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_LocaleId
                                                                   
        SDK_MAGIC_PROPERTIES( "FxDeviceText.$", 0x20, true, 0x7f94d375ec03df24 );                       
        SDK_FIXED_SIZE( device_text_t, 0x20 );                       
    };                                                             
};
#include "magic/device_text_t.end.hpp"
SDK_VERIFY( struct fx::device_text_t, 0x20 );
