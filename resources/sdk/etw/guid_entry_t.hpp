#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "last_enable_info_t.hpp"
#include "../trace/enable_info_t.hpp"

namespace nt { struct ethread_t; }

#include "magic/guid_entry_t.start.hpp"
namespace etw
{
    struct guid_entry_t;
    struct filter_header_t;
    struct silodriverstate_t;

    // [struct _ETW_GUID_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct guid_entry_t                                                      
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                   
        _m00 nt::list_entry_t                           guid_list;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .GuidList
        _m01 volatile int64_t                           ref_count;             //{ +0x0010    +0x0020    +0x0020    +0x0020    } | .RefCount
        _m02 struct nt::guid_t                          guid;                  //{ +0x0018    +0x0028    +0x0028    +0x0028    } | .Guid
        _m03 nt::list_entry_t                           reg_list_head;         //{ +0x0028    +0x0038    +0x0038    +0x0038    } | .RegListHead
        _m04 void*                                      security_descriptor;   //{ +0x0038    +0x0048    +0x0048    +0x0048    } | .SecurityDescriptor
        _m05 struct etw::last_enable_info_t             last_enable;           //{ +0x0040    +0x0050    +0x0050    +0x0050    } | .LastEnable
        _m06 uint64_t                                   match_id;              //{ +0x0040    +0x0050    +0x0050    +0x0050    } | .MatchId
        _m07 struct trace::enable_info_t                provider_enable_info;  //{ +0x0050    +0x0060    +0x0060    +0x0060    } | .ProviderEnableInfo
        _m08 sdk::array<struct trace::enable_info_t, 8> enable_info;           //{ +0x0070    +0x0080    +0x0080    +0x0080    } | .EnableInfo
        _m09 struct etw::filter_header_t*               filter_data;           //{ +0x0170    +0x0180    +0x0180    +0x0180    } | .FilterData
        _m10 struct etw::silodriverstate_t*             silo_state;            //{ +0x0178    +0x0188    +0x0188    +0x0188    } | .SiloState
        _m11 struct ex::push_lock_t                     lock;                  //{ +0x0180    +0x0198    +0x0198    +0x0198    } | .Lock
        _m12 struct nt::ethread_t*                      lock_owner;            //{ +0x0188    +0x01a0    +0x01a0    +0x01a0    } | .LockOwner
                                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                   
        _m13 nt::list_entry_t                           silo_guid_list;        //{ +0x0010    +0x0010    +0x0010    } | .SiloGuidList
        _m14 struct etw::guid_entry_t*                  host_entry;            //{ +0x0190    +0x0190    +0x0190    } | .HostEntry
                                                                             
        SDK_MAGIC_PROPERTIES( "_ETW_GUID_ENTRY.$", 0x1a8, true, 0x74917731884c836c );                     
        SDK_DYNAMIC_SIZE( guid_entry_t );                                    
    };                                                                       
};
#include "magic/guid_entry_t.end.hpp"
