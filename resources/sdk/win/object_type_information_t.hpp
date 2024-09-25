#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/generic_mapping_t.hpp"

#include "magic/object_type_information_t.start.hpp"
namespace win
{
    // [struct _OBJECT_TYPE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_type_information_t                                      
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                
        _m00 nt::unicode_view             type_name;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TypeName
        _m01 uint32_t                     total_number_of_objects;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TotalNumberOfObjects
        _m02 uint32_t                     total_number_of_handles;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .TotalNumberOfHandles
        _m03 uint32_t                     total_paged_pool_usage;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TotalPagedPoolUsage
        _m04 uint32_t                     total_non_paged_pool_usage;       //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .TotalNonPagedPoolUsage
        _m05 uint32_t                     total_name_pool_usage;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TotalNamePoolUsage
        _m06 uint32_t                     total_handle_table_usage;         //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .TotalHandleTableUsage
        _m07 uint32_t                     high_water_number_of_objects;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HighWaterNumberOfObjects
        _m08 uint32_t                     high_water_number_of_handles;     //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .HighWaterNumberOfHandles
        _m09 uint32_t                     high_water_paged_pool_usage;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .HighWaterPagedPoolUsage
        _m10 uint32_t                     high_water_non_paged_pool_usage;  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .HighWaterNonPagedPoolUsage
        _m11 uint32_t                     high_water_name_pool_usage;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .HighWaterNamePoolUsage
        _m12 uint32_t                     high_water_handle_table_usage;    //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .HighWaterHandleTableUsage
        _m13 uint32_t                     invalid_attributes;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .InvalidAttributes
        _m14 struct nt::generic_mapping_t generic_mapping;                  //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .GenericMapping
        _m15 uint32_t                     valid_access_mask;                //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .ValidAccessMask
        _m16 uint8_t                      security_required;                //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .SecurityRequired
        _m17 uint8_t                      maintain_handle_count;            //{ +0x0059    +0x0059    +0x0059    +0x0059    } | .MaintainHandleCount
        _m18 uint8_t                      type_index;                       //{ +0x005a    +0x005a    +0x005a    +0x005a    } | .TypeIndex
        _m19 char                         reserved_byte;                    //{ +0x005b    +0x005b    +0x005b    +0x005b    } | .ReservedByte
        _m20 uint32_t                     pool_type;                        //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .PoolType
        _m21 uint32_t                     default_paged_pool_charge;        //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .DefaultPagedPoolCharge
        _m22 uint32_t                     default_non_paged_pool_charge;    //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .DefaultNonPagedPoolCharge
                                                                          
        SDK_MAGIC_PROPERTIES( "_OBJECT_TYPE_INFORMATION.$", 0x68, true, 0x790f1bd45f63c6ff );                                
        SDK_FIXED_SIZE( object_type_information_t, 0x68 );                                
    };                                                                    
};
#include "magic/object_type_information_t.end.hpp"
SDK_VERIFY( struct win::object_type_information_t, 0x68 );
