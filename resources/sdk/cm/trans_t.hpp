#pragma once
#include <sdkgen/support_library.hpp>
#include "trans_ptr_t.hpp"
#include "../nt/guid_t.hpp"

namespace nt { struct cmhive_t;      }
namespace nt { struct kenlistment_t; }

#include "magic/trans_t.start.hpp"
namespace cm
{
    struct rm_t;

    // [struct _CM_TRANS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trans_t                                                      
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                              
        _m00 nt::list_entry_t                    transaction_list_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TransactionListEntry
        _m01 nt::list_entry_t                    kcb_uo_w_list_head;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .KCBUoWListHead
        _m02 nt::list_entry_t                    lazy_commit_list_entry;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LazyCommitListEntry
        _m03 uint1_t                             prepared;                //{ +0x0030@0  +0x0030@0  +0x0030@0  +0x0030@0  } | .Prepared
        _m04 uint1_t                             aborted;                 //{ +0x0030@1  +0x0030@1  +0x0030@1  +0x0030@1  } | .Aborted
        _m05 uint1_t                             committed;               //{ +0x0030@2  +0x0030@2  +0x0030@2  +0x0030@2  } | .Committed
        _m06 uint1_t                             initializing;            //{ +0x0030@3  +0x0030@3  +0x0030@3  +0x0030@3  } | .Initializing
        _m07 uint1_t                             invalid;                 //{ +0x0030@4  +0x0030@4  +0x0030@4  +0x0030@4  } | .Invalid
        _m08 uint1_t                             use_reservation;         //{ +0x0030@5  +0x0030@5  +0x0030@5  +0x0030@5  } | .UseReservation
        _m09 uint1_t                             tm_callbacks_active;     //{ +0x0030@6  +0x0030@6  +0x0030@6  +0x0030@6  } | .TmCallbacksActive
        _m10 uint1_t                             light_weight;            //{ +0x0030@7  +0x0030@7  +0x0030@7  +0x0030@7  } | .LightWeight
        _m11 uint1_t                             freed1;                  //{ +0x0030@8  +0x0030@8  +0x0030@8  +0x0030@8  } | .Freed1
        _m12 uint1_t                             freed2;                  //{ +0x0030@9  +0x0030@9  +0x0030@9  +0x0030@9  } | .Freed2
        _m13 uint1_t                             freed;                   //{ +0x0030@12 +0x0030@12 +0x0030@12 +0x0030@12 } | .Freed
        _m14 uint32_t                            trans_state;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TransState
        _m15 union cm::trans_ptr_t               trans;                   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Trans
        _m16 struct cm::rm_t*                    cm_rm;                   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CmRm
        _m17 struct nt::kenlistment_t*           ktm_enlistment_object;   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .KtmEnlistmentObject
        _m18 void*                               ktm_enlistment_handle;   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .KtmEnlistmentHandle
        _m19 struct nt::guid_t                   ktm_uow;                 //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .KtmUow
        _m20 uint64_t                            start_lsn;               //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .StartLsn
        _m21 uint32_t                            hive_count;              //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .HiveCount
        _m22 sdk::array<struct nt::cmhive_t*, 7> hive_array;              //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .HiveArray
                                                                        
        SDK_MAGIC_PROPERTIES( "_CM_TRANS.$", 0xb8, true, 0xec0fd6fada8ac0e );                       
        SDK_DYNAMIC_SIZE( trans_t );                                    
    };                                                                  
};
#include "magic/trans_t.end.hpp"
