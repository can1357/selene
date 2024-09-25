#pragma once
#include <sdkgen/support_library.hpp>
#include "kevent_t.hpp"
#include "../ex/push_lock_t.hpp"

#include "magic/hive_list_entry_t.start.hpp"
namespace nt
{
    struct cmhive_t;
    struct work_queue_item_t;

    // [struct _HIVE_LIST_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hive_list_entry_t                                       
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                         
        _m00 wchar_t*                      file_name;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileName
        _m01 wchar_t*                      base_name;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BaseName
        _m02 wchar_t*                      reg_root_name;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RegRootName
        _m03 struct nt::cmhive_t*          cm_hive;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CmHive
        _m04 uint32_t                      h_hive_flags;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HHiveFlags
        _m05 uint32_t                      cm_hive_flags;            //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .CmHiveFlags
        _m06 uint32_t                      cm_kcb_cache_size;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CmKcbCacheSize
        _m07 struct nt::cmhive_t*          cm_hive2;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CmHive2
        _m08 uint8_t                       hive_mounted;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .HiveMounted
        _m09 uint8_t                       thread_finished;          //{ +0x0039    +0x0039    +0x0039    +0x0039    } | .ThreadFinished
        _m10 uint8_t                       thread_started;           //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .ThreadStarted
        _m11 uint8_t                       allocate;                 //{ +0x003b    +0x003b    +0x003b    +0x003b    } | .Allocate
        _m12 uint8_t                       win_pe_required;          //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .WinPERequired
        _m13 struct nt::kevent_t           start_event;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .StartEvent
        _m14 struct nt::kevent_t           finished_event;           //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .FinishedEvent
        _m15 struct nt::kevent_t           mount_lock;               //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .MountLock
        _m16 nt::unicode_view              file_path;                //{ +0x0088    +0x00b8    +0x00a8    +0x00b8    } | .FilePath
                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                         
        _m17 struct ex::push_lock_t        mount_callback_lock;      //{ +0x0088    +0x0088    +0x0088    } | .MountCallbackLock
        _m18 struct ex::push_lock_t        callback_list_lock;       //{ +0x0090    +0x0090    +0x0090    } | .CallbackListLock
        _m19 nt::list_entry_t              callback_list_head;       //{ +0x0098    +0x0098    +0x0098    } | .CallbackListHead
                                                                   
        // Windows 10 v2004, Windows 10 v20H2                        
        //                                                         
        _m20 struct nt::work_queue_item_t* callback_work_item;       //{ +0x00a8    +0x00a8    } | .CallbackWorkItem
        _m21 volatile int32_t              callback_work_item_busy;  //{ +0x00b0    +0x00b0    } | .CallbackWorkItemBusy
                                                                   
        SDK_MAGIC_PROPERTIES( "_HIVE_LIST_ENTRY.$", 0xc8, true, 0x11c3eaf5958694c6 );                        
        SDK_DYNAMIC_SIZE( hive_list_entry_t );                        
    };                                                             
};
#include "magic/hive_list_entry_t.end.hpp"
