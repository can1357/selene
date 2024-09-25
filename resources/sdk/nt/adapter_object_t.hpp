#pragma once
#include <sdkgen/support_library.hpp>
#include "../dma/width_t.hpp"
#include "kdevice_queue_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "work_queue_item_t.hpp"
#include "scatter_gather_list_t.hpp"
#include "../halp/dma_adapter_object_t.hpp"
#include "../halp/dma_translation_type_t.hpp"
#include "../ext/iommu_translation_type_t.hpp"
#include "../halp/emergency_la_queue_entry_t.hpp"
#include "../halp/dma_adapter_allocation_state_t.hpp"

namespace dma  { struct transfer_context_t;          }
namespace ext  { struct iommu_device_id_t;           }
namespace halp { struct dma_controller_t;            }
namespace halp { struct dma_domain_object_t;         }
namespace halp { struct dma_master_adapter_object_t; }

#include "magic/adapter_object_t.start.hpp"
namespace nt
{
    struct mdl_t;
    struct device_object_t;
    struct iommu_dma_device_t;
    struct wait_context_block_t;
    struct iommu_dma_logical_address_token_t;

    // [struct _ADAPTER_OBJECT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct adapter_object_t                                                                         
    {                                                                                               
        using iommu_device_t = sdk::variant<void*, struct nt::iommu_dma_device_t*>;                                        
                                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                          
        _m000 struct halp::dma_adapter_object_t             adapter_object;                           //{ +0x0000    +0x0000    +0x0000    } | .AdapterObject
        _m001 struct halp::dma_master_adapter_object_t*     master_adapter;                           //{ +0x0098    +0x00a0    +0x0098    } | .MasterAdapter
        _m002 nt::list_entry_t                              wait_queue_entry;                         //{ +0x00a0    +0x00a8    +0x00a0    } | .WaitQueueEntry
        _m003 struct nt::kdevice_queue_t                    channel_wait_queue;                       //{ +0x00b0    +0x00b8    +0x00b0    } | .ChannelWaitQueue
        _m004 uint64_t                                      resource_wait_lock;                       //{ +0x00b0    +0x00b8    +0x00b0    } | .ResourceWaitLock
        _m005 nt::list_entry_t                              resource_wait_queue;                      //{ +0x00b8    +0x00c0    +0x00b8    } | .ResourceWaitQueue
        _m006 nt::list_entry_t                              channel_resource_wait_queue;              //{ +0x00c8    +0x00d0    +0x00c8    } | .ChannelResourceWaitQueue
        _m007 uint8_t                                       resource_queue_busy;                      //{ +0x00d8    +0x00e0    +0x00d8    } | .ResourceQueueBusy
        _m008 uint32_t                                      map_registers_per_channel;                //{ +0x00e0    +0x00e8    +0x00e0    } | .MapRegistersPerChannel
        _m009 void*                                         map_register_base;                        //{ +0x00e8    +0x00f0    +0x00e8    } | .MapRegisterBase
        _m010 uint32_t                                      number_of_map_registers;                  //{ +0x00f0    +0x00f8    +0x00f0    } | .NumberOfMapRegisters
        _m011 uint32_t                                      max_transfer_length;                      //{ +0x00f4    +0x00fc    +0x00f4    } | .MaxTransferLength
        _m012 sdk::array<void*, 2>                          crash_dump_register_base;                 //{ +0x00f8    +0x0100    +0x00f8    } | .CrashDumpRegisterBase
        _m013 sdk::array<uint32_t, 2>                       number_of_crash_dump_registers;           //{ +0x0108    +0x0110    +0x0108    } | .NumberOfCrashDumpRegisters
        _m014 sdk::array<uint32_t, 2>                       crash_dump_register_ref_count;            //{ +0x0110    +0x0118    +0x0110    } | .CrashDumpRegisterRefCount
        _m015 nt::list_entry_t                              adapter_crash_dump_list;                  //{ +0x0118    +0x0120    +0x0118    } | .AdapterCrashDumpList
        _m016 struct nt::mdl_t*                             map_register_mdl;                         //{ +0x0128    +0x0130    +0x0128    } | .MapRegisterMdl
        _m017 uint64_t                                      map_register_mdl_lock;                    //{ +0x0130    +0x0138    +0x0130    } | .MapRegisterMdlLock
        _m018 struct ex::push_lock_t                        expired_lock;                             //{ +0x0138    +0x0140    +0x0138    } | .ExpiredLock
        _m019 void*                                         allocation_handle;                        //{ +0x0140    +0x0148    +0x0140    } | .AllocationHandle
        _m020 void*                                         virtual_address;                          //{ +0x0148    +0x0150    +0x0148    } | .VirtualAddress
        _m021 uint8_t                                       is_allocation_mdl_based;                  //{ +0x0150    +0x0158    +0x0150    } | .IsAllocationMdlBased
        _m022 uint8_t                                       no_local_pool;                            //{ +0x0151    +0x0159    +0x0151    } | .NoLocalPool
        _m023 uint8_t                                       expired_flag;                             //{ +0x0152    +0x015a    +0x0152    } | .ExpiredFlag
        _m024 struct nt::wait_context_block_t*              current_wcb;                              //{ +0x0158    +0x0160    +0x0158    } | .CurrentWcb
        _m025 struct dma::transfer_context_t*               current_transfer_context;                 //{ +0x0160    +0x0168    +0x0160    } | .CurrentTransferContext
        _m026 struct halp::dma_controller_t*                dma_controller;                           //{ +0x0168    +0x0170    +0x0168    } | .DmaController
        _m027 uint32_t                                      controller;                               //{ +0x0170    +0x0178    +0x0170    } | .Controller
        _m028 uint32_t                                      channel_number;                           //{ +0x0174    +0x017c    +0x0174    } | .ChannelNumber
        _m029 uint32_t                                      request_line;                             //{ +0x0178    +0x0180    +0x0178    } | .RequestLine
        _m030 uint32_t                                      requested_channel_count;                  //{ +0x017c    +0x0184    +0x017c    } | .RequestedChannelCount
        _m031 uint32_t                                      allocated_channel_count;                  //{ +0x0180    +0x0188    +0x0180    } | .AllocatedChannelCount
        _m032 sdk::array<uint32_t, 8>                       allocated_channels;                       //{ +0x0184    +0x018c    +0x0184    } | .AllocatedChannels
        _m033 void*                                         channel_adapter;                          //{ +0x01a8    +0x01b0    +0x01a8    } | .ChannelAdapter
        _m034 uint8_t                                       needs_map_registers;                      //{ +0x01b0    +0x01b8    +0x01b0    } | .NeedsMapRegisters
        _m035 uint8_t                                       master_device;                            //{ +0x01b1    +0x01b9    +0x01b1    } | .MasterDevice
        _m036 uint8_t                                       scatter_gather;                           //{ +0x01b2    +0x01ba    +0x01b2    } | .ScatterGather
        _m037 uint8_t                                       auto_initialize;                          //{ +0x01b3    +0x01bb    +0x01b3    } | .AutoInitialize
        _m038 uint8_t                                       ignore_count;                             //{ +0x01b4    +0x01bc    +0x01b4    } | .IgnoreCount
        _m039 uint8_t                                       cache_coherent;                           //{ +0x01b5    +0x01bd    +0x01b5    } | .CacheCoherent
        _m040 uint8_t                                       dma32_bit_addresses;                      //{ +0x01b8    +0x01c0    +0x01b8    } | .Dma32BitAddresses
        _m041 uint8_t                                       dma64_bit_addresses;                      //{ +0x01b9    +0x01c1    +0x01b9    } | .Dma64BitAddresses
        _m042 uint32_t                                      dma_address_width;                        //{ +0x01b8    +0x01c0    +0x01b8    } | .DmaAddressWidth
        _m043 enum dma::width_t                             dma_port_width;                           //{ +0x01bc    +0x01c4    +0x01bc    } | .DmaPortWidth
        _m044 int64_t                                       device_address;                           //{ +0x01c0    +0x01c8    +0x01c0    } | .DeviceAddress
        _m045 nt::list_entry_t                              adapter_list;                             //{ +0x01c8    +0x01d0    +0x01c8    } | .AdapterList
        _m046 struct nt::work_queue_item_t                  work_item;                                //{ +0x01d8    +0x01e0    +0x01d8    } | .WorkItem
        _m047 struct halp::dma_domain_object_t*             domain_pointer;                           //{ +0x01f8    +0x0200    +0x01f8    } | .DomainPointer
        _m048 int32_t                                       translation_type;                         //{ +0x0200    +0x0208    +0x0200    } | .TranslationType
        _m049 uint8_t                                       adapter_in_use;                           //{ +0x0204    +0x020c    +0x0204    } | .AdapterInUse
        _m050 struct nt::device_object_t*                   device_object;                            //{ +0x0208    +0x0210    +0x0208    } | .DeviceObject
        _m051 struct ext::iommu_device_id_t*                device_id;                                //{ +0x0210    +0x0218    +0x0210    } | .DeviceId
        _m052 iommu_device_t                                iommu_device;                             //{ +0x0218    +0x0220    +0x0218    } | .IommuDevice
        _m053 struct nt::mdl_t*                             scatter_gather_mdl;                       //{ +0x0220    +0x0228    +0x0220    } | .ScatterGatherMdl
        _m054 uint64_t                                      low_memory_logical_address_queue_lock;    //{ +0x0230    +0x0238    +0x0230    } | .LowMemoryLogicalAddressQueueLock
        _m055 nt::list_entry_t                              low_memory_logical_address_queue;         //{ +0x0238    +0x0240    +0x0238    } | .LowMemoryLogicalAddressQueue
        _m056 uint8_t                                       low_memory_logical_address_queue_in_use;  //{ +0x0248    +0x0250    +0x0248    } | .LowMemoryLogicalAddressQueueInUse
        _m057 struct halp::emergency_la_queue_entry_t       low_memory_logical_address_queue_entry;   //{ +0x0250    +0x0258    +0x0250    } | .LowMemoryLogicalAddressQueueEntry
        _m058 enum halp::dma_adapter_allocation_state_t     allocation_state;                         //{ +0x0268    +0x0270    +0x0268    } | .AllocationState
        _m059 uint32_t                                      scatter_gather_buffer_length;             //{ +0x026c    +0x0274    +0x026c    } | .ScatterGatherBufferLength
        _m060 struct nt::scatter_gather_list_t              scatter_gather_buffer;                    //{ +0x0270    +0x0278    +0x0270    } | .ScatterGatherBuffer
                                                                                                    
        // Windows 10 v2004, Windows 10 v20H2                                                       
        //                                                                                          
        _m061 uint64_t                                      low_memory_logical_address_base;          //{ +0x0228    +0x0228    } | .LowMemoryLogicalAddressBase
                                                                                                    
        // Windows 11                                                                               
        //                                                                                          
        _m062 struct nt::iommu_dma_logical_address_token_t* low_memory_logical_address_token;         //{ +0x0230    } | .LowMemoryLogicalAddressToken
                                                                                                    
        SDK_MAGIC_PROPERTIES( "_ADAPTER_OBJECT.$", 0x280, true, 0x8ec759115df6f747 );                                        
        SDK_DYNAMIC_SIZE( adapter_object_t );                                                       
    };                                                                                              
};
#include "magic/adapter_object_t.end.hpp"
