#pragma once
#include <sdkgen/support_library.hpp>
#include "iommu_capabilities_t.hpp"
#include "iommu_function_table_t.hpp"
#include "iommu_known_iommu_type_t.hpp"

#include "magic/iommu_t.start.hpp"
namespace ext
{
    // [struct _EXT_IOMMU]
    // => Windows 11
    //
    struct iommu_t                                                       
    {                                                                    
        struct u0_flags_t                                                
        {                                                                
            // Windows 11                                                
            //                                                           
            _m04 uint1_t pci_segment;                                      //{ +0x0000@0  } | .PciSegment
                                                                         
            SDK_MAGIC_PROPERTIES( "_EXT_IOMMU.Flags.$", 0x0, false, 0x981183fc5223cc3e );                                     
            SDK_FIXED_SIZE( u0_flags_t, 0x2 );                                     
        };                                                               
                                                                         
        // Windows 11                                                    
        //                                                               
        _m00 void*                              context;                   //{ +0x0000    } | .Context
        _m01 enum ext::iommu_known_iommu_type_t type;                      //{ +0x0008    } | .Type
        _m02 union ext::iommu_capabilities_t    capabilities;              //{ +0x0010    } | .Capabilities
        _m03 uint32_t                           max_output_address_width;  //{ +0x0018    } | .MaxOutputAddressWidth
        _m05 u0_flags_t                         flags;                     //{ +0x001c    } | .Flags
        _m06 uint16_t                           pci_segment_number;        //{ +0x001e    } | .PciSegmentNumber
        _m07 struct ext::iommu_function_table_t function_table;            //{ +0x0020    } | .FunctionTable
                                                                         
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU.$", 0x0, false, 0x4034a50346eb0313 );                         
        SDK_FIXED_SIZE( iommu_t, 0xb8 );                                 
    };                                                                   
};
#include "magic/iommu_t.end.hpp"
SDK_VERIFY( struct ext::iommu_t::u0_flags_t, 0x2 );
SDK_VERIFY( struct ext::iommu_t, 0xb8 );
