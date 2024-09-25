#pragma once
#include <sdkgen/support_library.hpp>
#include "mdl_t.hpp"
#include "mmpte_t.hpp"
#include "kevent_t.hpp"
#include "kapc_state_t.hpp"
#include "slist_entry_t.hpp"
#include "mminpage_flags_t.hpp"
#include "../io/status_block_t.hpp"
#include "../mi/hard_fault_state_t.hpp"
#include "mminpage_support_flow_through_t.hpp"

#include "magic/mminpage_support_t.start.hpp"
namespace nt
{
    struct mmpfn_t;
    struct ethread_t;
    struct subsection_t;
    struct file_object_t;
    struct control_area_t;
    struct mmpaging_file_t;

    // [struct _MMINPAGE_SUPPORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mminpage_support_t                                             
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                
        _m000 nt::list_entry_t                           list_entry;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m001 nt::list_entry_t                           list_head;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ListHead
        _m002 struct nt::kevent_t                        event;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Event
        _m003 struct nt::kevent_t                        collided_event;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CollidedEvent
        _m004 struct io::status_block_t                  io_status;         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .IoStatus
        _m005 int64_t                                    read_offset;       //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ReadOffset
        _m006 struct nt::kapc_state_t                    apc_state;         //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ApcState
        _m007 struct nt::ethread_t*                      thread;            //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .Thread
        _m008 struct nt::mmpfn_t*                        locked_proto_pfn;  //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .LockedProtoPfn
        _m009 struct nt::mmpte_t                         pte_contents;      //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .PteContents
        _m010 volatile int32_t                           wait_count;        //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .WaitCount
        _m011 uint32_t                                   byte_count;        //{ +0x00b4    +0x00b8    +0x00b8    +0x00b8    } | .ByteCount
        _m012 uint32_t                                   image_pte_offset;  //{ +0x00b8    +0x00bc    +0x00bc    +0x00bc    } | .ImagePteOffset
        _m013 uint32_t                                   toss_page;         //{ +0x00b8    +0x00bc    +0x00bc    +0x00bc    } | .TossPage
        _m014 struct nt::mminpage_flags_t                e1;                //{ +0x00bc    +0x00c0    +0x00c0    +0x00c0    } | .e1
        _m015 uint32_t                                   long_flags;        //{ +0x00bc    +0x00c0    +0x00c0    +0x00c0    } | .LongFlags
        _m016 struct nt::file_object_t*                  file_pointer;      //{ +0x00c0    +0x00c8    +0x00c8    +0x00c8    } | .FilePointer
        _m017 struct nt::subsection_t*                   subsection;        //{ +0x00c8    +0x00d0    +0x00d0    +0x00d0    } | .Subsection
        _m018 void*                                      faulting_address;  //{ +0x00d8    +0x00e0    +0x00e0    +0x00e0    } | .FaultingAddress
        _m019 struct nt::mmpte_t*                        pointer_pte;       //{ +0x00e0    +0x00e8    +0x00e8    +0x00e8    } | .PointerPte
        _m020 struct nt::mmpte_t*                        base_pte;          //{ +0x00e8    +0x00f0    +0x00f0    +0x00f0    } | .BasePte
        _m021 struct nt::mmpfn_t*                        pfn;               //{ +0x00f0    +0x00f8    +0x00f8    +0x00f8    } | .Pfn
        _m022 struct nt::mdl_t*                          prefetch_mdl;      //{ +0x00f8    +0x0100    +0x0100    +0x0100    } | .PrefetchMdl
        _m023 struct nt::mdl_t                           mdl;               //{ +0x0100    +0x0110    +0x0110    +0x0110    } | .Mdl
        _m024 sdk::array<uint64_t, 16>                   page;              //{ +0x0130    +0x0140    +0x0140    +0x0140    } | .Page
        _m025 struct nt::mminpage_support_flow_through_t flow_through;      //{ +0x0130    +0x0140    +0x0140    +0x0140    } | .FlowThrough
                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                
        _m026 struct nt::slist_entry_t                   s_list_entry;      //{ +0x0000    +0x0000    +0x0000    } | .SListEntry
        _m027 struct mi::hard_fault_state_t              hard_fault_state;  //{ +0x0068    +0x0068    +0x0068    } | .HardFaultState
        _m028 volatile int32_t                           inject_retry;      //{ +0x00b4    +0x00b4    +0x00b4    } | .InjectRetry
        _m029 struct nt::mmpaging_file_t*                paging_file;       //{ +0x00c8    +0x00c8    +0x00c8    } | .PagingFile
        _m030 volatile int64_t                           probe_count;       //{ +0x0108    +0x0108    +0x0108    } | .ProbeCount
                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                 
        //                                                                
        _m031 struct nt::control_area_t*                 control_area;      //{ +0x00c8    +0x00d0    +0x00d0    } | .ControlArea
        _m032 void*                                      autoboost;         //{ +0x00d0    +0x00d8    +0x00d8    } | .Autoboost
                                                                          
        // Windows 11                                                     
        //                                                                
        _m033 void*                                      auto_boost_lock;   //{ +0x00d8    } | .AutoBoostLock
                                                                          
        SDK_MAGIC_PROPERTIES( "_MMINPAGE_SUPPORT.$", 0x1c0, true, 0xd345442f5e6b8049 );                 
        SDK_DYNAMIC_SIZE( mminpage_support_t );                           
    };                                                                    
};
#include "magic/mminpage_support_t.end.hpp"
