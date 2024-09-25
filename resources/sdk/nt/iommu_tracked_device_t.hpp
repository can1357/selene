#pragma once
#include <sdkgen/support_library.hpp>
#include "iommu_svm_capabilities_t.hpp"

#include "magic/iommu_tracked_device_t.start.hpp"
namespace nt
{
    struct iommu_dma_device_t;
    struct iommu_pasid_table_object_t;

    // [struct _IOMMU_TRACKED_DEVICE]
    // => Windows 11
    //
    struct iommu_tracked_device_t                                           
    {                                                                       
        // Windows 11                                                       
        //                                                                  
        _m00 nt::list_entry_t                       list_entry;               //{ +0x0000    } | .ListEntry
        _m01 uint64_t                               lock;                     //{ +0x0010    } | .Lock
        _m02 void*                                  iommu;                    //{ +0x0018    } | .Iommu
        _m03 uint32_t                               iommu_capabilities;       //{ +0x0020    } | .IommuCapabilities
        _m04 uint32_t                               reference_count;          //{ +0x0024    } | .ReferenceCount
        _m05 uint64_t                               source_id;                //{ +0x0028    } | .SourceId
        _m06 union nt::iommu_svm_capabilities_t     capabilities;             //{ +0x0030    } | .Capabilities
        _m07 uint32_t                               flags;                    //{ +0x003c    } | .Flags
        _m08 struct nt::iommu_pasid_table_object_t* current_pasid_table;      //{ +0x0040    } | .CurrentPasidTable
        _m09 nt::list_entry_t                       pasid_table_device_list;  //{ +0x0048    } | .PasidTableDeviceList
        _m10 nt::list_entry_t                       active_device_list_head;  //{ +0x0058    } | .ActiveDeviceListHead
        _m11 struct nt::iommu_dma_device_t*         dma_device;               //{ +0x0068    } | .DmaDevice
                                                                            
        SDK_MAGIC_PROPERTIES( "_IOMMU_TRACKED_DEVICE.$", 0x0, false, 0xacaf8e6ab6273ae6 );                        
        SDK_FIXED_SIZE( iommu_tracked_device_t, 0x70 );                        
    };                                                                      
};
#include "magic/iommu_tracked_device_t.end.hpp"
SDK_VERIFY( struct nt::iommu_tracked_device_t, 0x70 );
