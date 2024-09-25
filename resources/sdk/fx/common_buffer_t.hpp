#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "../nt/single_list_entry_t.hpp"

#include "magic/common_buffer_t.start.hpp"
namespace fx
{
    class device_t;
    class object_t;
    class device_base_t;
    class dma_enabler_t;
    struct driver_globals_t;

    // [class FxCommonBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class common_buffer_t                                            
    {                                                                
        struct u0_m_object_flags_by_name_t                           
        {                                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                       
            _m05 uint1_t passive_callbacks;                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PassiveCallbacks
            _m06 uint1_t no_delete_ddi;                                //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NoDeleteDDI
            _m07 uint1_t delete_called;                                //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteCalled
            _m08 uint1_t committed;                                    //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Committed
            _m09 uint1_t passive_dispose;                              //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PassiveDispose
            _m10 uint1_t force_dispose_thread;                         //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ForceDisposeThread
            _m11 uint1_t has_debug;                                    //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HasDebug
            _m12 uint1_t early_disposed_ext;                           //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EarlyDisposedExt
            _m13 uint1_t trace_state;                                  //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .TraceState
                                                                     
            SDK_MAGIC_PROPERTIES( "FxCommonBuffer.m_ObjectFlagsByName.$", 0x2, true, 0xa8fd95ec14e1c077 );                                            
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                            
        };                                                           
                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                           
        _m00 uint16_t                         m_type;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Type
        _m01 uint16_t                         m_object_size;           //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m02 int32_t                          m_refcnt;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m03 struct fx::driver_globals_t*     m_globals;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m04 uint16_t                         m_object_flags;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m14 u0_m_object_flags_by_name_t      m_object_flags_by_name;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m15 uint16_t                         m_object_state;          //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m16 nt::list_entry_t                 m_child_list_head;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m17 class mx::lock_t                 m_spin_lock;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m18 class fx::object_t*              m_parent_object;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m19 nt::list_entry_t                 m_child_entry;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m20 struct nt::single_list_entry_t   m_dispose_single_entry;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m21 class fx::device_base_t*         m_device_base;           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m22 class fx::device_t*              m_device;                //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Device
        _m23 class mx::lock_t                 m_np_lock;               //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_NPLock
        _m24 void*                            m_buffer_raw_va;         //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_BufferRawVA
        _m25 void*                            m_buffer_aligned_va;     //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .m_BufferAlignedVA
        _m26 int64_t                          m_buffer_aligned_la;     //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .m_BufferAlignedLA
        _m27 int64_t                          m_buffer_raw_la;         //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .m_BufferRawLA
        _m28 class fx::dma_enabler_t*         m_dma_enabler;           //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .m_DmaEnabler
        _m29 uint64_t                         m_length;                //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .m_Length
        _m30 uint64_t                         m_raw_length;            //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .m_RawLength
        _m31 uint64_t                         m_alignment;             //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .m_Alignment
                                                                     
        SDK_MAGIC_PROPERTIES( "FxCommonBuffer.$", 0xb8, true, 0xa9361907c10572c2 );                       
        SDK_FIXED_SIZE( common_buffer_t, 0xb8 );                       
    };                                                               
};
#include "magic/common_buffer_t.end.hpp"
SDK_VERIFY( struct fx::common_buffer_t::u0_m_object_flags_by_name_t, 0x2 );
SDK_VERIFY( class fx::common_buffer_t, 0xb8 );
