#pragma once
#include <sdkgen/support_library.hpp>
#include "updategpuvirtualaddress_operation_type_t.hpp"
#include "../../nt/d3dddigpuvirtualaddress_protection_type_t.hpp"

#include "magic/updategpuvirtualaddress_operation_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION]
    // => WDK 10 (NV)
    //
    struct updategpuvirtualaddress_operation_t                               
    {                                                                        
        struct u0_map_t                                                      
        {                                                                    
            // WDK 10                                                        
            //                                                               
            _m01 uint64_t base_address;                                        //{ +0x0000    } | .BaseAddress
            _m02 uint64_t size_in_bytes;                                       //{ +0x0008    } | .SizeInBytes
            _m03 uint32_t h_allocation;                                        //{ +0x0010    } | .hAllocation
            _m04 uint64_t allocation_offset_in_bytes;                          //{ +0x0018    } | .AllocationOffsetInBytes
            _m05 uint64_t allocation_size_in_bytes;                            //{ +0x0020    } | .AllocationSizeInBytes
                                                                             
            SDK_NONVOL_PROPERTIES( "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.Map.$", 0x0, false, 0xa3b06216482ccca0 );                                          
            SDK_FIXED_SIZE( u0_map_t, 0x28 );                                          
        };                                                                   
                                                                             
        struct u1_map_protect_t                                              
        {                                                                    
            using protection_t = struct nt::d3dddigpuvirtualaddress_protection_type_t;                                          
                                                                             
            // WDK 10                                                        
            //                                                               
            _m07 uint64_t      base_address;                                   //{ +0x0000    } | .BaseAddress
            _m08 uint64_t      size_in_bytes;                                  //{ +0x0008    } | .SizeInBytes
            _m09 uint32_t      h_allocation;                                   //{ +0x0010    } | .hAllocation
            _m10 uint64_t      allocation_offset_in_bytes;                     //{ +0x0018    } | .AllocationOffsetInBytes
            _m11 uint64_t      allocation_size_in_bytes;                       //{ +0x0020    } | .AllocationSizeInBytes
            _m12 protection_t  protection;                                     //{ +0x0028    } | .Protection
            _m13 uint64_t      driver_protection;                              //{ +0x0030    } | .DriverProtection
                                                                             
            SDK_NONVOL_PROPERTIES( "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.MapProtect.$", 0x0, false, 0xc8d04648e7174b75 );                                          
            SDK_FIXED_SIZE( u1_map_protect_t, 0x38 );                                          
        };                                                                   
                                                                             
        struct u2_unmap_t                                                    
        {                                                                    
            using protection_t = struct nt::d3dddigpuvirtualaddress_protection_type_t;                             
                                                                             
            // WDK 10                                                        
            //                                                               
            _m15 uint64_t      base_address;                                   //{ +0x0000    } | .BaseAddress
            _m16 uint64_t      size_in_bytes;                                  //{ +0x0008    } | .SizeInBytes
            _m17 protection_t  protection;                                     //{ +0x0010    } | .Protection
                                                                             
            SDK_NONVOL_PROPERTIES( "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.Unmap.$", 0x0, false, 0x9fbaebfc9a5e6749 );                             
            SDK_FIXED_SIZE( u2_unmap_t, 0x18 );                              
        };                                                                   
                                                                             
        struct u3_copy_t                                                     
        {                                                                    
            // WDK 10                                                        
            //                                                               
            _m19 uint64_t source_address;                                      //{ +0x0000    } | .SourceAddress
            _m20 uint64_t size_in_bytes;                                       //{ +0x0008    } | .SizeInBytes
            _m21 uint64_t dest_address;                                        //{ +0x0010    } | .DestAddress
                                                                             
            SDK_NONVOL_PROPERTIES( "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.Copy.$", 0x0, false, 0xc62abffc16ac80e1 );                              
            SDK_FIXED_SIZE( u3_copy_t, 0x18 );                               
        };                                                                   
                                                                             
        using d3dddi_updategpuvirtualaddress_operation_type_t = enum d3d::ddi::updategpuvirtualaddress_operation_type_t;               
                                                                             
        // WDK 10                                                            
        //                                                                   
        _m00 d3dddi_updategpuvirtualaddress_operation_type_t  operation_type;  //{ +0x0000    } | .OperationType
        _m06 u0_map_t                                         map;             //{ +0x0008    } | .Map
        _m14 u1_map_protect_t                                 map_protect;     //{ +0x0008    } | .MapProtect
        _m18 u2_unmap_t                                       unmap;           //{ +0x0008    } | .Unmap
        _m22 u3_copy_t                                        copy;            //{ +0x0008    } | .Copy
                                                                             
        SDK_NONVOL_PROPERTIES( "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.$", 0x0, false, 0x88d8dbdc6df14d6 );               
        SDK_FIXED_SIZE( updategpuvirtualaddress_operation_t, 0x40 );               
    };                                                                       
};
#include "magic/updategpuvirtualaddress_operation_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::updategpuvirtualaddress_operation_t::u0_map_t, 0x28 );
SDK_VERIFY( struct d3d::ddi::updategpuvirtualaddress_operation_t::u1_map_protect_t, 0x38 );
SDK_VERIFY( struct d3d::ddi::updategpuvirtualaddress_operation_t::u2_unmap_t, 0x18 );
SDK_VERIFY( struct d3d::ddi::updategpuvirtualaddress_operation_t::u3_copy_t, 0x18 );
SDK_VERIFY( struct d3d::ddi::updategpuvirtualaddress_operation_t, 0x40 );
