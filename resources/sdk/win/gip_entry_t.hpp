#pragma once
#include <sdkgen/support_library.hpp>
#include "marshal_params_t.hpp"

namespace tag { struct interface_data_t; }
namespace tag { struct objref_t;         }

#include "magic/gip_entry_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    class c_list_element_t;
    class c_object_context_t;

    // [class GIPEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class gip_entry_t                                                   
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                              
        _m00 class win::c_list_element_t*   flink;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._flink
        _m01 class win::c_list_element_t*   blink;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._blink
        _m02 uint32_t                       dw_type;                      //{ +0x0010    +0x0018    +0x0018    +0x0018    } | .dwType
        _m03 uint32_t                       dw_seq_no;                    //{ +0x0014    +0x001c    +0x001c    +0x001c    } | .dwSeqNo
        _m04 volatile int32_t               c_usage;                      //{ +0x0018    +0x0020    +0x0020    +0x0020    } | .cUsage
        _m05 uint32_t                       dw_apt_id;                    //{ +0x001c    +0x0024    +0x0024    +0x0024    } | .dwAptId
        _m06 class win::c_object_context_t* p_context;                    //{ +0x0020    +0x0028    +0x0028    +0x0028    } | .pContext
        _m07 struct win::i_unknown_t*       p_unk;                        //{ +0x0028    +0x0030    +0x0030    +0x0030    } | .pUnk
        _m08 void*                          p_vtable;                     //{ +0x0030    +0x0038    +0x0038    +0x0038    } | .pVtable
        _m09 struct win::i_unknown_t*       p_unk_proxy;                  //{ +0x0038    +0x0040    +0x0040    +0x0040    } | .pUnkProxy
        _m10 struct win::i_unknown_t*       p_unk_mta_unmarshaled_proxy;  //{ +0x0040    +0x0048    +0x0048    +0x0048    } | .pUnkMtaUnmarshaledProxy
        _m11 struct win::marshal_params_t   mp;                           //{ +0x0048    +0x0050    +0x0050    +0x0050    } | .mp
        _m12 struct tag::interface_data_t*  p_ifd;                        //{ +0x0060    +0x0068    +0x0068    +0x0068    } | .pIFD
        _m13 struct tag::objref_t*          pobjref;                      //{ +0x0060    +0x0068    +0x0068    +0x0068    } | .pobjref
                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                              
        _m14 bool                           m_is_in_list;                 //{ +0x0010    +0x0010    +0x0010    } | .m_isInList
                                                                        
        SDK_MAGIC_PROPERTIES( "GIPEntry.$", 0x70, true, 0x795ae7c2fa806210 );                            
        SDK_DYNAMIC_SIZE( gip_entry_t );                                
    };                                                                  
};
#include "magic/gip_entry_t.end.hpp"
