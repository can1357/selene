#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_t.hpp"
#include "fpb_resource_type_t.hpp"
#include "fpb_memory_range_list_t.hpp"

#include "magic/fpb_resource_descriptor_t.start.hpp"
namespace pci
{
    // [struct _PCI_FPB_RESOURCE_DESCRIPTOR]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fpb_resource_descriptor_t                                      
    {                                                                     
        struct u0_memory_t                                                
        {                                                                 
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
            //                                                            
            _m01 struct pci::fpb_memory_range_list_t resource_list;         //{ +0x0000    +0x0000    +0x0000    } | .ResourceList
                                                                          
            SDK_MAGIC_PROPERTIES( "_PCI_FPB_RESOURCE_DESCRIPTOR.Memory.$", 0x10, true, 0x1a8d4d4f3ae2d75b );                     
            SDK_FIXED_SIZE( u0_memory_t, 0x10 );                          
        };                                                                
                                                                          
        struct u3_rid_t                                                   
        {                                                                 
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
            //                                                            
            _m03 struct rtl::bitmap_t    rid_map;                           //{ +0x0000    +0x0000    +0x0000    } | .RidMap
            _m04 sdk::array<uint32_t, 8> rid_map_buffer;                    //{ +0x0010    +0x0010    +0x0010    } | .RidMapBuffer
                                                                          
            SDK_MAGIC_PROPERTIES( "_PCI_FPB_RESOURCE_DESCRIPTOR.Rid.$", 0x30, true, 0xeb7031096521c280 );                      
            SDK_FIXED_SIZE( u3_rid_t, 0x30 );                             
        };                                                                
                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                
        _m00 enum pci::fpb_resource_type_t                         type;    //{ +0x0000    +0x0000    +0x0000    } | .Type
        _m02 u0_memory_t                                           memory;  //{ +0x0008    +0x0008    +0x0008    } | .Memory
        _m05 u3_rid_t                                              rid;     //{ +0x0008    +0x0008    +0x0008    } | .Rid
                                                                          
        SDK_MAGIC_PROPERTIES( "_PCI_FPB_RESOURCE_DESCRIPTOR.$", 0x38, true, 0x2d82333644797ceb );       
        SDK_FIXED_SIZE( fpb_resource_descriptor_t, 0x38 );                
    };                                                                    
};
#include "magic/fpb_resource_descriptor_t.end.hpp"
SDK_VERIFY( struct pci::fpb_resource_descriptor_t::u0_memory_t, 0x10 );
SDK_VERIFY( struct pci::fpb_resource_descriptor_t::u3_rid_t, 0x30 );
SDK_VERIFY( struct pci::fpb_resource_descriptor_t, 0x38 );
