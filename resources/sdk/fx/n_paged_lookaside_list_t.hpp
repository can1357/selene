#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "../wdf/object_attributes_t.hpp"
#include "../nt/npaged_lookaside_list_t.hpp"

#include "magic/n_paged_lookaside_list_t.start.hpp"
namespace fx
{
    class device_t;
    class object_t;
    class device_base_t;
    struct driver_globals_t;

    // [class FxNPagedLookasideList]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class n_paged_lookaside_list_t                                     
    {                                                                  
        struct u0_m_object_flags_by_name_t                             
        {                                                              
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                         
            _m05 uint1_t passive_callbacks;                              //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PassiveCallbacks
            _m06 uint1_t no_delete_ddi;                                  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NoDeleteDDI
            _m07 uint1_t delete_called;                                  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteCalled
            _m08 uint1_t committed;                                      //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Committed
            _m09 uint1_t passive_dispose;                                //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PassiveDispose
            _m10 uint1_t force_dispose_thread;                           //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ForceDisposeThread
            _m11 uint1_t has_debug;                                      //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HasDebug
            _m12 uint1_t early_disposed_ext;                             //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EarlyDisposedExt
            _m13 uint1_t trace_state;                                    //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .TraceState
                                                                       
            SDK_MAGIC_PROPERTIES( "FxNPagedLookasideList.m_ObjectFlagsByName.$", 0x2, true, 0x6e2d0948d5f5c7fb );                                            
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                            
        };                                                             
                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                             
        _m00 uint16_t                           m_type;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Type
        _m01 uint16_t                           m_object_size;           //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m02 int32_t                            m_refcnt;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m03 struct fx::driver_globals_t*       m_globals;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m04 uint16_t                           m_object_flags;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m14 u0_m_object_flags_by_name_t        m_object_flags_by_name;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m15 uint16_t                           m_object_state;          //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m16 nt::list_entry_t                   m_child_list_head;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m17 class mx::lock_t                   m_spin_lock;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m18 class fx::object_t*                m_parent_object;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m19 nt::list_entry_t                   m_child_entry;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m20 struct nt::single_list_entry_t     m_dispose_single_entry;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m21 class fx::device_base_t*           m_device_base;           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m22 class fx::device_t*                m_device;                //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Device
        _m23 struct wdf::object_attributes_t    m_memory_attributes;     //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_MemoryAttributes
        _m24 uint64_t                           m_buffer_size;           //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .m_BufferSize
        _m25 uint64_t                           m_memory_object_size;    //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .m_MemoryObjectSize
        _m26 uint32_t                           m_pool_tag;              //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .m_PoolTag
        _m27 struct nt::npaged_lookaside_list_t m_object_lookaside;      //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .m_ObjectLookaside
                                                                       
        SDK_MAGIC_PROPERTIES( "FxNPagedLookasideList.$", 0x140, true, 0x8ac834d98f37ebd0 );                       
        SDK_FIXED_SIZE( n_paged_lookaside_list_t, 0x140 );                       
    };                                                                 
};
#include "magic/n_paged_lookaside_list_t.end.hpp"
SDK_VERIFY( struct fx::n_paged_lookaside_list_t::u0_m_object_flags_by_name_t, 0x2 );
SDK_VERIFY( class fx::n_paged_lookaside_list_t, 0x140 );
