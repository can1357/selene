#pragma once
#include <sdkgen/support_library.hpp>

namespace tag { struct context_property_t; }
namespace tag { struct s_ctx_list_index_t; }

#include "magic/c_context_prop_list_t.start.hpp"
namespace win
{
    // [class CContextPropList]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_context_prop_list_t                               
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                    
        _m00 int32_t                         max;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._Max
        _m01 int32_t                         i_first;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | ._iFirst
        _m02 int32_t                         i_last;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._iLast
        _m03 int32_t                         count;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._Count
        _m04 int32_t                         c_compare_props;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._cCompareProps
        _m05 uint32_t                        hash;              //{ +0x0014    +0x0014    +0x0014    +0x0014    } | ._Hash
        _m06 int32_t                         slot_idx;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._slotIdx
        _m07 struct tag::context_property_t* p_props;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._pProps
        _m08 int32_t*                        p_slots;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._pSlots
        _m09 struct tag::context_property_t* p_compare_buffer;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._pCompareBuffer
        _m10 struct tag::s_ctx_list_index_t* p_index;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._pIndex
                                                              
        SDK_MAGIC_PROPERTIES( "CContextPropList.$", 0x40, true, 0x1d46c1b993b172f4 );                 
        SDK_FIXED_SIZE( c_context_prop_list_t, 0x40 );                 
    };                                                        
};
#include "magic/c_context_prop_list_t.end.hpp"
SDK_VERIFY( class win::c_context_prop_list_t, 0x40 );
