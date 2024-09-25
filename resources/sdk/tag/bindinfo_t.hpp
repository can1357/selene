#pragma once
#include <sdkgen/support_library.hpp>
#include "stgmedium_t.hpp"
#include "../nt/guid_t.hpp"
#include "../sec/attributes_t.hpp"

namespace win { struct i_unknown_t; }

#include "magic/bindinfo_t.start.hpp"
namespace tag
{
    // [struct _tagBINDINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bindinfo_t                                     
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                
        _m00 uint32_t                 cb_size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 wchar_t*                 sz_extra_info;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .szExtraInfo
        _m02 struct tag::stgmedium_t  stgmed_data;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .stgmedData
        _m03 uint32_t                 grf_bind_info_f;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .grfBindInfoF
        _m04 uint32_t                 dw_bind_verb;         //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .dwBindVerb
        _m05 wchar_t*                 sz_custom_verb;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .szCustomVerb
        _m06 uint32_t                 cbstgmed_data;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .cbstgmedData
        _m07 uint32_t                 dw_options;           //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .dwOptions
        _m08 uint32_t                 dw_options_flags;     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .dwOptionsFlags
        _m09 uint32_t                 dw_code_page;         //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .dwCodePage
        _m10 struct sec::attributes_t security_attributes;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .securityAttributes
        _m11 struct nt::guid_t        iid;                  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .iid
        _m12 struct win::i_unknown_t* p_unk;                //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .pUnk
        _m13 uint32_t                 dw_reserved;          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .dwReserved
                                                          
        SDK_MAGIC_PROPERTIES( "_tagBINDINFO.$", 0x80, true, 0x874b8d5893569672 );                    
        SDK_FIXED_SIZE( bindinfo_t, 0x80 );                    
    };                                                    
};
#include "magic/bindinfo_t.end.hpp"
SDK_VERIFY( struct tag::bindinfo_t, 0x80 );
