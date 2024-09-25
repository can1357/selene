#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "../wdf/dma_direction_t.hpp"
#include "dma_transaction_state_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "../dma/completion_status_t.hpp"
#include "dma_transaction_program_or_reserve_dma_t.hpp"

namespace nt { struct kthread_t; }
namespace nt { struct mdl_t;     }

#include "magic/dma_packet_transaction_t.start.hpp"
namespace fx
{
    class device_t;
    class object_t;
    class request_t;
    class device_base_t;
    class dma_enabler_t;
    struct driver_globals_t;
    struct dma_description_t;

    // [class FxDmaPacketTransaction]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class dma_packet_transaction_t                                                              
    {                                                                                           
        struct u0_m_object_flags_by_name_t                                                      
        {                                                                                       
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
            //                                                                                  
            _m05 uint1_t passive_callbacks;                                                       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PassiveCallbacks
            _m06 uint1_t no_delete_ddi;                                                           //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NoDeleteDDI
            _m07 uint1_t delete_called;                                                           //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteCalled
            _m08 uint1_t committed;                                                               //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Committed
            _m09 uint1_t passive_dispose;                                                         //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PassiveDispose
            _m10 uint1_t force_dispose_thread;                                                    //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ForceDisposeThread
            _m11 uint1_t has_debug;                                                               //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HasDebug
            _m12 uint1_t early_disposed_ext;                                                      //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EarlyDisposedExt
            _m13 uint1_t trace_state;                                                             //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .TraceState
                                                                                                
            SDK_MAGIC_PROPERTIES( "FxDmaPacketTransaction.m_ObjectFlagsByName.$", 0x2, true, 0x347d468edbf5e5d0 );                                               
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                               
        };                                                                                      
                                                                                                
        struct u4_m_transfer_state_t                                                            
        {                                                                                       
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
            //                                                                                  
            _m48 struct nt::kthread_t*         current_staging_thread;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentStagingThread
            _m49 uint8_t                       rerun_staging;                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RerunStaging
            _m50 uint8_t                       rerun_completion;                                  //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .RerunCompletion
            _m51 enum dma::completion_status_t completion_status;                                 //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CompletionStatus
                                                                                                
            SDK_MAGIC_PROPERTIES( "FxDmaPacketTransaction.m_TransferState.$", 0x10, true, 0xe2523a3945fe0829 );                                                 
            SDK_FIXED_SIZE( u4_m_transfer_state_t, 0x10 );                                                 
        };                                                                                      
                                                                                                
        using m_dma_acquired_function_t = class fx::dma_transaction_program_or_reserve_dma_t;                          
                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                                      
        _m000 uint16_t                                                m_type;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Type
        _m001 uint16_t                                                m_object_size;              //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m002 int32_t                                                 m_refcnt;                   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m003 struct fx::driver_globals_t*                            m_globals;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m004 uint16_t                                                m_object_flags;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m014 u0_m_object_flags_by_name_t                             m_object_flags_by_name;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m015 uint16_t                                                m_object_state;             //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m016 nt::list_entry_t                                        m_child_list_head;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m017 class mx::lock_t                                        m_spin_lock;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m018 class fx::object_t*                                     m_parent_object;            //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m019 nt::list_entry_t                                        m_child_entry;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m020 struct nt::single_list_entry_t                          m_dispose_single_entry;     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m021 class fx::device_base_t*                                m_device_base;              //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m022 class fx::device_t*                                     m_device;                   //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Device
        _m023 class mx::lock_t                                        m_np_lock;                  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_NPLock
        _m024 enum fx::dma_transaction_state_t                        m_state;                    //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_State
        _m025 enum wdf::dma_direction_t                               m_dma_direction;            //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .m_DmaDirection
        _m026 class fx::dma_enabler_t*                                m_dma_enabler;              //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .m_DmaEnabler
        _m027 struct fx::dma_description_t*                           m_adapter_info;             //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .m_AdapterInfo
        _m028 class fx::request_t*                                    m_encoded_request;          //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .m_EncodedRequest
        _m029 m_dma_acquired_function_t                               m_dma_acquired_function;    //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .m_DmaAcquiredFunction
        _m030 void*                                                   m_dma_acquired_context;     //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .m_DmaAcquiredContext
        _m031 void*                                                   m_transfer_context;         //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .m_TransferContext
        _m032 struct nt::mdl_t*                                       m_start_mdl;                //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .m_StartMdl
        _m033 struct nt::mdl_t*                                       m_current_fragment_mdl;     //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .m_CurrentFragmentMdl
        _m034 uint64_t                                                m_start_offset;             //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .m_StartOffset
        _m035 uint64_t                                                m_current_fragment_offset;  //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .m_CurrentFragmentOffset
        _m036 uint64_t                                                m_max_fragment_length;      //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .m_MaxFragmentLength
        _m037 uint64_t                                                m_transaction_length;       //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .m_TransactionLength
        _m038 uint64_t                                                m_remaining;                //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .m_Remaining
        _m039 uint64_t                                                m_transferred;              //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .m_Transferred
        _m040 uint64_t                                                m_current_fragment_length;  //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .m_CurrentFragmentLength
        _m041 uint8_t                                                 m_require_single_transfer;  //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .m_RequireSingleTransfer
        _m042 uint32_t                                                m_flags;                    //{ +0x00fc    +0x00fc    +0x00fc    +0x00fc    } | .m_Flags
        _m043 uint32_t                                                m_map_registers_needed;     //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .m_MapRegistersNeeded
        _m044 void*                                                   m_map_register_base;        //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .m_MapRegisterBase
        _m045 uint8_t                                                 m_map_register_base_set;    //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .m_MapRegisterBaseSet
        _m046 uint32_t                                                m_device_address_offset;    //{ +0x0114    +0x0114    +0x0114    +0x0114    } | .m_DeviceAddressOffset
        _m047 uint32_t                                                m_map_registers_reserved;   //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .m_MapRegistersReserved
        _m052 u4_m_transfer_state_t                                   m_transfer_state;           //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .m_TransferState
        _m053 uint32_t                                                m_is_cancelled;             //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .m_IsCancelled
                                                                                                
        SDK_MAGIC_PROPERTIES( "FxDmaPacketTransaction.$", 0x138, true, 0xe98c5d1551a90287 );                          
        SDK_FIXED_SIZE( dma_packet_transaction_t, 0x138 );                                      
    };                                                                                          
};
#include "magic/dma_packet_transaction_t.end.hpp"
SDK_VERIFY( struct fx::dma_packet_transaction_t::u0_m_object_flags_by_name_t, 0x2 );
SDK_VERIFY( struct fx::dma_packet_transaction_t::u4_m_transfer_state_t, 0x10 );
SDK_VERIFY( class fx::dma_packet_transaction_t, 0x138 );
