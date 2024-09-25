#pragma once
#include <sdkgen/support_library.hpp>
#include "iommu_map_physical_address_type_t.hpp"

#include "magic/iommu_map_physical_address_t.start.hpp"
namespace nt
{
    struct mdl_t;

    // [struct _IOMMU_MAP_PHYSICAL_ADDRESS]
    // => Windows 11
    //
    struct iommu_map_physical_address_t                                  
    {                                                                    
        struct u0_mdl_t                                                  
        {                                                                
            // Windows 11                                                
            //                                                           
            _m01 struct nt::mdl_t* mdl;                                    //{ +0x0000    } | .Mdl
                                                                         
            SDK_MAGIC_PROPERTIES( "_IOMMU_MAP_PHYSICAL_ADDRESS.Mdl.$", 0x0, false, 0x5da4f7f21a46d1c7 );                     
            SDK_FIXED_SIZE( u0_mdl_t, 0x8 );                             
        };                                                               
                                                                         
        struct u1_contiguous_range_t                                     
        {                                                                
            // Windows 11                                                
            //                                                           
            _m03 int64_t  base;                                            //{ +0x0000    } | .Base
            _m04 uint64_t size;                                            //{ +0x0008    } | .Size
                                                                         
            SDK_MAGIC_PROPERTIES( "_IOMMU_MAP_PHYSICAL_ADDRESS.ContiguousRange.$", 0x0, false, 0x2820ac3cfa940991 );                      
            SDK_FIXED_SIZE( u1_contiguous_range_t, 0x10 );                      
        };                                                               
                                                                         
        struct u2_pfn_array_t                                            
        {                                                                
            // Windows 11                                                
            //                                                           
            _m06 uint64_t* page_frame;                                     //{ +0x0000    } | .PageFrame
            _m07 uint64_t  number_of_pages;                                //{ +0x0008    } | .NumberOfPages
                                                                         
            SDK_MAGIC_PROPERTIES( "_IOMMU_MAP_PHYSICAL_ADDRESS.PfnArray.$", 0x0, false, 0x7f2d341b982d0fe3 );                                 
            SDK_FIXED_SIZE( u2_pfn_array_t, 0x10 );                                 
        };                                                               
                                                                         
        // Windows 11                                                    
        //                                                               
        _m00 enum nt::iommu_map_physical_address_type_t map_type;          //{ +0x0000    } | .MapType
        _m02 u0_mdl_t                                   mdl;               //{ +0x0008    } | .Mdl
        _m05 u1_contiguous_range_t                      contiguous_range;  //{ +0x0008    } | .ContiguousRange
        _m08 u2_pfn_array_t                             pfn_array;         //{ +0x0008    } | .PfnArray
                                                                         
        SDK_MAGIC_PROPERTIES( "_IOMMU_MAP_PHYSICAL_ADDRESS.$", 0x0, false, 0xfe65720d02e8c7a6 );                 
        SDK_FIXED_SIZE( iommu_map_physical_address_t, 0x18 );                 
    };                                                                   
};
#include "magic/iommu_map_physical_address_t.end.hpp"
SDK_VERIFY( struct nt::iommu_map_physical_address_t::u0_mdl_t, 0x8 );
SDK_VERIFY( struct nt::iommu_map_physical_address_t::u1_contiguous_range_t, 0x10 );
SDK_VERIFY( struct nt::iommu_map_physical_address_t::u2_pfn_array_t, 0x10 );
SDK_VERIFY( struct nt::iommu_map_physical_address_t, 0x18 );
