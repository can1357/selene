#pragma once
#include <sdkgen/support_library.hpp>
#include "knode_t.hpp"
#include "kevent_t.hpp"
#include "ktimer_t.hpp"
#include "kwait_block_t.hpp"
#include "work_queue_item_t.hpp"
#include "../ex/work_queue_t.hpp"

#include "magic/enode_t.start.hpp"
namespace nt
{
    struct ethread_t;

    // [struct _ENODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enode_t                                                                                  
    {                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                          
        _m00 struct nt::knode_t                               ncb;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Ncb
                                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                          
        _m01 struct nt::work_queue_item_t                     hot_add_processor_work_item;            //{ +0x0180    +0x0130    +0x0180    } | .HotAddProcessorWorkItem
                                                                                                    
        // Windows 10 v1607                                                                         
        //                                                                                          
        _m02 sdk::array<struct ex::work_queue_t volatile*, 8> ex_work_queues;                         //{ +0x0140    } | .ExWorkQueues
        _m03 struct ex::work_queue_t                          ex_work_queue;                          //{ +0x0180    } | .ExWorkQueue
        _m04 struct ex::work_queue_t                          io_work_queue;                          //{ +0x0450    } | .IoWorkQueue
        _m05 struct nt::kevent_t                              exp_thread_set_manager_event;           //{ +0x0720    } | .ExpThreadSetManagerEvent
        _m06 struct nt::ktimer_t                              exp_deadlock_timer;                     //{ +0x0738    } | .ExpDeadlockTimer
        _m07 struct nt::kevent_t                              exp_thread_reaper_event;                //{ +0x0778    } | .ExpThreadReaperEvent
        _m08 sdk::array<struct nt::kwait_block_t, 3>          wait_blocks;                            //{ +0x0790    } | .WaitBlocks
        _m09 struct nt::ethread_t*                            exp_worker_thread_balance_manager_ptr;  //{ +0x0820    } | .ExpWorkerThreadBalanceManagerPtr
        _m10 uint32_t                                         exp_worker_seed;                        //{ +0x0828    } | .ExpWorkerSeed
        _m11 volatile uint1_t                                 ex_worker_full_init;                    //{ +0x082c@0  } | .ExWorkerFullInit
        _m12 volatile uint1_t                                 ex_worker_struct_init;                  //{ +0x082c@1  } | .ExWorkerStructInit
        _m13 volatile uint32_t                                ex_worker_flags;                        //{ +0x082c    } | .ExWorkerFlags
                                                                                                    
        SDK_MAGIC_PROPERTIES( "_ENODE.$", 0x1c0, true, 0xf83342df35ec56ed );                                      
        SDK_DYNAMIC_SIZE( enode_t );                                                                
    };                                                                                              
};
#include "magic/enode_t.end.hpp"
