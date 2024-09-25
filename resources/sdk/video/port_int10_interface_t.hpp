#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct int10_bios_arguments_t; }

#include "magic/port_int10_interface_t.start.hpp"
namespace video
{
    // [struct _VIDEO_PORT_INT10_INTERFACE]
    // => WDK 10 (NV)
    //
    struct port_int10_interface_t                              
    {                                                          
        using pint10_allocate_buffer_t = sdk::function<int32_t(void*, uint16_t*, uint16_t*, uint32_t*)>*;                      
        using pint10_free_buffer_t =     sdk::function<int32_t(void*, uint16_t, uint16_t)>*;                      
        using int10_read_memory_t =      sdk::function<int32_t(void*, uint16_t, uint16_t, void*, uint32_t)>*;                      
        using int10_write_memory_t =     sdk::function<int32_t(void*, uint16_t, uint16_t, void*, uint32_t)>*;                      
        using pint10_call_bios_t =       sdk::function<int32_t(void*, struct nt::int10_bios_arguments_t*)>*;                      
                                                               
        // WDK 10                                              
        //                                                     
        _m00 uint16_t                    size;                   //{ +0x0000    } | .Size
        _m01 uint16_t                    version;                //{ +0x0002    } | .Version
        _m02 void*                       context;                //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>* interface_reference;    //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>* interface_dereference;  //{ +0x0018    } | .InterfaceDereference
        _m05 pint10_allocate_buffer_t    int10_allocate_buffer;  //{ +0x0020    } | .Int10AllocateBuffer
        _m06 pint10_free_buffer_t        int10_free_buffer;      //{ +0x0028    } | .Int10FreeBuffer
        _m07 int10_read_memory_t         int10_read_memory;      //{ +0x0030    } | .Int10ReadMemory
        _m08 int10_write_memory_t        int10_write_memory;     //{ +0x0038    } | .Int10WriteMemory
        _m09 pint10_call_bios_t          int10_call_bios;        //{ +0x0040    } | .Int10CallBios
                                                               
        SDK_NONVOL_PROPERTIES( "_VIDEO_PORT_INT10_INTERFACE.$", 0x0, false, 0x14cb731ec13ccfc5 );                      
        SDK_FIXED_SIZE( port_int10_interface_t, 0x48 );                      
    };                                                         
};
#include "magic/port_int10_interface_t.end.hpp"
SDK_VERIFY( struct video::port_int10_interface_t, 0x48 );
