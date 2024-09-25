#pragma once
#include <sdkgen/support_library.hpp>

namespace alpc { struct port_t; }

#include "magic/kalpc_view_t.start.hpp"
namespace nt
{
    struct eprocess_t;
    struct kalpc_region_t;

    // [struct _KALPC_VIEW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kalpc_view_t                                          
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                       
        _m00 nt::list_entry_t           view_list_entry;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ViewListEntry
        _m01 struct nt::kalpc_region_t* region;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Region
        _m02 struct alpc::port_t*       owner_port;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OwnerPort
        _m03 struct nt::eprocess_t*     owner_process;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OwnerProcess
        _m04 void*                      address;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Address
        _m05 uint64_t                   size;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Size
        _m06 void*                      secure_view_handle;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SecureViewHandle
        _m07 void*                      write_access_handle;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .WriteAccessHandle
        _m08 uint1_t                    write_access;              //{ +0x0048@0  +0x0048@0  +0x0048@0  +0x0048@0  } | .WriteAccess
        _m09 uint1_t                    auto_release;              //{ +0x0048@1  +0x0048@1  +0x0048@1  +0x0048@1  } | .AutoRelease
        _m10 uint1_t                    force_unlink;              //{ +0x0048@2  +0x0048@2  +0x0048@2  +0x0048@2  } | .ForceUnlink
        _m11 uint32_t                   number_of_owner_messages;  //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .NumberOfOwnerMessages
        _m12 nt::list_entry_t           process_view_list_entry;   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ProcessViewListEntry
                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                       
        _m13 uint1_t                    system_space;              //{ +0x0048@3  +0x0048@3  +0x0048@3  } | .SystemSpace
                                                                 
        SDK_MAGIC_PROPERTIES( "_KALPC_VIEW.$", 0x60, true, 0x978448d201d4903c );                         
        SDK_FIXED_SIZE( kalpc_view_t, 0x60 );                         
    };                                                           
};
#include "magic/kalpc_view_t.end.hpp"
SDK_VERIFY( struct nt::kalpc_view_t, 0x60 );
