#pragma once
#include <sdkgen/support_library.hpp>
#include "key_hash_t.hpp"
#include "path_hash_t.hpp"
#include "intent_lock_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../nt/child_list_t.hpp"
#include "../nt/cached_child_list_t.hpp"

namespace nt { struct hhive_t;   }
namespace nt { struct kthread_t; }

#include "magic/key_control_block_t.start.hpp"
namespace cm
{
    struct trans_t;
    struct key_body_t;
    struct kcb_layer_info_t;
    struct index_hint_block_t;
    struct key_control_block_t;
    struct key_security_cache_t;
    struct name_control_block_t;

    // [struct _CM_KEY_CONTROL_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_control_block_t                                             
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                 
        _m000 varuint_t                             ref_count;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RefCount
        _m001 uint16_t                              ext_flags;               //{ +0x0004@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .ExtFlags
        _m002 uint1_t                               discarded;               //{ +0x0004@17 +0x0008@17 +0x0008@17 +0x0008@17 } | .Discarded
        _m003 uint1_t                               hive_unloaded;           //{ +0x0004@18 +0x0008@18 +0x0008@18 +0x0008@18 } | .HiveUnloaded
        _m004 uint1_t                               decommissioned;          //{ +0x0004@19 +0x0008@19 +0x0008@19 +0x0008@19 } | .Decommissioned
        _m005 uint10_t                              total_levels;            //{ +0x0004@21 +0x0008@21 +0x0008@21 +0x0008@21 } | .TotalLevels
        _m006 struct cm::key_hash_t                 key_hash;                //{ +0x0008    +0x0010    +0x0010    +0x0010    } | .KeyHash
        _m007 struct cm::path_hash_t                conv_key;                //{ +0x0008    +0x0010    +0x0010    +0x0010    } | .ConvKey
        _m008 struct cm::key_hash_t*                next_hash;               //{ +0x0010    +0x0018    +0x0018    +0x0018    } | .NextHash
        _m009 struct nt::hhive_t*                   key_hive;                //{ +0x0018    +0x0020    +0x0020    +0x0020    } | .KeyHive
        _m010 uint32_t                              key_cell;                //{ +0x0020    +0x0028    +0x0028    +0x0028    } | .KeyCell
        _m011 struct ex::push_lock_t                kcb_pushlock;            //{ +0x0028    +0x0030    +0x0030    +0x0030    } | .KcbPushlock
        _m012 struct nt::kthread_t*                 owner;                   //{ +0x0030    +0x0038    +0x0038    +0x0038    } | .Owner
        _m013 int32_t                               shared_count;            //{ +0x0030    +0x0038    +0x0038    +0x0038    } | .SharedCount
        _m014 uint1_t                               delayed_deref;           //{ +0x0038@0  +0x0040@0  +0x0040@0  +0x0040@0  } | .DelayedDeref
        _m015 uint1_t                               delayed_close;           //{ +0x0038@1  +0x0040@1  +0x0040@1  +0x0040@1  } | .DelayedClose
        _m016 uint1_t                               parking;                 //{ +0x0038@2  +0x0040@2  +0x0040@2  +0x0040@2  } | .Parking
        _m017 uint8_t                               layer_semantics;         //{ +0x0039    +0x0041    +0x0041    +0x0041    } | .LayerSemantics
        _m018 int16_t                               layer_height;            //{ +0x003a    +0x0042    +0x0042    +0x0042    } | .LayerHeight
        _m019 struct cm::key_control_block_t*       parent_kcb;              //{ +0x0040    +0x0048    +0x0048    +0x0048    } | .ParentKcb
        _m020 struct cm::name_control_block_t*      name_block;              //{ +0x0048    +0x0050    +0x0050    +0x0050    } | .NameBlock
        _m021 struct cm::key_security_cache_t*      cached_security;         //{ +0x0050    +0x0058    +0x0058    +0x0058    } | .CachedSecurity
        _m022 struct cm::index_hint_block_t*        index_hint;              //{ +0x0068    +0x0070    +0x0070    +0x0070    } | .IndexHint
        _m023 uint32_t                              hash_key;                //{ +0x0068    +0x0070    +0x0070    +0x0070    } | .HashKey
        _m024 uint32_t                              sub_key_count;           //{ +0x0068    +0x0070    +0x0070    +0x0070    } | .SubKeyCount
        _m025 nt::list_entry_t                      key_body_list_head;      //{ +0x0070    +0x0078    +0x0078    +0x0078    } | .KeyBodyListHead
        _m026 sdk::array<struct cm::key_body_t*, 4> key_body_array;          //{ +0x0080    +0x0088    +0x0088    +0x0088    } | .KeyBodyArray
        _m027 int64_t                               kcb_last_write_time;     //{ +0x00a0    +0x00a8    +0x00a8    +0x00a8    } | .KcbLastWriteTime
        _m028 uint16_t                              kcb_max_name_len;        //{ +0x00a8    +0x00b0    +0x00b0    +0x00b0    } | .KcbMaxNameLen
        _m029 uint16_t                              kcb_max_value_name_len;  //{ +0x00aa    +0x00b2    +0x00b2    +0x00b2    } | .KcbMaxValueNameLen
        _m030 uint32_t                              kcb_max_value_data_len;  //{ +0x00ac    +0x00b4    +0x00b4    +0x00b4    } | .KcbMaxValueDataLen
        _m031 uint4_t                               kcb_user_flags;          //{ +0x00b0@0  +0x00b8@0  +0x00b8@0  +0x00b8@0  } | .KcbUserFlags
        _m032 uint4_t                               kcb_virt_control_flags;  //{ +0x00b0@4  +0x00b8@4  +0x00b8@4  +0x00b8@4  } | .KcbVirtControlFlags
        _m033 uint8_t                               kcb_debug;               //{ +0x00b0@8  +0x00b8@8  +0x00b8@8  +0x00b8@8  } | .KcbDebug
        _m034 uint16_t                              flags;                   //{ +0x00b0@16 +0x00b8@16 +0x00b8@16 +0x00b8@16 } | .Flags
        _m035 struct cm::kcb_layer_info_t*          layer_info;              //{ +0x00b8    +0x00c0    +0x00c0    +0x00c0    } | .LayerInfo
        _m036 char*                                 real_key_name;           //{ +0x00c0    +0x00c8    +0x00c8    +0x00c8    } | .RealKeyName
        _m037 nt::list_entry_t                      kcb_uo_w_list_head;      //{ +0x00c8    +0x00d0    +0x00d0    +0x00d0    } | .KCBUoWListHead
        _m038 nt::list_entry_t                      delay_queue_entry;       //{ +0x00d8    +0x00e0    +0x00e0    +0x00e0    } | .DelayQueueEntry
        _m039 volatile uint8_t*                     stolen;                  //{ +0x00d8    +0x00e0    +0x00e0    +0x00e0    } | .Stolen
        _m040 struct cm::trans_t*                   trans_kcb_owner;         //{ +0x00e8    +0x00f0    +0x00f0    +0x00f0    } | .TransKCBOwner
        _m041 struct cm::intent_lock_t              kcb_lock;                //{ +0x00f0    +0x00f8    +0x00f8    +0x00f8    } | .KCBLock
        _m042 struct cm::intent_lock_t              key_lock;                //{ +0x0100    +0x0108    +0x0108    +0x0108    } | .KeyLock
        _m043 struct nt::child_list_t               trans_value_cache;       //{ +0x0110    +0x0118    +0x0118    +0x0118    } | .TransValueCache
        _m044 struct cm::trans_t*                   trans_value_list_owner;  //{ +0x0118    +0x0120    +0x0120    +0x0120    } | .TransValueListOwner
        _m045 nt::unicode_view*                     full_kcb_name;           //{ +0x0120    +0x0128    +0x0128    +0x0128    } | .FullKCBName
        _m046 uint1_t                               full_kcb_name_stale;     //{ +0x0120@0  +0x0128@0  +0x0128@0  +0x0128@0  } | .FullKCBNameStale
                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                 
        _m047 uint1_t                               freed;                   //{ +0x0008@16 +0x0008@16 +0x0008@16 } | .Freed
        _m048 uint1_t                               spare_ext_flag;          //{ +0x0008@20 +0x0008@20 +0x0008@20 } | .SpareExtFlag
        _m049 struct nt::child_list_t               value_list;              //{ +0x0060    +0x0060    +0x0060    } | .ValueList
        _m050 struct cm::key_control_block_t*       link_target;             //{ +0x0068    +0x0068    +0x0068    } | .LinkTarget
        _m051 nt::list_entry_t                      cloned_list_entry;       //{ +0x0078    +0x0078    +0x0078    } | .ClonedListEntry
        _m052 uint64_t                              sequence_number;         //{ +0x0130    +0x0130    +0x0130    } | .SequenceNumber
                                                                           
        // Windows 10 v1607                                                
        //                                                                 
        _m053 uint1_t                               private_alloc;           //{ +0x0004@16 } | .PrivateAlloc
        _m054 uint1_t                               lock_table_present;      //{ +0x0004@20 } | .LockTablePresent
        _m055 uint32_t                              slot_hint;               //{ +0x003c    } | .SlotHint
        _m056 struct nt::cached_child_list_t        value_cache;             //{ +0x0058    } | .ValueCache
        _m057 nt::list_entry_t                      free_list_entry;         //{ +0x0070    } | .FreeListEntry
                                                                           
        SDK_MAGIC_PROPERTIES( "_CM_KEY_CONTROL_BLOCK.$", 0x138, true, 0xbe9eb805310dfe1c );                       
        SDK_DYNAMIC_SIZE( key_control_block_t );                           
    };                                                                     
};
#include "magic/key_control_block_t.end.hpp"
