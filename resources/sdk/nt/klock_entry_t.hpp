#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/rb_tree_t.hpp"
#include "single_list_entry_t.hpp"
#include "../rtl/balanced_node_t.hpp"
#include "klock_entry_lock_state_t.hpp"
#include "klock_entry_boost_bitmap_t.hpp"

#include "magic/klock_entry_t.start.hpp"
namespace nt
{
    // [struct _KLOCK_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct klock_entry_t                                                                 
    {                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                               
        _m000 struct rtl::balanced_node_t          tree_node;                              //{ +0x0000    +0x0000    +0x0018    +0x0000    } | .TreeNode
        _m001 uint32_t                             entry_flags;                            //{ +0x0018    +0x0018    +0x0010    +0x0018    } | .EntryFlags
        _m002 uint8_t                              acquired_byte;                          //{ +0x001a    +0x001a    +0x0012    +0x001a    } | .AcquiredByte
        _m003 uint8_t                              cross_thread_flags;                     //{ +0x001b    +0x001b    +0x0013    +0x001b    } | .CrossThreadFlags
        _m004 uint1_t                              head_node_bit;                          //{ +0x001b@0  +0x001b@0  +0x0013@0  +0x001b@0  } | .HeadNodeBit
        _m005 uint1_t                              io_priority_bit;                        //{ +0x001b@1  +0x001b@1  +0x0013@1  +0x001b@1  } | .IoPriorityBit
        _m006 uint1_t                              io_qo_s_waiter;                         //{ +0x001b@2  +0x001b@2  +0x0013@2  +0x001b@2  } | .IoQoSWaiter
        _m007 uint8_t                              static_state;                           //{ +0x0018@0  +0x0018@0  +0x0010@0  +0x0018@0  } | .StaticState
        _m008 uint24_t                             all_flags;                              //{ +0x0018@8  +0x0018@8  +0x0010@8  +0x0018@8  } | .AllFlags
        _m009 uint32_t                             spare_flags;                            //{ +0x001c    +0x001c    +0x0014    +0x001c    } | .SpareFlags
        _m010 struct nt::klock_entry_lock_state_t  lock_state;                             //{ +0x0020    +0x0020    +0x0000    +0x0020    } | .LockState
        _m011 void volatile*                       lock_unsafe;                            //{ +0x0020    +0x0020    +0x0000    +0x0020    } | .LockUnsafe
        _m012 volatile uint8_t                     cross_thread_releasable_and_busy_byte;  //{ +0x0020    +0x0020    +0x0000    +0x0020    } | .CrossThreadReleasableAndBusyByte
        _m013 volatile uint8_t                     in_tree_byte;                           //{ +0x0027    +0x0027    +0x0007    +0x0027    } | .InTreeByte
        _m014 void*                                session_state;                          //{ +0x0028    +0x0028    +0x0008    +0x0028    } | .SessionState
        _m015 uint32_t                             session_id;                             //{ +0x0028    +0x0028    +0x0008    +0x0028    } | .SessionId
        _m016 uint32_t                             session_pad;                            //{ +0x002c    +0x002c    +0x000c    +0x002c    } | .SessionPad
        _m017 struct rtl::rb_tree_t                owner_tree;                             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .OwnerTree
        _m018 struct rtl::rb_tree_t                waiter_tree;                            //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .WaiterTree
        _m019 char                                 cpu_priority_key;                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CpuPriorityKey
        _m020 uint64_t                             entry_lock;                             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .EntryLock
                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                      
        //                                                                               
        _m021 struct nt::single_list_entry_t       free_list_entry;                        //{ +0x0000    +0x0000    +0x0000    } | .FreeListEntry
        _m022 uint8_t                              entry_offset;                           //{ +0x0018    +0x0018    +0x0018    } | .EntryOffset
        _m023 uint8_t                              thread_local_flags;                     //{ +0x0019    +0x0019    +0x0019    } | .ThreadLocalFlags
        _m024 uint1_t                              waiting_bit;                            //{ +0x0019@0  +0x0019@0  +0x0019@0  } | .WaitingBit
        _m025 uint1_t                              acquired_bit;                           //{ +0x001a@0  +0x001a@0  +0x001a@0  } | .AcquiredBit
        _m026 uint32_t                             spare_pad;                              //{ +0x005c    +0x005c    +0x005c    } | .SparePad
                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                               
        _m027 union nt::klock_entry_boost_bitmap_t boost_bitmap;                           //{ +0x0058    +0x0058    +0x0058    } | .BoostBitmap
                                                                                         
        // Windows 10 v1607                                                              
        //                                                                               
        _m028 uint17_t                             all_boosts;                             //{ +0x0058@0  } | .AllBoosts
        _m029 uint15_t                             cpu_boosts_bitmap;                      //{ +0x0058@0  } | .CpuBoostsBitmap
        _m030 uint1_t                              io_boost;                               //{ +0x0058@15 } | .IoBoost
        _m031 uint1_t                              io_qo_s_boost;                          //{ +0x005a@0  } | .IoQoSBoost
        _m032 uint8_t                              io_normal_priority_waiter_count;        //{ +0x005a@1  } | .IoNormalPriorityWaiterCount
        _m033 uint7_t                              io_qo_s_waiter_count;                   //{ +0x005a@9  } | .IoQoSWaiterCount
                                                                                         
        // Windows 11                                                                    
        //                                                                               
        _m034 uint8_t                              entry_index;                            //{ +0x0010    } | .EntryIndex
        _m035 uint8_t                              waiting_byte;                           //{ +0x0011    } | .WaitingByte
                                                                                         
        SDK_MAGIC_PROPERTIES( "_KLOCK_ENTRY.$", 0x60, true, 0x36a708f4a8d2063d );                                      
        SDK_FIXED_SIZE( klock_entry_t, 0x60 );                                           
    };                                                                                   
};
#include "magic/klock_entry_t.end.hpp"
SDK_VERIFY( struct nt::klock_entry_t, 0x60 );
