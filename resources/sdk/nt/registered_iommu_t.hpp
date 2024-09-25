#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_t.hpp"
#include "kinterrupt_mode_t.hpp"
#include "../pci/slot_number_t.hpp"
#include "kinterrupt_polarity_t.hpp"
#include "iommu_page_handling_data_t.hpp"
#include "../ext/iommu_function_table_t.hpp"
#include "../ext/iommu_known_iommu_type_t.hpp"
#include "../ext/iommu_function_table_extended_t.hpp"

#include "magic/registered_iommu_t.start.hpp"
namespace nt
{
    struct iommu_reserved_device_list_t;

    // [struct _REGISTERED_IOMMU]
    // => Windows 11
    //
    struct registered_iommu_t                                                     
    {                                                                             
        // Windows 11                                                             
        //                                                                        
        _m000 nt::list_entry_t                            list_entry;               //{ +0x0000    } | .ListEntry
        _m001 void*                                       internal_data;            //{ +0x0010    } | .InternalData
        _m002 uint32_t                                    internal_data_size;       //{ +0x0018    } | .InternalDataSize
        _m003 void*                                       interrupt_context;        //{ +0x0020    } | .InterruptContext
        _m004 uint8_t                                     irql;                     //{ +0x0028    } | .Irql
        _m005 int32_t                                     gsi;                      //{ +0x002c    } | .Gsi
        _m006 enum nt::kinterrupt_polarity_t              interrupt_polarity;       //{ +0x0030    } | .InterruptPolarity
        _m007 enum nt::kinterrupt_mode_t                  interrupt_mode;           //{ +0x0034    } | .InterruptMode
        _m008 struct ext::iommu_function_table_t          function_table;           //{ +0x0038    } | .FunctionTable
        _m009 struct ext::iommu_function_table_extended_t function_table_extended;  //{ +0x00d0    } | .FunctionTableExtended
        _m010 uint32_t                                    flags;                    //{ +0x0188    } | .Flags
        _m011 nt::list_entry_t                            pasid_table_list_head;    //{ +0x0190    } | .PasidTableListHead
        _m012 struct nt::iommu_page_handling_data_t       page_handling;            //{ +0x01a0    } | .PageHandling
        _m013 uint32_t                                    maximum_domain_ids;       //{ +0x01c8    } | .MaximumDomainIds
        _m014 uint64_t                                    domain_id_bitmap_lock;    //{ +0x01d0    } | .DomainIdBitmapLock
        _m015 struct rtl::bitmap_t                        domain_id_bitmap;         //{ +0x01d8    } | .DomainIdBitmap
        _m016 uint32_t                                    capabilities;             //{ +0x01e8    } | .Capabilities
        _m017 enum ext::iommu_known_iommu_type_t          known_type;               //{ +0x01ec    } | .KnownType
        _m018 uint32_t                                    pci_segment;              //{ +0x01f0    } | .PciSegment
        _m019 uint32_t                                    pci_bus;                  //{ +0x01f4    } | .PciBus
        _m020 struct pci::slot_number_t                   pci_slot;                 //{ +0x01f8    } | .PciSlot
        _m021 int64_t                                     msi_address;              //{ +0x0200    } | .MsiAddress
        _m022 uint64_t                                    msi_data;                 //{ +0x0208    } | .MsiData
        _m023 uint32_t                                    maximum_asids;            //{ +0x0210    } | .MaximumAsids
        _m024 uint32_t                                    identifier;               //{ +0x0214    } | .Identifier
        _m025 nt::unicode_view                            resource_id;              //{ +0x0218    } | .ResourceId
        _m026 struct nt::iommu_reserved_device_list_t*    reserved_devices;         //{ +0x0228    } | .ReservedDevices
                                                                                  
        SDK_MAGIC_PROPERTIES( "_REGISTERED_IOMMU.$", 0x0, false, 0x4697b9fc651b8bb5 );                        
        SDK_FIXED_SIZE( registered_iommu_t, 0x230 );                              
    };                                                                            
};
#include "magic/registered_iommu_t.end.hpp"
SDK_VERIFY( struct nt::registered_iommu_t, 0x230 );
