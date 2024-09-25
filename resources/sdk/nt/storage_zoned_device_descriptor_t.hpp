#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_zone_group_t.hpp"
#include "storage_zoned_device_types_t.hpp"

#include "magic/storage_zoned_device_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_ZONED_DEVICE_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_zoned_device_descriptor_t                                                     
    {                                                                                            
        union u0_zone_attributes_t                                                               
        {                                                                                        
            struct u1_sequential_required_zone_t                                                 
            {                                                                                    
                // WDK 10                                                                        
                //                                                                               
                _m04 uint32_t max_open_zone_count;                                                 //{ +0x0000    } | .MaxOpenZoneCount
                _m05 uint8_t  unrestricted_read;                                                   //{ +0x0004    } | .UnrestrictedRead
                                                                                                 
                SDK_NONVOL_PROPERTIES( "_STORAGE_ZONED_DEVICE_DESCRIPTOR.ZoneAttributes.SequentialRequiredZone.$", 0x0, false, 0x208f7f5f336d4dd5 );                                                               
                SDK_FIXED_SIZE( u1_sequential_required_zone_t, 0x8 );                                                               
            };                                                                                   
                                                                                                 
            struct u2_sequential_preferred_zone_t                                                
            {                                                                                    
                // WDK 10                                                                        
                //                                                                               
                _m07 uint32_t optimal_open_zone_count;                                             //{ +0x0000    } | .OptimalOpenZoneCount
                                                                                                 
                SDK_NONVOL_PROPERTIES( "_STORAGE_ZONED_DEVICE_DESCRIPTOR.ZoneAttributes.SequentialPreferredZone.$", 0x0, false, 0xea7f4b12ea3fa372 );                                                                   
                SDK_FIXED_SIZE( u2_sequential_preferred_zone_t, 0x8 );                                                                   
            };                                                                                   
                                                                                                 
            // WDK 10                                                                            
            //                                                                                   
            _m06 u1_sequential_required_zone_t        sequential_required_zone;                    //{ +0x0000    } | .SequentialRequiredZone
            _m08 u2_sequential_preferred_zone_t       sequential_preferred_zone;                   //{ +0x0000    } | .SequentialPreferredZone
                                                                                                 
            SDK_NONVOL_PROPERTIES( "_STORAGE_ZONED_DEVICE_DESCRIPTOR.ZoneAttributes.$", 0x0, false, 0xec0777dc2868c0eb );                                           
            SDK_FIXED_SIZE( u0_zone_attributes_t, 0x8 );                                           
        };                                                                                       
                                                                                                 
        // WDK 10                                                                                
        //                                                                                       
        _m00 uint32_t                                                           version;           //{ +0x0000    } | .Version
        _m01 uint32_t                                                           size;              //{ +0x0004    } | .Size
        _m02 enum nt::storage_zoned_device_types_t                              device_type;       //{ +0x0008    } | .DeviceType
        _m03 uint32_t                                                           zone_count;        //{ +0x000c    } | .ZoneCount
        _m09 u0_zone_attributes_t                                               zone_attributes;   //{ +0x0010    } | .ZoneAttributes
        _m10 uint32_t                                                           zone_group_count;  //{ +0x0018    } | .ZoneGroupCount
        _m11 sdk::array<struct nt::storage_zone_group_t, 1>                     zone_group;        //{ +0x0020    } | .ZoneGroup
                                                                                                 
        SDK_NONVOL_PROPERTIES( "_STORAGE_ZONED_DEVICE_DESCRIPTOR.$", 0x0, false, 0xfc09fca0a4817a84 );                 
        SDK_FIXED_SIZE( storage_zoned_device_descriptor_t, 0x30 );                               
    };                                                                                           
};
#include "magic/storage_zoned_device_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_zoned_device_descriptor_t::u0_zone_attributes_t::u1_sequential_required_zone_t, 0x8 );
SDK_VERIFY( struct nt::storage_zoned_device_descriptor_t::u0_zone_attributes_t::u2_sequential_preferred_zone_t, 0x8 );
SDK_VERIFY( union nt::storage_zoned_device_descriptor_t::u0_zone_attributes_t, 0x8 );
SDK_VERIFY( struct nt::storage_zoned_device_descriptor_t, 0x30 );
