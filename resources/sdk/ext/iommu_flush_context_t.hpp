#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_flush_context_t.start.hpp"
namespace ext
{
    // [struct _EXT_IOMMU_FLUSH_CONTEXT]
    // => Windows 11
    //
    struct iommu_flush_context_t                 
    {                                            
        struct u0_intel_t                        
        {                                        
            // Windows 11                        
            //                                   
            _m00 uint32_t status;                  //{ +0x0000    } | .Status
            _m01 uint64_t physical_address;        //{ +0x0008    } | .PhysicalAddress
                                                 
            SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_FLUSH_CONTEXT.Intel.$", 0x0, false, 0x55c7a57347c8b578 );                       
            SDK_FIXED_SIZE( u0_intel_t, 0x10 );                       
        };                                       
                                                 
        struct u1_amd_t                          
        {                                        
            // Windows 11                        
            //                                   
            _m03 uint64_t* status_addr;            //{ +0x0000    } | .StatusAddr
            _m04 uint64_t  old_status;             //{ +0x0008    } | .OldStatus
                                                 
            SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_FLUSH_CONTEXT.Amd.$", 0x0, false, 0x467ddea0613b75fe );                  
            SDK_FIXED_SIZE( u1_amd_t, 0x10 );                  
        };                                       
                                                 
        // Windows 11                            
        //                                       
        _m02 u0_intel_t                    intel;  //{ +0x0000    } | .Intel
        _m05 u1_amd_t                      amd;    //{ +0x0000    } | .Amd
                                                 
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_FLUSH_CONTEXT.$", 0x0, false, 0xca326b0e2d8ce300 );      
        SDK_FIXED_SIZE( iommu_flush_context_t, 0x10 );      
    };                                           
};
#include "magic/iommu_flush_context_t.end.hpp"
SDK_VERIFY( struct ext::iommu_flush_context_t::u0_intel_t, 0x10 );
SDK_VERIFY( struct ext::iommu_flush_context_t::u1_amd_t, 0x10 );
SDK_VERIFY( struct ext::iommu_flush_context_t, 0x10 );
