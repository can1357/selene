#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "fpb_resource_descriptor_t.hpp"

#include "magic/fpb_arbiter_t.start.hpp"
namespace pci
{
    struct fpb_fdo_t;

    // [struct _PCI_FPB_ARBITER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fpb_arbiter_t                                        
    {                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                      
        _m00 struct pci::fpb_fdo_t*                fpb_fdo_node;  //{ +0x0000    +0x0000    +0x0000    } | .FpbFdoNode
        _m01 struct nt::kevent_t                   lock;          //{ +0x0008    +0x0008    +0x0008    } | .Lock
        _m02 struct pci::fpb_resource_descriptor_t resource;      //{ +0x0020    +0x0020    +0x0020    } | .Resource
                                                                
        SDK_MAGIC_PROPERTIES( "_PCI_FPB_ARBITER.$", 0x58, true, 0x5efc142ca5215c9b );             
        SDK_FIXED_SIZE( fpb_arbiter_t, 0x58 );                  
    };                                                          
};
#include "magic/fpb_arbiter_t.end.hpp"
SDK_VERIFY( struct pci::fpb_arbiter_t, 0x58 );
