#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;                 }
namespace win { struct async_i_rem_unknown2_t; }
namespace win { struct i_marshal_t;            }

#include "magic/qicontext_t.start.hpp"
namespace tag
{
    struct ipid_entry_t;
    struct remqiresult_t;
    struct m_interface_pointer_t;

    // [struct tagQICONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct qicontext_t                                        
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                    
        _m00 uint32_t                            dw_flags;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFlags
        _m01 struct win::async_i_rem_unknown2_t* p_aru;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pARU
        _m02 uint16_t                            c_ii_ds;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cIIDs
        _m03 struct nt::guid_t*                  p_ii_ds;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pIIDs
        _m04 sdk::hresult                        hr;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .hr
        _m05 struct tag::remqiresult_t*          p_rem_qi_res;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pRemQiRes
        _m06 struct tag::ipid_entry_t*           p_ipid_entry;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pIPIDEntry
        _m07 struct win::i_marshal_t*            p_im;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pIM
        _m08 sdk::hresult*                       phr;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .phr
        _m09 struct tag::m_interface_pointer_t** pp_mi_fs;      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ppMIFs
        _m10 sdk::array<uint8_t, 1>              data;          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .data
                                                              
        SDK_MAGIC_PROPERTIES( "tagQICONTEXT.$", 0x58, true, 0xb242065e1a66e5b3 );             
        SDK_FIXED_SIZE( qicontext_t, 0x58 );                  
    };                                                        
};
#include "magic/qicontext_t.end.hpp"
SDK_VERIFY( struct tag::qicontext_t, 0x58 );
