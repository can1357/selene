#pragma once
#include <sdkgen/support_library.hpp>
#include "kdpc_t.hpp"
#include "work_queue_item_t.hpp"
#include "../ex/rundown_ref_t.hpp"
#include "fault_information_t.hpp"

namespace ext { struct iommu_device_id_t; }
namespace ext { struct iommu_device_t;    }

#include "magic/iommu_dma_device_t.start.hpp"
namespace nt
{
    struct device_object_t;
    struct iommu_dma_domain_t;
    struct registered_iommu_t;
    struct iommu_tracked_device_t;
    struct iommu_interface_callback_record_t;

    // [struct _IOMMU_DMA_DEVICE]
    // => Windows 11
    //
    struct iommu_dma_device_t                                                                      
    {                                                                                              
        struct u0_hypervisor_t                                                                     
        {                                                                                          
            // Windows 11                                                                          
            //                                                                                     
            _m04 uint64_t logical_id;                                                                //{ +0x0000    } | .LogicalId
                                                                                                   
            SDK_MAGIC_PROPERTIES( "_IOMMU_DMA_DEVICE.Hypervisor.$", 0x0, false, 0xcd89c1384772e37f );                                     
            SDK_FIXED_SIZE( u0_hypervisor_t, 0x8 );                                                
        };                                                                                         
                                                                                                   
        struct u1_native_t                                                                         
        {                                                                                          
            // Windows 11                                                                          
            //                                                                                     
            _m06 struct nt::registered_iommu_t* iommu;                                               //{ +0x0000    } | .Iommu
            _m07 struct ext::iommu_device_t*    ext_device;                                          //{ +0x0008    } | .ExtDevice
            _m08 uint64_t                       source_id;                                           //{ +0x0010    } | .SourceId
            _m09 uint32_t                       ats_reference_count;                                 //{ +0x0018    } | .AtsReferenceCount
            _m10 uint32_t                       invalidation_queue_depth;                            //{ +0x001c    } | .InvalidationQueueDepth
            _m11 struct ex::rundown_ref_t       device_active;                                       //{ +0x0020    } | .DeviceActive
                                                                                                   
            SDK_MAGIC_PROPERTIES( "_IOMMU_DMA_DEVICE.Native.$", 0x0, false, 0xed68c682e335e4b8 );                                                   
            SDK_FIXED_SIZE( u1_native_t, 0x28 );                                                   
        };                                                                                         
                                                                                                   
        using fault_handler_t = sdk::function<void(void*, struct nt::fault_information_t*)>*;                          
                                                                                                   
        // Windows 11                                                                              
        //                                                                                         
        _m00 struct ext::iommu_device_id_t*                              device_id;                  //{ +0x0000    } | .DeviceId
        _m01 struct nt::device_object_t*                                 device_object;              //{ +0x0008    } | .DeviceObject
        _m02 int32_t                                                     device_state;               //{ +0x0010    } | .DeviceState
        _m03 struct nt::iommu_dma_domain_t*                              domain_owner;               //{ +0x0018    } | .DomainOwner
        _m05 u0_hypervisor_t                                             hypervisor;                 //{ +0x0020    } | .Hypervisor
        _m12 u1_native_t                                                 native;                     //{ +0x0020    } | .Native
        _m13 struct nt::iommu_interface_callback_record_t*               interface_callback_record;  //{ +0x0048    } | .InterfaceCallbackRecord
        _m14 uint8_t                                                     dppt_exception;             //{ +0x0050    } | .DpptException
        _m15 struct nt::iommu_tracked_device_t*                          svm_device;                 //{ +0x0058    } | .SvmDevice
        _m16 fault_handler_t                                             fault_handler;              //{ +0x0060    } | .FaultHandler
        _m17 void*                                                       fault_context;              //{ +0x0068    } | .FaultContext
        _m18 struct nt::fault_information_t                              fault_info;                 //{ +0x0070    } | .FaultInfo
        _m19 struct nt::kdpc_t                                           fault_dpc;                  //{ +0x00a8    } | .FaultDpc
        _m20 struct nt::work_queue_item_t                                fault_work_item;            //{ +0x00e8    } | .FaultWorkItem
                                                                                                   
        SDK_MAGIC_PROPERTIES( "_IOMMU_DMA_DEVICE.$", 0x0, false, 0x63c2d8d645d4e9f0 );                          
        SDK_FIXED_SIZE( iommu_dma_device_t, 0x108 );                                               
    };                                                                                             
};
#include "magic/iommu_dma_device_t.end.hpp"
SDK_VERIFY( struct nt::iommu_dma_device_t::u0_hypervisor_t, 0x8 );
SDK_VERIFY( struct nt::iommu_dma_device_t::u1_native_t, 0x28 );
SDK_VERIFY( struct nt::iommu_dma_device_t, 0x108 );
