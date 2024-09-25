#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pfn_ulong5_t.start.hpp"
namespace mi
{
    // [struct _MI_PFN_ULONG5]
    // => Windows 11
    //
    struct pfn_ulong5_t                                              
    {                                                                
        struct u0_standby_list_t                                     
        {                                                            
            // Windows 11                                            
            //                                                       
            _m01 uint21_t node_blink_high;                             //{ +0x0000@0  } | .NodeBlinkHigh
            _m02 uint11_t node_flink_middle;                           //{ +0x0000@21 } | .NodeFlinkMiddle
                                                                     
            SDK_MAGIC_PROPERTIES( "_MI_PFN_ULONG5.StandbyList.$", 0x0, false, 0xc225c052ebd1e4fc );                                   
            SDK_FIXED_SIZE( u0_standby_list_t, 0x4 );                                   
        };                                                           
                                                                     
        struct u1_mapped_page_list_t                                 
        {                                                            
            // Windows 11                                            
            //                                                       
            _m04 uint4_t modified_list_bucket_index;                   //{ +0x0000@0  } | .ModifiedListBucketIndex
                                                                     
            SDK_MAGIC_PROPERTIES( "_MI_PFN_ULONG5.MappedPageList.$", 0x0, false, 0x7a978f4688f9a3cf );                                            
            SDK_FIXED_SIZE( u1_mapped_page_list_t, 0x1 );                                            
        };                                                           
                                                                     
        struct u2_active_t                                           
        {                                                            
            // Windows 11                                            
            //                                                       
            _m06 uint2_t anchor_large_page_size;                       //{ +0x0000@0  } | .AnchorLargePageSize
                                                                     
            SDK_MAGIC_PROPERTIES( "_MI_PFN_ULONG5.Active.$", 0x0, false, 0x81de92ea77be3464 );                                        
            SDK_FIXED_SIZE( u2_active_t, 0x4 );                                        
        };                                                           
                                                                     
        // Windows 11                                                
        //                                                           
        _m00 uint32_t                               entire_field;      //{ +0x0000    } | .EntireField
        _m03 u0_standby_list_t                      standby_list;      //{ +0x0000    } | .StandbyList
        _m05 u1_mapped_page_list_t                  mapped_page_list;  //{ +0x0000    } | .MappedPageList
        _m07 u2_active_t                            active;            //{ +0x0000    } | .Active
                                                                     
        SDK_MAGIC_PROPERTIES( "_MI_PFN_ULONG5.$", 0x0, false, 0x20d21cf1c92766f8 );                 
        SDK_FIXED_SIZE( pfn_ulong5_t, 0x4 );                         
    };                                                               
};
#include "magic/pfn_ulong5_t.end.hpp"
SDK_VERIFY( struct mi::pfn_ulong5_t::u0_standby_list_t, 0x4 );
SDK_VERIFY( struct mi::pfn_ulong5_t::u1_mapped_page_list_t, 0x1 );
SDK_VERIFY( struct mi::pfn_ulong5_t::u2_active_t, 0x4 );
SDK_VERIFY( struct mi::pfn_ulong5_t, 0x4 );
