#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/rb_tree_t.hpp"
#include "../rtl/srwlock_t.hpp"
#include "../rtl/hp_vs_config_t.hpp"
#include "../rtlp/hp_lock_type_t.hpp"
#include "vs_delay_free_context_t.hpp"
#include "suballocator_callbacks_t.hpp"

#include "magic/vs_context_t.start.hpp"
namespace heap
{
    // [struct _HEAP_VS_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vs_context_t                                                          
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                       
        _m00 sdk::variant<struct rtl::srwlock_t, uint64_t> lock;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 struct rtl::rb_tree_t                         free_chunk_tree;        //{ +0x0008    +0x0010    +0x0010    +0x0010    } | .FreeChunkTree
        _m02 nt::list_entry_t                              subsegment_list;        //{ +0x0018    +0x0020    +0x0020    +0x0020    } | .SubsegmentList
        _m03 uint64_t                                      total_committed_units;  //{ +0x0028    +0x0030    +0x0030    +0x0030    } | .TotalCommittedUnits
        _m04 uint64_t                                      free_committed_units;   //{ +0x0030    +0x0038    +0x0038    +0x0038    } | .FreeCommittedUnits
        _m05 void*                                         backend_ctx;            //{ +0x0038    +0x0080    +0x0080    +0x0080    } | .BackendCtx
        _m06 struct heap::suballocator_callbacks_t         callbacks;              //{ +0x0040    +0x0088    +0x0088    +0x0088    } | .Callbacks
                                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                       
        _m07 enum rtlp::hp_lock_type_t                     lock_type;              //{ +0x0008    +0x0008    +0x0008    } | .LockType
        _m08 struct heap::vs_delay_free_context_t          delay_free_context;     //{ +0x0040    +0x0040    +0x0040    } | .DelayFreeContext
        _m09 struct rtl::hp_vs_config_t                    config;                 //{ +0x00b0    +0x00b0    +0x00b0    } | .Config
        _m10 uint32_t                                      flags;                  //{ +0x00b4    +0x00b4    +0x00b4    } | .Flags
                                                                                 
        SDK_MAGIC_PROPERTIES( "_HEAP_VS_CONTEXT.$", 0xc0, true, 0x35c93b471fc778c5 );                      
        SDK_DYNAMIC_SIZE( vs_context_t );                                        
    };                                                                           
};
#include "magic/vs_context_t.end.hpp"
