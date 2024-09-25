#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "dma_description_t.hpp"
#include "../wdf/dma_profile_t.hpp"
#include "transactioned_entry_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "../nt/npaged_lookaside_list_t.hpp"
#include "evt_dma_enabler_fill_callback_t.hpp"
#include "evt_dma_enabler_flush_callback_t.hpp"
#include "evt_dma_enabler_enable_callback_t.hpp"
#include "evt_dma_enabler_disable_callback_t.hpp"
#include "evt_dma_enabler_self_managed_io_stop_callback_t.hpp"
#include "evt_dma_enabler_self_managed_io_start_callback_t.hpp"

namespace nt { struct device_object_t;       }
namespace nt { struct scatter_gather_list_t; }

#include "magic/dma_enabler_t.start.hpp"
namespace fx
{
    class device_t;
    class object_t;
    class device_base_t;
    struct driver_globals_t;

    // [class FxDmaEnabler]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class dma_enabler_t                                                                                                             
    {                                                                                                                               
        struct u0_m_object_flags_by_name_t                                                                                          
        {                                                                                                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                
            //                                                                                                                      
            _m05 uint1_t passive_callbacks;                                                                                           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PassiveCallbacks
            _m06 uint1_t no_delete_ddi;                                                                                               //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NoDeleteDDI
            _m07 uint1_t delete_called;                                                                                               //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteCalled
            _m08 uint1_t committed;                                                                                                   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Committed
            _m09 uint1_t passive_dispose;                                                                                             //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PassiveDispose
            _m10 uint1_t force_dispose_thread;                                                                                        //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ForceDisposeThread
            _m11 uint1_t has_debug;                                                                                                   //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HasDebug
            _m12 uint1_t early_disposed_ext;                                                                                          //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EarlyDisposedExt
            _m13 uint1_t trace_state;                                                                                                 //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .TraceState
                                                                                                                                    
            SDK_MAGIC_PROPERTIES( "FxDmaEnabler.m_ObjectFlagsByName.$", 0x2, true, 0xa57ca901a608fd4a );                                                                
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                                                     
        };                                                                                                                          
                                                                                                                                    
        union u4_m_sg_list_t                                                                                                        
        {                                                                                                                           
            struct u8_scatter_gather_profile_t                                                                                      
            {                                                                                                                       
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                            
                //                                                                                                                  
                _m41 struct nt::npaged_lookaside_list_t lookaside;                                                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lookaside
                                                                                                                                    
                SDK_MAGIC_PROPERTIES( "FxDmaEnabler.m_SGList.ScatterGatherProfile.$", 0x80, true, 0x91b3796753e86f34 );                                                                            
                SDK_FIXED_SIZE( u8_scatter_gather_profile_t, 0x80 );                                                                            
            };                                                                                                                      
                                                                                                                                    
            struct u12_system_profile_t                                                                                             
            {                                                                                                                       
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                       
                //                                                                                                                  
                _m43 struct nt::scatter_gather_list_t* list;                                                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .List
                                                                                                                                    
                SDK_MAGIC_PROPERTIES( "FxDmaEnabler.m_SGList.SystemProfile.$", 0x8, true, 0xd2a6dd04d088d58e );                                                                       
                SDK_FIXED_SIZE( u12_system_profile_t, 0x8 );                                                                        
            };                                                                                                                      
                                                                                                                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                  
            //                                                                                                                      
            _m42 u8_scatter_gather_profile_t                      scatter_gather_profile;                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ScatterGatherProfile
            _m44 u12_system_profile_t                             system_profile;                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SystemProfile
                                                                                                                                    
            SDK_MAGIC_PROPERTIES( "FxDmaEnabler.m_SGList.$", 0x80, true, 0x63ee83c067439339 );                                                                  
            SDK_FIXED_SIZE( u4_m_sg_list_t, 0x80 );                                                                                 
        };                                                                                                                          
                                                                                                                                    
        using m_evt_dma_enabler_self_managed_io_start_t = class fx::evt_dma_enabler_self_managed_io_start_callback_t;                                           
        using m_evt_dma_enabler_self_managed_io_stop_t =  class fx::evt_dma_enabler_self_managed_io_stop_callback_t;                                           
                                                                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                         
        //                                                                                                                          
        _m000 uint16_t                                                                   m_type;                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Type
        _m001 uint16_t                                                                   m_object_size;                               //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m002 int32_t                                                                    m_refcnt;                                    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m003 struct fx::driver_globals_t*                                               m_globals;                                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m004 uint16_t                                                                   m_object_flags;                              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m014 u0_m_object_flags_by_name_t                                                m_object_flags_by_name;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m015 uint16_t                                                                   m_object_state;                              //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m016 nt::list_entry_t                                                           m_child_list_head;                           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m017 class mx::lock_t                                                           m_spin_lock;                                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m018 class fx::object_t*                                                        m_parent_object;                             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m019 nt::list_entry_t                                                           m_child_entry;                               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m020 struct nt::single_list_entry_t                                             m_dispose_single_entry;                      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m021 class fx::device_base_t*                                                   m_device_base;                               //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m022 class fx::device_t*                                                        m_device;                                    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Device
        _m023 class mx::lock_t                                                           m_np_lock;                                   //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_NPLock
        _m024 struct fx::transactioned_entry_t                                           m_transaction_link;                          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_TransactionLink
        _m025 struct nt::device_object_t*                                                m_fdo;                                       //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .m_FDO
        _m026 struct nt::device_object_t*                                                m_pdo;                                       //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .m_PDO
        _m027 struct fx::dma_description_t                                               m_simplex_adapter_info;                      //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .m_SimplexAdapterInfo
        _m028 sdk::array<struct fx::dma_description_t, 2>                                m_duplex_adapter_info;                       //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .m_DuplexAdapterInfo
        _m029 enum wdf::dma_profile_t                                                    m_profile;                                   //{ +0x0178    +0x0178    +0x0178    +0x0178    } | .m_Profile
        _m030 uint1_t                                                                    m_is_added;                                  //{ +0x017c@0  +0x017c@0  +0x017c@0  +0x017c@0  } | .m_IsAdded
        _m031 uint1_t                                                                    m_is_configured;                             //{ +0x017c@1  +0x017c@1  +0x017c@1  +0x017c@1  } | .m_IsConfigured
        _m032 uint1_t                                                                    m_is_bus_master;                             //{ +0x017c@2  +0x017c@2  +0x017c@2  +0x017c@2  } | .m_IsBusMaster
        _m033 uint1_t                                                                    m_is_scatter_gather;                         //{ +0x017c@3  +0x017c@3  +0x017c@3  +0x017c@3  } | .m_IsScatterGather
        _m034 uint1_t                                                                    m_is_duplex_transfer;                        //{ +0x017c@4  +0x017c@4  +0x017c@4  +0x017c@4  } | .m_IsDuplexTransfer
        _m035 uint1_t                                                                    m_is_sg_list_allocated;                      //{ +0x017c@5  +0x017c@5  +0x017c@5  +0x017c@5  } | .m_IsSGListAllocated
        _m036 uint1_t                                                                    m_require_single_transfer;                   //{ +0x017c@6  +0x017c@6  +0x017c@6  +0x017c@6  } | .m_RequireSingleTransfer
        _m037 uint32_t                                                                   m_common_buffer_alignment;                   //{ +0x0180    +0x0180    +0x0180    +0x0180    } | .m_CommonBufferAlignment
        _m038 uint32_t                                                                   m_maximum_length;                            //{ +0x0184    +0x0184    +0x0184    +0x0184    } | .m_MaximumLength
        _m039 uint32_t                                                                   m_max_sg_elements;                           //{ +0x0188    +0x0188    +0x0188    +0x0188    } | .m_MaxSGElements
        _m040 uint64_t                                                                   m_sg_list_size;                              //{ +0x0190    +0x0190    +0x0190    +0x0190    } | .m_SGListSize
        _m045 u4_m_sg_list_t                                                             m_sg_list;                                   //{ +0x01c0    +0x01c0    +0x01c0    +0x01c0    } | .m_SGList
        _m046 class fx::evt_dma_enabler_fill_callback_t                                  m_evt_dma_enabler_fill;                      //{ +0x0240    +0x0240    +0x0240    +0x0240    } | .m_EvtDmaEnablerFill
        _m047 class fx::evt_dma_enabler_flush_callback_t                                 m_evt_dma_enabler_flush;                     //{ +0x0250    +0x0250    +0x0250    +0x0250    } | .m_EvtDmaEnablerFlush
        _m048 class fx::evt_dma_enabler_enable_callback_t                                m_evt_dma_enabler_enable;                    //{ +0x0260    +0x0260    +0x0260    +0x0260    } | .m_EvtDmaEnablerEnable
        _m049 class fx::evt_dma_enabler_disable_callback_t                               m_evt_dma_enabler_disable;                   //{ +0x0270    +0x0270    +0x0270    +0x0270    } | .m_EvtDmaEnablerDisable
        _m050 m_evt_dma_enabler_self_managed_io_start_t                                  m_evt_dma_enabler_self_managed_io_start;     //{ +0x0280    +0x0280    +0x0280    +0x0280    } | .m_EvtDmaEnablerSelfManagedIoStart
        _m051 m_evt_dma_enabler_self_managed_io_stop_t                                   m_evt_dma_enabler_self_managed_io_stop;      //{ +0x0290    +0x0290    +0x0290    +0x0290    } | .m_EvtDmaEnablerSelfManagedIoStop
        _m052 uint8_t                                                                    m_dma_enabler_fill_failed;                   //{ +0x02a0    +0x02a0    +0x02a0    +0x02a0    } | .m_DmaEnablerFillFailed
        _m053 uint8_t                                                                    m_dma_enabler_enable_failed;                 //{ +0x02a1    +0x02a1    +0x02a1    +0x02a1    } | .m_DmaEnablerEnableFailed
        _m054 uint8_t                                                                    m_dma_enabler_self_managed_io_start_failed;  //{ +0x02a2    +0x02a2    +0x02a2    +0x02a2    } | .m_DmaEnablerSelfManagedIoStartFailed
                                                                                                                                    
        SDK_MAGIC_PROPERTIES( "FxDmaEnabler.$", 0x2c0, true, 0xf9bba196511b20b5 );                                                  
        SDK_FIXED_SIZE( dma_enabler_t, 0x2c0 );                                                                                     
    };                                                                                                                              
};
#include "magic/dma_enabler_t.end.hpp"
SDK_VERIFY( struct fx::dma_enabler_t::u0_m_object_flags_by_name_t, 0x2 );
SDK_VERIFY( struct fx::dma_enabler_t::u4_m_sg_list_t::u8_scatter_gather_profile_t, 0x80 );
SDK_VERIFY( struct fx::dma_enabler_t::u4_m_sg_list_t::u12_system_profile_t, 0x8 );
SDK_VERIFY( union fx::dma_enabler_t::u4_m_sg_list_t, 0x80 );
SDK_VERIFY( class fx::dma_enabler_t, 0x2c0 );
