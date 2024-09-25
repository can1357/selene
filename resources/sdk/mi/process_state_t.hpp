#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "../nt/slist_header_t.hpp"

namespace nt { struct mmpte_t; }

#include "magic/process_state_t.start.hpp"
namespace mi
{
    // [struct _MI_PROCESS_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_state_t                                         
    {                                                              
        using shared_user_data_pte_t = sdk::variant<struct nt::mmpte_t*, sdk::array<struct nt::mmpte_t*, 2>>;                             
                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                         
        _m00 void*                    system_dll_base;               //{ +0x0030    +0x0000    +0x0000    +0x0000    } | .SystemDllBase
        _m01 uint32_t                 color_seed;                    //{ +0x0000    +0x0008    +0x0008    +0x0008    } | .ColorSeed
        _m02 int32_t                  rotating_uniprocessor_number;  //{ +0x0038    +0x000c    +0x000c    +0x000c    } | .RotatingUniprocessorNumber
        _m03 int64_t                  critical_section_timeout;      //{ +0x0040    +0x0010    +0x0010    +0x0010    } | .CriticalSectionTimeout
        _m04 nt::list_entry_t         process_list;                  //{ +0x0048    +0x0018    +0x0018    +0x0018    } | .ProcessList
        _m05 shared_user_data_pte_t   shared_user_data_pte;          //{ +0x0058    +0x0028    +0x0028    +0x0028    } | .SharedUserDataPte
                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                         
        _m06 void*                    hypervisor_shared_va;          //{ +0x0038    +0x0038    +0x0038    } | .HypervisorSharedVa
        _m07 uint64_t                 vad_secure_cookie;             //{ +0x0040    +0x0040    +0x0040    } | .VadSecureCookie
                                                                   
        // Windows 10 v1607                                        
        //                                                         
        _m08 struct nt::kevent_t      clone_dereference_event;       //{ +0x0008    } | .CloneDereferenceEvent
        _m09 union nt::slist_header_t clone_protos_s_list_head;      //{ +0x0020    } | .CloneProtosSListHead
                                                                   
        SDK_MAGIC_PROPERTIES( "_MI_PROCESS_STATE.$", 0x48, true, 0xf6e8bd8d89774009 );                             
        SDK_DYNAMIC_SIZE( process_state_t );                             
    };                                                             
};
#include "magic/process_state_t.end.hpp"
