#pragma once
#include <sdkgen/support_library.hpp>
#include "mgmt_policy_type_t.hpp"

#include "magic/mgmt_policy_t.start.hpp"
namespace clfs
{
    // [struct _CLFS_MGMT_POLICY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mgmt_policy_t                                                                                        
    {                                                                                                           
        union u0_policy_parameters_t                                                                            
        {                                                                                                       
            struct u5_maximum_size_t                                                                            
            {                                                                                                   
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                     
                //                                                                                              
                _m04 uint32_t containers;                                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Containers
                                                                                                                
                SDK_NONVOL_PROPERTIES( "_CLFS_MGMT_POLICY.PolicyParameters.MaximumSize.$", 0x4, true, 0x543bbe5ad61ee871 );                                                     
                SDK_FIXED_SIZE( u5_maximum_size_t, 0x4 );                                                       
            };                                                                                                  
                                                                                                                
            struct u10_minimum_size_t                                                                           
            {                                                                                                   
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                     
                //                                                                                              
                _m06 uint32_t containers;                                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Containers
                                                                                                                
                SDK_NONVOL_PROPERTIES( "_CLFS_MGMT_POLICY.PolicyParameters.MinimumSize.$", 0x4, true, 0xfcada3f3627ea2e8 );                                                     
                SDK_FIXED_SIZE( u10_minimum_size_t, 0x4 );                                                      
            };                                                                                                  
                                                                                                                
            struct u15_new_container_size_t                                                                     
            {                                                                                                   
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                        
                //                                                                                              
                _m08 uint32_t size_in_bytes;                                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SizeInBytes
                                                                                                                
                SDK_NONVOL_PROPERTIES( "_CLFS_MGMT_POLICY.PolicyParameters.NewContainerSize.$", 0x4, true, 0x3c79e5ce99a7caff );                                                        
                SDK_FIXED_SIZE( u15_new_container_size_t, 0x4 );                                                        
            };                                                                                                  
                                                                                                                
            struct u20_growth_rate_t                                                                            
            {                                                                                                   
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                        
                //                                                                                              
                _m10 uint32_t absolute_growth_in_containers;                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AbsoluteGrowthInContainers
                _m11 uint32_t relative_growth_percentage;                                                         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .RelativeGrowthPercentage
                                                                                                                
                SDK_NONVOL_PROPERTIES( "_CLFS_MGMT_POLICY.PolicyParameters.GrowthRate.$", 0x8, true, 0xc4824be513f2a017 );                                                                        
                SDK_FIXED_SIZE( u20_growth_rate_t, 0x8 );                                                                        
            };                                                                                                  
                                                                                                                
            struct u25_log_tail_t                                                                               
            {                                                                                                   
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                       
                //                                                                                              
                _m13 uint32_t minimum_available_percentage;                                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MinimumAvailablePercentage
                _m14 uint32_t minimum_available_containers;                                                       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .MinimumAvailableContainers
                                                                                                                
                SDK_NONVOL_PROPERTIES( "_CLFS_MGMT_POLICY.PolicyParameters.LogTail.$", 0x8, true, 0xa1b261621d3870ea );                                                                       
                SDK_FIXED_SIZE( u25_log_tail_t, 0x8 );                                                                       
            };                                                                                                  
                                                                                                                
            struct u30_auto_shrink_t                                                                            
            {                                                                                                   
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                     
                //                                                                                              
                _m16 uint32_t percentage;                                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Percentage
                                                                                                                
                SDK_NONVOL_PROPERTIES( "_CLFS_MGMT_POLICY.PolicyParameters.AutoShrink.$", 0x4, true, 0x783512eb2c91601e );                                                     
                SDK_FIXED_SIZE( u30_auto_shrink_t, 0x4 );                                                       
            };                                                                                                  
                                                                                                                
            struct u35_auto_grow_t                                                                              
            {                                                                                                   
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
                //                                                                                              
                _m18 uint32_t enabled;                                                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Enabled
                                                                                                                
                SDK_NONVOL_PROPERTIES( "_CLFS_MGMT_POLICY.PolicyParameters.AutoGrow.$", 0x4, true, 0x835dcd07393df91b );                                                  
                SDK_FIXED_SIZE( u35_auto_grow_t, 0x4 );                                                         
            };                                                                                                  
                                                                                                                
            struct u40_new_container_prefix_t                                                                   
            {                                                                                                   
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                 
                //                                                                                              
                _m20 uint16_t               prefix_length_in_bytes;                                               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PrefixLengthInBytes
                _m21 sdk::array<wchar_t, 1> prefix_string;                                                        //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .PrefixString
                                                                                                                
                SDK_NONVOL_PROPERTIES( "_CLFS_MGMT_POLICY.PolicyParameters.NewContainerPrefix.$", 0x4, true, 0x322f9394394db73a );                                                                 
                SDK_FIXED_SIZE( u40_new_container_prefix_t, 0x4 );                                                                 
            };                                                                                                  
                                                                                                                
            struct u45_new_container_suffix_t                                                                   
            {                                                                                                   
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                
                //                                                                                              
                _m23 uint64_t next_container_suffix;                                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NextContainerSuffix
                                                                                                                
                SDK_NONVOL_PROPERTIES( "_CLFS_MGMT_POLICY.PolicyParameters.NewContainerSuffix.$", 0x8, true, 0x85dd1aeec26b3b48 );                                                                
                SDK_FIXED_SIZE( u45_new_container_suffix_t, 0x8 );                                                                
            };                                                                                                  
                                                                                                                
            struct u50_new_container_extension_t                                                                
            {                                                                                                   
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                    
                //                                                                                              
                _m25 uint16_t               extension_length_in_bytes;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ExtensionLengthInBytes
                _m26 sdk::array<wchar_t, 1> extension_string;                                                     //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .ExtensionString
                                                                                                                
                SDK_NONVOL_PROPERTIES( "_CLFS_MGMT_POLICY.PolicyParameters.NewContainerExtension.$", 0x4, true, 0xbfe89d7c74e4f031 );                                                                    
                SDK_FIXED_SIZE( u50_new_container_extension_t, 0x4 );                                                                    
            };                                                                                                  
                                                                                                                
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
            //                                                                                                  
            _m05 u5_maximum_size_t                                    maximum_size;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MaximumSize
            _m07 u10_minimum_size_t                                   minimum_size;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MinimumSize
            _m09 u15_new_container_size_t                             new_container_size;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NewContainerSize
            _m12 u20_growth_rate_t                                    growth_rate;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .GrowthRate
            _m15 u25_log_tail_t                                       log_tail;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LogTail
            _m17 u30_auto_shrink_t                                    auto_shrink;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AutoShrink
            _m19 u35_auto_grow_t                                      auto_grow;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AutoGrow
            _m22 u40_new_container_prefix_t                           new_container_prefix;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NewContainerPrefix
            _m24 u45_new_container_suffix_t                           new_container_suffix;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NewContainerSuffix
            _m27 u50_new_container_extension_t                        new_container_extension;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NewContainerExtension
                                                                                                                
            SDK_NONVOL_PROPERTIES( "_CLFS_MGMT_POLICY.PolicyParameters.$", 0x8, true, 0x1d03282713fa758f );                                          
            SDK_FIXED_SIZE( u0_policy_parameters_t, 0x8 );                                                      
        };                                                                                                      
                                                                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                                                      
        _m00 uint32_t                                                                         version;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                                                                         length_in_bytes;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .LengthInBytes
        _m02 uint32_t                                                                         policy_flags;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PolicyFlags
        _m03 enum clfs::mgmt_policy_type_t                                                    policy_type;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .PolicyType
        _m28 u0_policy_parameters_t                                                           policy_parameters;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .PolicyParameters
                                                                                                                
        SDK_NONVOL_PROPERTIES( "_CLFS_MGMT_POLICY.$", 0x18, true, 0x96d4bfb517304179 );                         
        SDK_FIXED_SIZE( mgmt_policy_t, 0x18 );                                                                  
    };                                                                                                          
};
#include "magic/mgmt_policy_t.end.hpp"
SDK_VERIFY( struct clfs::mgmt_policy_t::u0_policy_parameters_t::u5_maximum_size_t, 0x4 );
SDK_VERIFY( struct clfs::mgmt_policy_t::u0_policy_parameters_t::u10_minimum_size_t, 0x4 );
SDK_VERIFY( struct clfs::mgmt_policy_t::u0_policy_parameters_t::u15_new_container_size_t, 0x4 );
SDK_VERIFY( struct clfs::mgmt_policy_t::u0_policy_parameters_t::u20_growth_rate_t, 0x8 );
SDK_VERIFY( struct clfs::mgmt_policy_t::u0_policy_parameters_t::u25_log_tail_t, 0x8 );
SDK_VERIFY( struct clfs::mgmt_policy_t::u0_policy_parameters_t::u30_auto_shrink_t, 0x4 );
SDK_VERIFY( struct clfs::mgmt_policy_t::u0_policy_parameters_t::u35_auto_grow_t, 0x4 );
SDK_VERIFY( struct clfs::mgmt_policy_t::u0_policy_parameters_t::u40_new_container_prefix_t, 0x4 );
SDK_VERIFY( struct clfs::mgmt_policy_t::u0_policy_parameters_t::u45_new_container_suffix_t, 0x8 );
SDK_VERIFY( struct clfs::mgmt_policy_t::u0_policy_parameters_t::u50_new_container_extension_t, 0x4 );
SDK_VERIFY( union clfs::mgmt_policy_t::u0_policy_parameters_t, 0x8 );
SDK_VERIFY( struct clfs::mgmt_policy_t, 0x18 );
