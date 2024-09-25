#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../win/remsecurity_attributes_t.hpp"

namespace win { struct i_unknown_t; }

#include "magic/rem_bindinfo_t.start.hpp"
namespace tag
{
    // [struct _tagRemBINDINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rem_bindinfo_t                                             
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                            
        _m00 uint32_t                             cb_size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 wchar_t*                             sz_extra_info;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .szExtraInfo
        _m02 uint32_t                             grf_bind_info_f;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .grfBindInfoF
        _m03 uint32_t                             dw_bind_verb;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwBindVerb
        _m04 wchar_t*                             sz_custom_verb;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .szCustomVerb
        _m05 uint32_t                             cbstgmed_data;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cbstgmedData
        _m06 uint32_t                             dw_options;           //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwOptions
        _m07 uint32_t                             dw_options_flags;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwOptionsFlags
        _m08 uint32_t                             dw_code_page;         //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .dwCodePage
        _m09 struct win::remsecurity_attributes_t security_attributes;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .securityAttributes
        _m10 struct nt::guid_t                    iid;                  //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .iid
        _m11 struct win::i_unknown_t*             p_unk;                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .pUnk
        _m12 uint32_t                             dw_reserved;          //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .dwReserved
                                                                      
        SDK_MAGIC_PROPERTIES( "_tagRemBINDINFO.$", 0x60, true, 0x51df29de98c35998 );                    
        SDK_FIXED_SIZE( rem_bindinfo_t, 0x60 );                       
    };                                                                
};
#include "magic/rem_bindinfo_t.end.hpp"
SDK_VERIFY( struct tag::rem_bindinfo_t, 0x60 );
