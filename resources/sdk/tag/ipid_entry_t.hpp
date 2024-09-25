#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

namespace win { class c_ctx_com_chnl_t; }
namespace win { class oxid_entry_t;     }
namespace win { struct hstring_t;       }
namespace win { struct i_unknown_t;     }
namespace win { struct irc_entry_t;     }

#include "magic/ipid_entry_t.start.hpp"
namespace tag
{
    struct ipid_entry_t;

    // [struct tagIPIDEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ipid_entry_t                                    
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                 
        _m00 struct tag::ipid_entry_t*    p_next_ipid;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pNextIPID
        _m01 uint32_t                     dw_flags;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwFlags
        _m02 uint32_t                     c_strong_refs;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cStrongRefs
        _m03 uint32_t                     c_weak_refs;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cWeakRefs
        _m04 uint32_t                     c_private_refs;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .cPrivateRefs
        _m05 void*                        pv;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pv
        _m06 struct win::i_unknown_t*     p_stub;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pStub
        _m07 class win::oxid_entry_t*     p_oxid_entry;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pOXIDEntry
        _m08 struct nt::guid_t            ipid;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ipid
        _m09 struct nt::guid_t            iid;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .iid
        _m10 class win::c_ctx_com_chnl_t* p_chnl;            //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .pChnl
        _m11 struct win::irc_entry_t*     p_irc_entry;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .pIRCEntry
        _m12 struct win::hstring_t*       p_interface_name;  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .pInterfaceName
        _m13 struct tag::ipid_entry_t*    p_oidf_link;       //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .pOIDFLink
        _m14 struct tag::ipid_entry_t*    p_oidb_link;       //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .pOIDBLink
                                                           
        SDK_MAGIC_PROPERTIES( "tagIPIDEntry.$", 0x78, true, 0x6e7d6e4bd181d6a0 );                 
        SDK_FIXED_SIZE( ipid_entry_t, 0x78 );                 
    };                                                     
};
#include "magic/ipid_entry_t.end.hpp"
SDK_VERIFY( struct tag::ipid_entry_t, 0x78 );
