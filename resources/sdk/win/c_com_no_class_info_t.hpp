#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/c_com_no_class_info_t.start.hpp"
namespace win
{
    // [class CComNoClassInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_com_no_class_info_t                            
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                 
        _m00 int32_t           m_c_ref;                      //{ +0x0018    +0x0018    +0x0020    +0x0018    } | .m_cRef
        _m01 struct nt::guid_t m_clsid;                      //{ +0x001c    +0x001c    +0x0024    +0x001c    } | .m_clsid
        _m02 wchar_t*          m_wsz_prog_id;                //{ +0x0030    +0x0030    +0x0038    +0x0030    } | .m_wszProgID
        _m03 uint32_t          m_value_flags;                //{ +0x0038    +0x0038    +0x0040    +0x0038    } | .m_ValueFlags
        _m04 uint64_t          m_change_detection_sequence;  //{ +0x0048    +0x0048    +0x0050    +0x0048    } | .m_changeDetectionSequence
                                                           
        SDK_MAGIC_PROPERTIES( "CComNoClassInfo.$", 0x50, true, 0x985c07c17e3b9780 );                            
        SDK_DYNAMIC_SIZE( c_com_no_class_info_t );                            
    };                                                     
};
#include "magic/c_com_no_class_info_t.end.hpp"
