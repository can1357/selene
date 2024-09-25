#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct i_internet_protocol_sink_t; }
namespace win { struct i_internet_protocol_t;      }
namespace win { struct i_unknown_t;                }

#include "magic/protocolfilterdata_t.start.hpp"
namespace tag
{
    // [struct _tagPROTOCOLFILTERDATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct protocolfilterdata_t                                      
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                           
        _m00 uint32_t                                cb_size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::i_internet_protocol_sink_t* p_protocol_sink;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pProtocolSink
        _m02 struct win::i_internet_protocol_t*      p_protocol;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pProtocol
        _m03 struct win::i_unknown_t*                p_unk;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pUnk
        _m04 uint32_t                                dw_filter_flags;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwFilterFlags
                                                                     
        SDK_MAGIC_PROPERTIES( "_tagPROTOCOLFILTERDATA.$", 0x28, true, 0x57dc17cbaa8d84ed );                
        SDK_FIXED_SIZE( protocolfilterdata_t, 0x28 );                
    };                                                               
};
#include "magic/protocolfilterdata_t.end.hpp"
SDK_VERIFY( struct tag::protocolfilterdata_t, 0x28 );
