#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_pasid_table_object_t.start.hpp"
namespace nt
{
    // [struct _IOMMU_PASID_TABLE_OBJECT]
    // => Windows 11
    //
    struct iommu_pasid_table_object_t          
    {                                          
        // Windows 11                          
        //                                     
        _m00 nt::list_entry_t list_entry;        //{ +0x0000    } | .ListEntry
        _m01 uint32_t         domain;            //{ +0x0010    } | .Domain
        _m02 nt::list_entry_t device_list_head;  //{ +0x0018    } | .DeviceListHead
        _m03 void*            table;             //{ +0x0028    } | .Table
        _m04 uint32_t         pasid_count;       //{ +0x0030    } | .PasidCount
        _m05 void*            old_table;         //{ +0x0038    } | .OldTable
                                               
        SDK_MAGIC_PROPERTIES( "_IOMMU_PASID_TABLE_OBJECT.$", 0x0, false, 0x4336c192f0fca345 );                 
        SDK_FIXED_SIZE( iommu_pasid_table_object_t, 0x40 );                 
    };                                         
};
#include "magic/iommu_pasid_table_object_t.end.hpp"
SDK_VERIFY( struct nt::iommu_pasid_table_object_t, 0x40 );
